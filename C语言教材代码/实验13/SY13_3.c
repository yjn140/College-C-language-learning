#include<stdio.h>
#include<math.h>
#define M 3
#define N 4
prime(int(*p)[N])					/*形参为行指针*/
{   	int i,j,k,found,s;
	for(i=0;i<M;i++)
	{   	for(j=0;j<N;j++)
		{   	s=*(*(p+i)+j); 			/*s为元素p[i][j]*/
			found=1;
			for(k=2;k<=sqrt(s)&&found;k++)
				if(s%k==0)found=0; 	/*s不是素数*/
			if(found&&s!=1)
				printf("%3d",s);
		}
	}
}
int main()
{   	int a[M][N],i,j;
	printf("Please input array:\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]); 		/*输入数组元素*/
	printf("array:\n");
	for(i=0;i<M;i++)
	{   	for(j=0;j<N;j++)
			printf("%3d",a[i][j]); 		/*每个元素占3格输出*/
		printf("\n");}
	printf("\nprime:");
	prime(a); 					/*调用函数输出数组a的素数*/
	return 0;
}
