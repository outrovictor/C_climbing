#include <stdio.h>

int main ()

{
    int a = 8 ;
    int b = 3;
    int c = a ;
    int soma = a+b ;



    printf( " As variveis escolhidas foram  = %d e %d \n", a , b  );

   printf( " A soma entre as variaveis e  = %d\n", soma );



    a = b ;// a= 3
    b = c; //



    printf( " As variveis escolhidas foram  = %d e %d \n", a , b  );

   printf( " A soma entre as variaveis e  = %d\n", soma );


}
