#include <stdio.h>
int main()
{
 float nt1 , nt2, media ;


 // repetição ate a n1t ser valida

  do {

 printf( "nota 1: ");
 scanf("%f", &nt1);


 if (nt1 < 0 || nt1 > 10)
    puts("Nota invalida fora de intervalo de 0...10");

}
  while (nt1 < 0 || nt1 > 10);


 // repeti ate que a nt 2 seja valida

   do {

 printf( "nota 2: ");
 scanf("%f", &nt2);



 if (nt2 < 0 || nt2 > 10)
    puts("nt2 invalida fora de intervalo de 0...10");
}

  while (nt2 < 0 || nt2 > 10);

}


