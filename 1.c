#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("text.txt","w");
    if(file==NULL)
        printf("File doesn't exist\n");
    else
    {
        printf("File is opened\n");
        fclose(file);
    }
    return 0;
}

//
