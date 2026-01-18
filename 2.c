#include<stdio.h>
int main()
{
    FILE *file;
    char name[20]="Anisul Islam";
    int i,l=strlen(name);
    file=fopen("test.txt","w");
    if(file==NULL)
        printf("File doesn't exist\n");
    else
    {
        printf("File is opened\n");
        for(i=0;i<l;i++)
            fputc(name[i],file);
        fclose(file);
    }
}

//
