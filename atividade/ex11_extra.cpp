#include <stdio.h>
int main()
{
  float p1, p2 , p2ch, pf , media ;
  int contador_alunos = 1  ;
  int qtd_alunos ;
//
    printf("Quantos alunos ? " );
    scanf("%d", &qtd_alunos);

    while (contador_alunos <= qtd_alunos ) {


    printf("Notas do aluno : %d\n", contador_alunos);
    printf("P1 : ");
    scanf("%f", &p1);
    printf("P2 : ");
    scanf("%f", &p2);

    //calcula a media
    //1� condi��o : comparecer as 2 provas > calcular media
    //2� : faltou a 1 > ler a 2� chamada e calcular media
    // 3� :faltou as 2 > ler a 2� chamada e calcula a media

    // calcular a nota final e informar se esta aprovado ou reprovado

    if (p1 != -1 && p2 != -1) {
        media = (p1 + p2) / 2;
    }
        else {
            // Ler a nota da 2� chamada
            printf("2 chamada : ");
            scanf("%f", &p2ch);

            if (p1 != -1  && p2ch != -1 )
                media = (p1 + p2ch) /2 ; // aluno faltou s� a p2

            else if (p2 != -1 && p2ch != -1 )
                media = (p2 + p2ch) / 2; // aluno faltou s� a p1

            else if ( p1 != -1 && p2ch == -1)
                media = p1 / 2 ;         // aluno faltou a p2 e 2� chamada

            else if (p2 != -1 && p2ch == -1)
                media = p2 /2  ;         // aluno faltou  a p1 e a 2� chamada

            else if ( p2ch != -1 )
                media = p2ch /2 ;        // aluno faltou a p1 e p2

            else
                media = 0 ;             // aluno faltou a todas as provas


                }
            if ( media >= 7 )
                printf("aprovado com  : %.1f\n",media);
            else if (media < 4)
                printf("Reprovado com : %.1f\n",media);
            else {
                  // ler a prova final
                    printf("Prova final : ");
                    scanf("%f", &pf);

                    if (pf!= -1)
                    media = (media + pf) /2 ;
        else
            media = media /2 ;

            if (media >= 5 )
                printf(" aprovado com %.1f\n", media);
            else
                printf(" reprovado com %.1f\n", media);
            }
            printf("media : %f\n",media);
contador_alunos = contador_alunos + 1 ;
}
}
