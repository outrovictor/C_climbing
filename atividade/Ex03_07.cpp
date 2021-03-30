#include <stdio.h>
int main()
{

 float dist,tempo, qtd_gasolina, vel, consumo ;

printf("qual a distancia : ");
scanf("%f", &dist);

printf("quanto tempo : ");
scanf("%f", &tempo);

printf("quanta gasolina : ");
scanf("%f", &qtd_gasolina);

vel = dist/ tempo ;

consumo = dist / qtd_gasolina ;

 printf(" velocidade media foi %.1f km/h\n", vel);
 printf(" consumo medio foi %.1f k/l\n", consumo);

}
