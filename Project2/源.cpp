#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float pi = acos(-1.0);
	printf("n=");
	scanf_s("%d", &n);
	printf("sin(%d)=%f",n, sin(n*pi/180));
	return 0;
}