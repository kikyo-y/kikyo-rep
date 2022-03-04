#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

enum Sex
{
	female,
	male,
	secret
};

enum Xing
{
	nan = 4,
	nv = 5,
	zhong = 9
};

int main()
{
	enum Sex s = female;
	printf("%d %d %d\n", female, male, secret);
	printf("%d %d %d\n", nan, nv, zhong);
	printf(" % d\n", s);

	return 0;
}