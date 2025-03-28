//header file & library function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // file pointer variable to store the value returned by
    FILE* f;
    // opening the file in read mode to read out things existing in the file
    //r+ opens a file in both read and write mode
    f=fopen("sun.txt","r+");

    // checking if the file is opened successfully
    if (f==NULL)
    {
        printf("The file is not opened. The program will\n");
    }
    else
    {
        printf("The file is open to read Successfully\n");
         //closing the file
    fclose(f);
    }

    return 0;
}
