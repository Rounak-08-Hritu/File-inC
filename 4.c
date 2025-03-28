#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    file=fopen("Text.txt","w");
    if(file==NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name\n");
        gets(name);
        //fputs(string,file pointer)
        fputs(name,file);
 fclose(file);
    }
}
