#include<stdio.h>
int main()
{
    FILE *f;
    char ch;
    f=fopen("test.txt","r");
    if(f==NULL)
        printf("File doesn't exist\n");
    else
    {
        printf("File is opened\n");
        //char ch=fgetc(f);
        while(!feof(f))
        {
            ch=fgetc(f);
            printf("%c",ch);
        }
        fclose(f);
    }
}
