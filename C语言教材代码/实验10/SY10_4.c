#include <stdio.h>
float max = 0, min = 0;
float average(float array[], int n)
{
	int i;
	float aver, sum = array[0];
	max = min = array[0]; /*����ĵ�һ��Ԫ��ͬʱ��Ϊ���ֵ����Сֵ*/
	for (i = 1; i < n; i++)
	{
		if (array[i] > max) /*ÿ��Ԫ�����������ֵ���бȽ�*/
			max = array[i];
		else if (array[i] < min) /*ÿ��Ԫ����������Сֵ���бȽ�*/
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
	ave = average(score, 10); /*���ú�����ƽ��ֵ*/
	printf("max=%.0f\n min=%.0f\n average=%.2f\n", max, min, ave);
	return 0;
}
