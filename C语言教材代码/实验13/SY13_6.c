#include <stdio.h>
#define M 3
#define N 4
void max_element(int a[][N])
{ 	int i,j,max,r=0,c=0;
	int (*p)[N];
	p=a;
	max=a[0][0];	
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			if(max<*(*(p+i)+j))
			{	max=*(*(p+i)+j);
				r=i;
				c=j;}
	printf("\nThe maximum array element is:%d",max);
	printf("\nThe row is:%d",r);
	printf("\nThe column is:%d",c);
}
int main()
{  	int i,j,r,c,a[M][N];
	printf("Please input array:\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	printf("array:\n");
	for(i=0;i<M;i++)
	{	for(j=0;j<N;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	max_element(a);
	return 0;
}