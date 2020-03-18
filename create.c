
#include "../include/defs.h"
#include "../include/error.h"
#include "../include/globals.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <dirent.h>
#include <stdbool.h>
#define BLOCK_SIZE sizeof(_SBLOCK)
#define SIZE1 20
#define SIZE2 50
//#define

Create (argc, argv)
int	argc;
char	**argv;

{
/*    //print command line arguments 
	short	k;		//iteration counter  
	printf ("%s:\n", argv[0]);
	for (k = 1 ; k < argc; ++k)
		printf ("\targv[%d] = %s\n", k, argv[k]);
        printf("Created Relation\n");
        return (OK);  // all's fine 
*/

FILE *fp=NULL;

//create a relation file if it doesn't exist 
fp=fopen("/home/skywalker/Desktop/miirel/MINIREL/databases/", "w");

//close the file
fclose(fp);
}
/*
printf("%s\n",argv[1]);

typedef struct FORMAT{
    struct FORMAT[20];
    if(FORMAT=="i")
        int format;
    else if(FORMAT=="f")
        float FORMAT;
    else if(FORMAT=="sN")
        char FORMAT[50];
    else
        printf(stdout, "Format of the attribute is not in the Constitution!\n");
        getch();
        exit(-1);
}; FORMAT





typedef struct __s_block{
    struct __s_block *next;
    bool isfree;
    size_t size;
    void *memoryAddress;
}_SBLOCK;

_SBLOCK *allocateMemBlock(size_t size)
{
    _SBLOCK *block = (_SBLOCK*)sbrk(0);
    void *memadr = (void*)sbrk(0);
    void *allocate_mem = (void*)sbrk(BLOCK_SIZE + size);

    if(allocate_mem == (void*)-1){
        return NULL;
    }else{
        block->next = NULL;
        block->isfree = false;
        block->size = size;
        block->memoryAddress = memadr+BLOCK_SIZE;
        return block;
    }
}

//allocate next memory block
void allocateNextMemBlock(size_t size, _SBLOCK **head)
{
    _SBLOCK *current = *head;
    void *allocate_mem = NULL;
    void *memadr = (void*)sbrk(0);

    if(current==NULL){
        *head = allocateMemBlock(size);
    }else{
        while(current->next != NULL){
            current = current->next;
        }
        _SBLOCK *newblock = sbrk(0);

        allocate_mem = (void*)sbrk(BLOCK_SIZE + size);      
        if(allocate_mem == (void*) - 1){ }
        else{
            newblock->next = NULL;
            newblock->isfree = false;
            newblock->size = size;
            newblock->memoryAddress = memadr+BLOCK_SIZE;
            current->next = newblock;
      }
    }
}

void freeMemBlock(_SBLOCK **head)
{
    if(*head == NULL){}
    else{
        (*head)->isfree = true;
    }
}

void printMemBlocks(_SBLOCK *current)
{
    while(current != NULL){
        printf("isfree = %d, size = %ld, memoryAddress = %p, current = %p, next-node = %p\n",
                current->isfree, current->size, current->memoryAddress, current, current->next);
        current = current->next;
    }
}

}*/
