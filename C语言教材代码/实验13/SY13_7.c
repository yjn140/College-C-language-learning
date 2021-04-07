#include <stdio.h>
void scan(int (*p)[4],int m)
{   int i,j,flag;
	for(i=0;i<m;i++)
	{	flag=0;
		for(j=0;j<4;j++)
			if(*(*(p+i)+j)<60)flag=1;
		if(flag)
		{	printf("No.%d having failed,score is:\n",i+1);
			for(j=0;j<4;j++)
				printf("%3d",*(*(p+i)+j));
			printf("\n");
		}
	}
}
int main()
{  	int score[5][4]={{78,67,84,56},{88,86,93,83},{79,74,55,78},{88,82,79,84},{93,89,87,84}};
	scan(score,5);
	return 0;
}