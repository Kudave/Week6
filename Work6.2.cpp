#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
int main() {
	int a;
	double x = 0, y = 0;
	char b;
	scanf("%d%s", &a, &b);
	while (b != '*') {
		if (b == 'N')
			y += a;
		else if (b == 'S')
			y -= a;
		else if (b == 'W')
			x -= a;
		else if (b == 'E')
			x += a;
		scanf("%d%s", &a, &b);
	}
	printf("%.3lf %.3lf", x, y);
	printf("%.3lf", sqrt((x * x) + (y * y)));
}