#include"stdio.h"
#include"stdlib.h"
int main()
{
	int num, num1, t, a, b;
	scanf_s("%d%d", &num, &num1);
	a = num;
	b = num1;
	if (num1 < num || num1 == 0)
		printf("NONE");
	while(b!=0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	num /= a;
	num1 /= a;
	printf("%d/%d", num, num1);
	system("pause");
	return 0;
}