#include <stdio.h>
#include <windows.h>

#include <time.h>
#include <stdlib.h>

//��ȡ��ǰ��Ļ�ֱ���
void getdpi()
{
	int x0, y0;
	x0 = GetSystemMetrics(SM_CXSCREEN); //��Ļ���
	y0 = GetSystemMetrics(SM_CYSCREEN); //��Ļ�߶�
	printf("��ǰ�ֱ���Ϊ%d,%d��\n", x0, y0);
	printf("�������ԣ�������õ����ţ��ֱ��ʻ������䶯��\n", x0, y0);
	printf("\n");
}

//����һ������ƶ���ָ��λ�ò�����ĺ���
void click()
{
	int x1, y1;
	printf("�����x,y��ֵʹ����ƶ���ָ��λ�ã� x,y \n");
	scanf("%d,%d", &x1, &y1);
	SetCursorPos(x1, y1);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //����������
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   //������̧��
}

//����һ��������
void pointpoint()
{
	printf("������ƶ�����Ҫ����ĵط�");
	while (1)
	{
		Sleep(500);
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //����������
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   //������̧��
	}
}

//��ȡ��ǰ����λ��
void getlocation()
{
	while (1)
	{
		POINT mouse;		  //������������x,y����
		GetCursorPos(&mouse); //����GetCursorPos������ȡ����ֵ
		printf("����λ�ã�%2d,%2d\n", mouse.x, mouse.y);
		Sleep(500);
	}
}

int main()
{
	int choose;
loop:
	Sleep(1000);
	printf("����������Ҫ���ܵ����֣� 1 2 3 4 \n");
	printf("1.��ȡ��ǰ��Ļ�ֱ���\n");
	printf("2.����ƶ���ָ��λ�ò����\n");
	printf("3.���������\n");
	printf("4.��ȡ��ǰ����λ��\n");

	scanf("%d", &choose);
	if (choose == 1 || choose == 2 || choose == 3 || choose == 4)
		switch (choose)
		{
		case 1:
			getdpi();
			break;
		case 2:
			click();
			break;
		case 3:
			pointpoint();
			break;
		case 4:
			getlocation();
			break;
		}
	else
	{
		printf("�����ֵ���Ϸ�������������\n");
		goto loop;
	}
	goto loop;
	printf("���Խ���");
}

//��������һ����ĸ�󣬻᲻ͣ��������֪��Ϊʲô��