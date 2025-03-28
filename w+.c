//header file & library function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // file pointer variable to store the value returned by
    FILE* f;
    // opening the file in write mode to write in the file
    //w+ Opens a file in read and write mode. It creates a new file if it does not exist, if it exists, it erases the contents of the file and the file pointer starts from the beginning
    f=fopen("sun.txt","w+");

    // checking if the file is opened successfully
    if (f==NULL)
    {
        printf("The file is not opened. The program will\n");
    }
    else
    {
        printf("The file is open to write\n");
        printf("Enter your name\n");
char name[50];
        gets(name);

         //fprintf(file pointer, format specifiers,variable)
        fprintf(f,"Name:%s \n",name);
        //closing the file
    fclose(f);

    }


    return 0;
}

