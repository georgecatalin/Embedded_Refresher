#include <stdio.h>
#include <string.h>

void foo(char *bar)
{
    char temp[15];
    strcpy(temp,bar);
}

int main(int argc,char *argv[])
{
    int k=1978;


    foo(argv[1]);
    printf("I am done");

    return 0;
}

/*
georgeca@georgeca-VirtualBox:~/my_sandbox/Embedded_Refresher/Linux_System_Programming_Techniques_and_Concepts/Stack_memory_of_a_process$ ./crash ilovemycountryromaniaeurope
*** stack smashing detected ***: terminated
Aborted (core dumped)


Analysis: since the string "ilovemycountryromaniaeurope" is greater than 15 chars . what is on top of the 15 is copied in the stack memory which belonged to the stack 
frame of foo (base pointer of the caller area and return address of the main(caller):printf)



*/