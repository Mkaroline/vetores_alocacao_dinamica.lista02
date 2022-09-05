#include <stdio.h>  // a biblioteca para as funcoes principal
#include <stdlib.h> // a bibliotca  para as funcoes malloc, free

void preenche_ordenado(int n, int *v){ // protipo da funcao
    int i, y, aux; // declaracao variaveis

    for (i = 0; i < n; i++)
    { //

        printf("Digite o numero:\n"); // a posicao do vetor
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++)//laco de repeticao para incrementar o valor [i]
    {
        for (y = i + 1; y < n; y++)//verificar se a posicao [i]=0 e maior que [y]= i+1 
        {
            if (v[i] > v[y])
            {                // se a posicao [i] for maior que a posicao [y] ela ira rodar
                aux = v[i];  // a variaveis aux vai receber o valor do vetor [i]
                v[i] = v[y]; // o vetor [i] vai receber o valor do vetor [y]
                v[y] = aux;  // o vetor [y] vai receber o valor da variavel aux
            }
        }
    }
    printf("\n----VETOR ORDENADO----\n\n");
   for (i =0; i<n; i++){//laco de repeticao que serve para imprimir o vetor ordenado
	   printf("%d\n", v[i]);
   } 
}
int main()
{ // funcao principal

    int n; // declaracao da variavel

    printf("digite a quantidade de elementos:\n"); // pedir para o usuario informar a quantidade de elemento que ira efetua no vetor
    scanf("%d", &n);                               // ler e quarda o valor na variaveis n.

    int *vetor = (int *)malloc(n * sizeof(int)); // alocacao dinamica
    preenche_ordenado(n, vetor);                    // chamada de funcao
    
    

    return 0;
}
