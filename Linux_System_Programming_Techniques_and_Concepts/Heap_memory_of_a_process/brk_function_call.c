
/*
BRK System Call: It expands the heap memory by moving the break pointer to a specified valid address within the process's virtual address space. 
If successful, it returns zero; if it fails, it returns minus one. The lecture includes an example illustrating the importance of using a valid 
address to prevent failure.

SBRK System Call: This call increases the heap memory segment by a specified number of bytes and returns the old break pointer address if successful,
 or null if it fails. An example demonstrates expanding the heap memory, and calling SBRK with zero returns the current break pointer without 
 changing the heap size.

Link to malloc: The lecture connects SBRK to the malloc function in the C standard library, explaining how malloc acts as a wrapper for SBRK, 
facilitating memory allocation in C programs.
*/
#include <unistd.h>
#include <stdio.h>



int main(void)
{
    //Get the current break point
    void *current_breakpointer = sbrk(0);
    printf("The current break pointer is %p.\n", current_breakpointer);

    void *new_break_pointer = (void *) current_breakpointer +1024;
    printf("The calculated new break pointer of the heap is %p.\n",new_break_pointer);

    //Make use of brk() system call to allocate memory in the heap space of virtual process memory
    int return_value = brk(new_break_pointer);

    if(return_value == -1)
    {
        perror("Error during calling brk()");
    }

    //make use of sbrk() call to allocate memory (provied the previous allocation was legit :) )
    void * new_new_break_pointer = sbrk(1048);

    printf("The result of allocating memory with sbrk() system call is %p.\n", new_new_break_pointer);

    if(!new_new_break_pointer)
    {
        perror("Error during calling of sbrk()");
    }

    //print the current break pointer after allocating space second time
    printf("The break pointer in the heap after allocating space twice is %p.\n",sbrk(0));

    return 0;
}