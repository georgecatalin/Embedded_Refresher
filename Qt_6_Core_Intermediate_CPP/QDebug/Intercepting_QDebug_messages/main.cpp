#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDateTime>
#include <QTextStream>

const QtMessageHandler QT_DEFAULT_MESSAGE_HANDLER = qInstallMessageHandler(nullptr);

void logToFile(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QString this_text;

    switch (type)
    {
    case QtInfoMsg:
        this_text = QString("Info: %1").arg(msg);
        break;
    case QtDebugMsg:
        this_text = QString("Debug: %1").arg(msg);
        break;
    case QtWarningMsg:
        this_text = QString("Warning: %1").arg(msg);
        break;
    case QtCriticalMsg:
        this_text = QString("Critical: %1").arg(msg);
        break;
    case QtFatalMsg:
        this_text = QString("Fatal: %1").arg(msg);
        break;
    default:
        break;
    }


    QFile file("log.txt");
    if(file.open(QIODevice::Append))
    {
        QTextStream ts(&file);
        ts<<QDateTime::currentDateTime().toString()<<" - "<<this_text<<" file: "<<context.file<<" line: "<<context.line;
        ts.flush();
        file.close();
    }

    (*QT_DEFAULT_MESSAGE_HANDLER)(type, context, msg);

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Set up code that uses the Qt event loop here.
    // Call QCoreApplication::quit() or QCoreApplication::exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to QCoreApplication::exec() or use the Non-Qt Plain C++ Application template.

    qInstallMessageHandler(logToFile);

    qInfo()<<"This is an info message";
    qDebug()<<"This is a debug message";
    qWarning()<<"This is a warning message";
    qCritical()<<"This is a critical message";
    qFatal()<<"This is CRITICAL";

    return QCoreApplication::exec();
}
