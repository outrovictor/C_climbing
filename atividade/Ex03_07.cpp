#include <stdio.h>
int main()
{

 float sal, percent, aumento, sal_antigo, sal_novo ;

printf("qual a salario : ");
scanf("%f", &sal);
printf("qual percentual?  : ");
scanf("%f", &percent);

sal_antigo = sal ;

aumento = sal * (percent / 100)  ;

sal_novo = sal_antigo + aumento ;

 printf(" O salario antigo era R$ %.2f \n", sal_antigo);
 printf(" O percetual de Aumento era de  %.1f %%\n", percent);
 printf(" O novo salario e de R$ %.2f %\n", sal_novo);
}
