#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main() {
	int a, b, c, d, e, i=0;
	int ta=0, tb=0, tc=0, td=0, te=0,tt=0,TT=0;
	scanf("%d", &i);
	for (; i > 0; i--) {
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		ta += a;
		tb += b;
		tc += c;
		td += d;
		te += e;
	}
	tb *= 6;
	tc *= 4;
	td *= 2;
	tt = tb + tc + td + te;
	TT = ta + (tt / 8);
	if (tt % 8 == 0)
		printf("%d", TT);
	else
		printf("%d", TT + 1);

}