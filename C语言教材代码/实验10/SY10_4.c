#include <stdio.h>
float max = 0, min = 0;
float average(float array[], int n)
{
	int i;
	float aver, sum = array[0];
	max = min = array[0]; /*数组的第一个元素同时作为最大值与最小值*/
	for (i = 1; i < n; i++)
	{
		if (array[i] > max) /*每个元素依次与最大值进行比较*/
			max = array[i];
		else if (array[i] < min) /*每个元素依次与最小值进行比较*/
			min = array[i];
		sum = sum + array[i];
	}
	aver = sum / n;
	return (aver);
}
int main()
{
	float ave, score[10];
	int i;
	for (i = 0; i < 10; i++)
		scanf("%f", &score[i]);
	ave = average(score, 10); /*调用函数求平均值*/
	printf("max=%.0f\n min=%.0f\n average=%.2f\n", max, min, ave);
	return 0;
}
