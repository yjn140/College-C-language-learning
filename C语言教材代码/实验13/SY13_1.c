#include<stdio.h>
#include<math.h>
#define M 3
#define N 4
prime(int *p,int n)				/* �ж����� */
{   	int i,j,k,found,s;
	for(i=0;i<n;i++)
	{   	s=p[i];
		found=1;
		for(k=2;k<=sqrt(s)&&found;k++)
			if(s%k==0)found=0; 	/* found=0������ */
		if(found&&s!=1)
			printf("%3d",s);
	}
}
int main()
{   	int a[M][N],i,j;
	printf("Please input array:\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]); 	/* ��������Ԫ�� */
	printf("array:\n");
	for(i=0;i<M;i++)
	{   	for(j=0;j<N;j++)
			printf("%3d",a[i][j]); 	/* �������Ԫ�� */
		printf("\n");}
	printf("\nprime:");
	prime(&a[0][0],M*N); 			/* ���ú������ж����� */
	return 0;
}
