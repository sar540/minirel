
#include "../include/defs.h"
#include "../include/error.h"
#include "../include/globals.h"
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>


OpenDB (argc, argv)
int	argc;
char	**argv;

{
	 /*creating a pointer dp to DIR struct and assigning it to null pointer*/
    DIR * dp = NULL;

    /*creating  a 128 byte buffer 'ipath' to store the path of the database*/
    char *ipath = NULL;
    ipath = malloc(128);

    /*append the directory name to be created to the path*/
    strcat(ipath,"/home/skywalker/Desktop/minirel/MINIREL/databases");
    strcat(ipath,argv[1]);

    /*opening the directory(database) the db user wanted*/
    dp = opendir(ipath);

    if (dp == NULL)
    {
    	perror("");
    }
    else
    {
    	//printf("database [%s] is opened!\n",argv[1]);
    	//OpenedPath = &(ipath);
    	//OpenedPath++;
    }

     return (OK);  /* all's fine */
}
