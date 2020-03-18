
#include "../include/defs.h"
#include "../include/error.h"
#include "../include/globals.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <dirent.h>


CreateDB (argc, argv)
int	argc;
char	**argv;

{

    /*create a new directory database to store all the databases*/
    mkdir("/home/skywalker/Desktop/minirel/MINIREL/databases/",S_IRWXU|S_IRWXG|S_IRWXO);

    /*creating a pointer dp to DIR struct and assigning it to null pointer*/
    DIR * dp = NULL;

    /*creating  a 128 byte buffer 'ipath' to store the path of the database*/
    char *ipath = NULL;
    ipath = malloc(128);

    /*append the directory name to be created to the path*/
    strcat(ipath,"/home/skywalker/Desktop/minirel/MINIREL/databases/");
    strcat(ipath,argv[1]);

    /*create the required database folder*/
    mkdir(ipath,S_IRWXU|S_IRWXG|S_IRWXO);

    /*remove the new directory created by us*/
    //rmdir(ipath);

    /*free the memory allocated to the ipath variable*/
    free(ipath);

    //close the directory stream
    closedir(dp);
    
    return (OK);  /* all's fine */
}
