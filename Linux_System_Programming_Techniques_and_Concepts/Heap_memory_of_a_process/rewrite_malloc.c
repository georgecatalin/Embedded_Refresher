#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>

struct meta_block_t
{
    size_t size;
    struct meta_block_t *next;
    bool is_free;
};

void *xmalloc(int no_bytes)
{
    struct meta_block_t *ptr;
    ptr = (struct meta_block_t *) sbrk(0);

    if(sbrk(no_bytes + sizeof(struct meta_block_t)) == NULL)
    {
        return NULL;
    }

    ptr->size = no_bytes;
    ptr->next = NULL;
    ptr->is_free = false;

    return (void *) (ptr+1);

/*
Question: why (void *) (ptr+1) and not (void *) ptr?
Response: Because struct meta_block_t *ptr; so ptr is a pointer of type struct meta_pointer_block_t. 
ptr + 1 does not mean the address of ptr + 1 byte, but the address of ptr + sizeof(meta_block_t). 

(ptr address) + sizeof(meta_block_t)
not (ptr address) + 1 byte

anyways ptr + 1 points to the data block of that memory chunk

Address →
+--------------------+----------------------+
| meta_block_t       | user data (payload)  |
+--------------------+----------------------+
^                    ^
ptr                  ptr + 1   ← what we return


Why NOT return ptr?

If you did:

return ptr;


Then the caller would overwrite your metadata:

char *p = xmalloc(10);
strcpy(p, "hello");   // overwrites header


Your allocator would be destroyed.That’s why allocators hide metadata before the returned pointer.

*/

}

int main(void)
{
    char *ptr=(char *) xmalloc(30);

    printf("I allocated succesfully 30 bytes of heap memory. The datablock starts from this memory address[%p].\n",ptr);
    

    return 0;
}