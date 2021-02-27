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
		hanoi(n - 1, x, z, y);//x借助z移动到y。第一步：x上63个圆盘借助z移动到y
		printf("%c-->%c\n", x, z);//x直接移动到z。第二步：第64个圆盘从x移动到z
		hanoi(n - 1, y, x, z);//y借助x移动到z。第三步：y上63个圆盘借助x移动到z
	}
}

int main(void)
{
	int n;

	printf("请输入汉诺塔的层数：");
	scanf_s("%d", &n);

	hanoi(n, 'X', 'Y', 'Z');

	return 0;
}