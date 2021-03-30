#include <stdio.h>
int main(void)
{
    int dec , oct, hex ;
    float flt, flet ;
    double dbl ;
    char ch ;

printf("character : ");
scanf("%c", &ch);

printf("decimal : ");
scanf("%d", &dec);

printf("octal : ");
scanf("%o", &oct);

printf("hex  : ");
scanf("%X", &hex);

printf("float : ");
scanf("%f", &flt);

printf("float com e  : ");
scanf("%e", &flet);

printf("double : ");
scanf("%lf", &dbl);


printf("char = %c\n dec = %d\n oct = %o\n hex = %X\n  flt = %f\n flet = %e\n double = %lf\n", ch, dec, oct, hex,flt, flet, dbl );

}
