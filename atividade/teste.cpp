#include <stdio.h>
int main(void)
{
int n;
char ch;
float x;

printf("N: ");
scanf("%d", &n);
getchar(); // chamada extra  é só p desbugar o ENTER. .
printf("CH: ");
scanf("%c", &ch);
printf("X: ");
scanf("%f", &x);

printf("N = %d CH = %c X = %f\n",

n, ch, x);

}
