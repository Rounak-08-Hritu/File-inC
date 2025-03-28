#include<stdio.h>
int main()
{
    FILE *f;
    char name[40];
    int age,pnum,n,i;
    f=fopen("student.txt","a");
    if(f==NULL)
        printf("File doesn't exist\n");
    else
    {
        printf("file is opened\n");
        printf("Enter number of students\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("Enter student name\n");
            scanf("%s",name);
            getchar();
            printf("Enter student age\n");
            scanf("%d",&age);

            printf("Enter phone number\n");
            scanf("%d",&pnum);

            fprintf(f,"\n%s\t%d\t%d",name,age,pnum);
        }
        fclose(f);
    }
}
