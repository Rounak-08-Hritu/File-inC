#include<stdio.h>
int main()
{
    FILE *f;
    char fname[40],lname[20];
    f=fopen("text.txt","r");
    if(f==NULL)
        printf("File doesn't exist\n");
    else
    {
        printf("File is opened\n");
        //fscanf(filepointer,format specifier,variablename)
    fscanf(f,"%s %s",&fname,&lname);
    printf("%s %s\n",fname,lname);
    fclose(f);
    }
}
