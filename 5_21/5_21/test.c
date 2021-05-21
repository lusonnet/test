#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h> 
int main(void)
{
	int a, b, c;
	double area, perimeter;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		perimeter = a + b + c;
		area = sqrt(perimeter / 2.0 * (perimeter / 2.0 - a) * (perimeter / 2.0 - b) * (perimeter / 2.0 - c));
		printf("area = %.2lf; perimeter = %.2lf", area, perimeter);
	}
	else
	{
		printf("These sides do not correspond to a valid triangle");
	}
	return 0;
}
