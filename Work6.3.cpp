#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int i, a, b=0,tmp;
    int num[1000];
    scanf("%d", &a);
    for (i = 0; i < a; i++) {
        scanf("%d", &num[i]);
    }
    i = 0;
    do
    {
        if (i < a - 1 && num[i] > num[i + 1])
        {
            tmp = num[i + 1];
            num[i + 1] = num[i];
            num[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }
    } while (i < a);
    int c = a - 1;
    for (i =1; i < 100 ; i++) {
        for (int j = 0; j < a; j++) {
            if (((num[c]*i) % num[j]) == 0) {
                b++;
            }     
        }
        if (b == a) {
            printf("%d", num[c] * i);
            break;
        }
        else if (b != a) {
            b = 0;
        }
    }
}