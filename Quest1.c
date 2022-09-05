#include <stdio.h>//biblioteca serve para printf , scanf e outras funcoes 
#include<stdlib.h>// biblioteca para alocacao dinamica , free

int main (void){//funcao principal
    system("cls");//limpar terminal
int maior, i , n, menor, soma;//declaracao das variaveis


printf("Digite a quantidade de elementos do vetor\n");// perdir ao usuario a quantidade de elemento deseja efetuar
scanf("%d", &n);//

int *vetor = (int*)malloc (n*sizeof(int));//alocacao dinamica do vetor  

if(vetor == NULL ){//// caso nao seja possivel alocar memoria suficiente enviar mensagem e sair do programa com exit(1);
    printf("\n Erro de alocacao de memoria ");
    exit(1);
}

for (i=0; i<n; i++){// laco de repeticao serve para digitar os numero de acordo com a quantidade de elemento em que o usuario solicitou
	printf("digite o numero:\n");
    scanf("%i", &vetor[i]);

    }
    maior = vetor[0];
    for (i =0; i<n; i++){// se o vetor[i] for maior que a variavel maior, maior recebe o vetor[i]
        if (vetor[i] > maior){
            maior = vetor[i];

        }
    }
    menor = vetor[0];
    for (i =0; i<n; i++){// se o vetor[i] for menor que a variavel menor, menor recebe o vetor[i]
        if (vetor[i] < menor){
            menor = vetor[i];
        }

    }
//mostra o vetor
printf("\n----Vetor ----\n");
for (i = 0; i<n; i++){// laco de repeticao que soma os valores 
    printf("\n%d", vetor[i]);
    soma = maior + menor ;
}
// imprimindo o resultado final 
printf("\n Maior valor: %d ", maior);
printf("\n menor valor: :%d", menor);
printf("\n soma dos valores: :%d", soma);

free (vetor);// liberando vetor

    return 0;
}
