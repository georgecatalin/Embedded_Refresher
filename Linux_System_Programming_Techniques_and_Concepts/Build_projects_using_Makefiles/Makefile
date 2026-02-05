TARGET:my_program
my_program:main.o	libmylib.a
	gcc main.o -o  my_program -L . libmylib.a -lm 

libmylib.a:common_math/common_math.o complex_math/complex_math.o trig_math/trig_math.o
	ar rs libmylib.a common_math/common_math.o complex_math/complex_math.o trig_math/trig_math.o

common_math.o:common_math/common_math.c
	gcc -c -I . common_math/c -o common_math/common_math.o

complex_math.o:complex_math/complex_math.c 
	gcc -c -I . complex_math/complex_math.c -o complex_math/complex_math.o

trig_math.o:trig_math/trig_math.o
	gcc -c -I . trig_math/trig_math.c -o trig_math/trig_math.o

main.o:main.c	
	gcc -c -I common_math -I complex_math -I trig_math main.c -o main.o

clean:
	rm common_math/common_math.o
	rm complex_math/complex_math.o
	rm trig_math/trig_math.o
	rm main.o
	rm libmylib.a
	rm my_program