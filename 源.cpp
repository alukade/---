#include<stdio.h>

void hanoi(int n, char x, char y, char z);

void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("%c-->%c\n", x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);//x����z�ƶ���y����һ����x��63��Բ�̽���z�ƶ���y
		printf("%c-->%c\n", x, z);//xֱ���ƶ���z���ڶ�������64��Բ�̴�x�ƶ���z
		hanoi(n - 1, y, x, z);//y����x�ƶ���z����������y��63��Բ�̽���x�ƶ���z
	}
}

int main(void)
{
	int n;

	printf("�����뺺ŵ���Ĳ�����");
	scanf_s("%d", &n);

	hanoi(n, 'X', 'Y', 'Z');

	return 0;
}