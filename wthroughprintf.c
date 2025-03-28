#include<stdio.h>
int main()
{
    FILE *f;
    char name[25];
    int age;
    f=fopen("wtprintf.txt","w");
    if(f==NULL)
        printf("File doesn't exist\n");
    else
    {
        printf("File is opened\n");
        printf("Enter your name\n");

        gets(name);
        printf("Enter your age\n");
        scanf("%d",&age);
        //fprintf(file pointer, format specifiers,variable)
        fprintf(f,"Name:%s \nAge=%d\n",name,age);
        fclose(f);
    }

}
