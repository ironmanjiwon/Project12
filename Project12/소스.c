/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i�� �ּ�: %p\n", &i);
	printf("c�� �ּ�: %p\n", &c);
	printf("f�� �ּ�: %p\n", &f);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;

	printf("���� number�� �ּ� = %p\n", &number);
	printf("�������� �� = %p\n", p);
	printf("���� number�� �� = %d\n", number);
	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;
	printf("���� number�� �� = %d\n", number);

	*p = 20;
	printf("\n ���� number�� �� = %d\n", number);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;
	printf("���� number�� �� = %d\n", number);
	printf("���� number�� �ּ� = %p\n", &number);

	printf("���� p�� �� in�� = %d\n", p);
	printf("���� p�� �� = %p\n", p);

	printf()
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char* pc, c;
	int* pi, i;
	double* pd, f;

	pc = &c;
	pi = &i;
	pd = &f;

	printf("���� �� pc = %p, pi = %p, pd = %p\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;

	printf("���� �� pc = %p, pi = %p, pd = %p\n", pc, pi, pd);
	printf("pc+2 = %p, pi+2 = %p, pd+2 = %p\n", pc + 2, pi + 2, pd + 2);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++;

	printf("i = %d, pi = %p\n", i, pi);
	*pi++;

	printf("i = %d, pi = %p\n, i, pi");

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void modify(int value)
{
	value = 99;
}

int main(void)
{
	int number = 1;

	modify(number);
	printf("number = %d\n", number);

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);

	printf("swap() ȣ�� �� a = %d b = %d\n", a, b);

	return 0;
}