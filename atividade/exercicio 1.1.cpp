#include <stdio.h>

int main ()

{
    float a = 10.0 ;
    float b = 3.0;
    float soma = a+b ;
    float sub = a-b  ;
    float mult = a*b ;
    float div = a/b ;

    /* Nao rola float com numeros reais
    float rest = a%b ;
*/
    printf( " As variveis escolhidas foram  = %.2f e %.2f \n", a , b  );

    printf( " A soma entre as variaveis e  = %.2f\n", soma );

    printf( " A subtracao entre as variaveis e  = %.2f\n", sub );

    printf( " A multiplicacao entre as variaveis e  = %.2f\n", mult );

    printf( " A divisao entre as variaveis e  = %.2f\n", div );

  //  printf( " O resto da divisao entre as variaveis e  = %d\n", rest );

}
