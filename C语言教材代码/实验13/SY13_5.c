#include <stdio.h>
#include <string.h>
int del_name(char *name[],int n)
{ 	int i,j,k;
	for(i=0;i<n;i++)
	{	j=i+1;
		while(j<n)
			if(strcmp(name[i],name[j])==0)
			{	for(k=j;k<n;k++)
					strcpy(name[k],name[k+1]);
				name[k]=0;
				n--;
			}
			else
				j++;
	}
	return n;
}
int main()
{  	int k,n;
	char *name[]={"tianjin","taiyuan","beijing","shanghai","tianjin","beijing"};
	n=sizeof(name)/sizeof(char*);
	printf("Before deleting:\n");
	for(k=0;k<n;k++)
		puts(name[k]);
	n=del_name(name,n);
	printf("After deleting:\n");
	for(k=0;k<n;k++)
		puts(name[k]);
	return 0;
}