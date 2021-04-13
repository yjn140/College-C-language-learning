#include <stdio.h>
#include <windows.h>

#include <time.h>
#include <stdlib.h>

//获取当前屏幕分辨率
void getdpi()
{
	int x0, y0;
	x0 = GetSystemMetrics(SM_CXSCREEN); //屏幕宽度
	y0 = GetSystemMetrics(SM_CYSCREEN); //屏幕高度
	printf("当前分辨率为%d,%d。\n", x0, y0);
	printf("经过测试，如果设置的缩放，分辨率会有所变动。\n", x0, y0);
	printf("\n");
}

//设置一个鼠标移动到指定位置并点击的函数
void click()
{
	int x1, y1;
	printf("请键入x,y的值使鼠标移动到指定位置： x,y \n");
	scanf("%d,%d", &x1, &y1);
	SetCursorPos(x1, y1);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //鼠标左键按下
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   //鼠标左键抬起
}

//设置一个连点器
void pointpoint()
{
	printf("把鼠标移动到需要连点的地方");
	while (1)
	{
		Sleep(500);
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //鼠标左键按下
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   //鼠标左键抬起
	}
}

//获取当前鼠标的位置
void getlocation()
{
	while (1)
	{
		POINT mouse;		  //用来储存鼠标的x,y坐标
		GetCursorPos(&mouse); //调用GetCursorPos函数获取坐标值
		printf("鼠标的位置：%2d,%2d\n", mouse.x, mouse.y);
		Sleep(500);
	}
}

int main()
{
	int choose;
loop:
	Sleep(1000);
	printf("请输入你需要功能的数字： 1 2 3 4 \n");
	printf("1.获取当前屏幕分辨率\n");
	printf("2.鼠标移动到指定位置并点击\n");
	printf("3.鼠标连点器\n");
	printf("4.获取当前鼠标的位置\n");

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
		printf("输入的值不合法，请重新输入\n");
		goto loop;
	}
	goto loop;
	printf("测试结束");
}

//当输入了一个字母后，会不停滚动，不知道为什么。