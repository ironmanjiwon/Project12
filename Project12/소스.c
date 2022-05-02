/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소: %p\n", &i);
	printf("c의 주소: %p\n", &c);
	printf("f의 주소: %p\n", &f);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;

	printf("변수 number의 주소 = %p\n", &number);
	printf("포인터의 값 = %p\n", p);
	printf("변수 number의 값 = %d\n", number);
	printf("포인터가 가리키는 값 = %d\n", *p);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;
	printf("변수 number의 값 = %d\n", number);

	*p = 20;
	printf("\n 변수 number의 값 = %d\n", number);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;
	printf("변수 number의 값 = %d\n", number);
	printf("변수 number의 주소 = %p\n", &number);

	printf("변수 p의 값 in로 = %d\n", p);
	printf("변수 p의 값 = %p\n", p);

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

	printf("증가 전 pc = %p, pi = %p, pd = %p\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;

	printf("증가 후 pc = %p, pi = %p, pd = %p\n", pc, pi, pd);
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

	printf("swap() 호출 후 a = %d b = %d\n", a, b);

	return 0;
}