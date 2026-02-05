#include <stdio.h>

int main()
{
    unsigned int number = 1; // in binary 0000 0001 , in hex 0x01

    char *first_byte = (char *) &number;

    printf("The address of the variable %u is %p.\n", number,first_byte);

    printf("At the lowest memory address , this byte is stored: %d .\n", *first_byte);

    if(*first_byte)
    {
        printf("The first byte is %d(1) , hence this machine uses little endianness (Intel/amd) in the order of storing bytes in memory.\n",*first_byte);
    }
    else
    {
        printf("The first byte is %d(0) , hence this machine uses big endianness (human way) in the order of storing bytes in memory.\n",*first_byte);
    }
    



    return 0;
}