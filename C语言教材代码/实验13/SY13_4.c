#include<stdio.h>
#include<string.h>
void sort(char *name[],int n)
{   char *temp;int i,j,k;
    for(i=0;i<n-1;i++)
    {   k=i;
        for(j=i+1;j<n;j++)
             if(strcmp(name[k],name[j])>0)k=j;
        if(k!=i)
        {   temp=name[i];
            name[i]=name[k];
            name[k]=temp;}
    }
}
int main()
{   int i,m;
    char *book_name[]={"Visual Basic","Visual C++6.0","C Programing","FORTRAN","C#"};
    m=sizeof(book_name)/sizeof(char *);
    printf("book name:\n");
    for(i=0;i<m;i++)
        printf("%s\n",book_name[i]);
    sort(book_name,m);
    printf("\n");
    printf("output:\n");
    for(i=0;i<m;i++)
        printf("%s\n",book_name[i]);
    return 0;
}