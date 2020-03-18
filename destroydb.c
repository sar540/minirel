#define _XOPEN_SOURCE 500
#include "../include/defs.h"
#include "../include/error.h"
#include "../include/globals.h"
#include <stdio.h>
#include <stdlib.h>
#include <ftw.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>

/*description -----*/
int unlink_cb(const char *fpath, const struct stat *sb, int typeflag, struct FTW *ftwbuf)
{
    int rv = remove(fpath);

    if (rv)
        perror(fpath);

    return rv;
}

/*description -----*/
int rmrf(char *path)
{
    return nftw(path, unlink_cb, 64, FTW_DEPTH | FTW_PHYS);
}

DestroyDB (argc, argv)
int	argc;
char	**argv;

{
    /*creating a pointer dp to DIR struct and assigning it to null pointer*/
    DIR * dp = NULL;

    /*creating  a 128 byte buffer 'ipath' to store the path of the database*/
    char *ipath = NULL;
    ipath = malloc(128);

    /*append the directory name to be created to the path*/
    strcat(ipath,"/home/venkatesh/Downloads/minirel/MINIREL/databases/");
    strcat(ipath,argv[1]);

    //close the directory stream
    closedir(dp);

    /*function call to delete the directories*/
    rmrf(ipath);

    /*free the memory allocated to the ipath variable*/
    free(ipath);

    return (OK);  /* all's fine */
}