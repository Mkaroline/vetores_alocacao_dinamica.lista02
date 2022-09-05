#include<stdio.h>//biblioteca para funcao principal
#include<stdlib.h>//biblioteca para alocacao dinamica, free
#include<math.h>// biblioteca para operacoes matematica

typedef struct aluno{//declarando uma estrutura do tipo aluno
 
float p1, p2, p3, media;//declaracao das variavel na estrutura 

}aluno;//renomendo struct para aluno

int main (void) {//funcao principal

int  i, alunos;//declaracao principal


    printf("digite a quantidade de alunos:\n");//pedir ao usuario digitar a quantidade de aluno
    scanf("%i", &alunos);// ler e guarda o valor na variavel alunos

aluno *notas = (aluno*)malloc(alunos*sizeof(aluno));//alocacao dinamica de vetor do tipo aluno
aluno *media = (aluno*)malloc(alunos*sizeof(aluno));//alocacao dinamica do vetor do tipo aluno

for(i=0; i<alunos; i++){// laco de repeticao para preencher vetor notas
	
printf("\n----NOTAS DO ALUNO (%d)----\n\n",i+1);
    printf("digite a nota (%d)\n",i +1 );
    scanf("%f", &notas[i].p1);
    printf("digite a nota (%d)\n",i +1 );
    scanf("%f", &notas[i].p2);
    printf("digite a nota (%d)\n",i +1 );
    scanf("%f", &notas[i].p3);

}


    for (i=0; i < alunos; i++){// laco de repeticao para peencher o vetor media 
       media[i].media = (notas[i].p1 + notas[i].p2 + notas[i].p3)/ 3;
    }
   
 for (i=0; i < alunos; i++){// laco de repeticao para imprimir medias dos alunos
 	
 	printf("\n----MEDIA DO ALUNO(%d)----\n\n", i+1);
    printf(" \n A media do aluno: %.2f\n", media[i].media);
 }
free(notas);//liberar vetor notas
free (media);//liberar vetor media 

    return 0;

}