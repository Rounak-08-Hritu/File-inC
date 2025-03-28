#include<stdio.h>
int main()
{
    FILE *f;
    char ch[40];
    f=fopen("test.txt","r");
    if(f==NULL)
        printf("File doesn't exist\n");
    else
    {
        printf("File is opened\n");
        //fgets(variable,size,filepointer)
        while(!feof(f))
            {
        fgets(ch,40,f);
        printf("%s\n",ch);
            }
    }
}
