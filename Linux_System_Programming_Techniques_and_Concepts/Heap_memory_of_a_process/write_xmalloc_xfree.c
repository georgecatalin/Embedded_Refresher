/*
Problem statement: write your own version of malloc() and free() functions using sbrk() system call
*/

#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>

void * xmalloc(int no_bytes)
{
    void *ptr;
    ptr = sbrk(0);

    if(sbrk(no_bytes) == NULL)
    {
        return NULL;
    }

    return ptr;
}

void *xfree(int no_bytes)
{
    assert(no_bytes>0);
    sbrk(no_bytes * -1);
}

int main(void)
{
    char *this_ptr = (char *) xmalloc(20);
    printf("I allocated 20 bytes in the heap memory, starting from position %p.\n", this_ptr);

    strcpy(this_ptr,"C is nice");
    printf("The string copied in this heap section is %s.\n",this_ptr);

    xfree(20);

    return 0;
}