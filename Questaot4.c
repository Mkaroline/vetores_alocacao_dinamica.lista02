#include<stdio.h>//bibliotecas para as funcoes principais 
#include<stdlib.h>//bibliotecas para as funcoes malloc , free 
#include <time.h> //constante que mede o tempo
#define macro RAND_MAX //solicitar os numeros aleatorios 

int main(void){	//funcao principal

	int i;	//declaracao de variaveis do tipo inteiras
	double n1, *g;	//declaracao da variaveis do tipo real 

	printf("\n Digite a quantidade de elemento para o vetor:\n");//solicitar ao usuario a digitar o numero de vetor que deseja colocar
	scanf("%lf", &n1);//ler e guarda o valor na variavel n1 
	
	g =(double*) malloc(n1*sizeof(double));// abrindo um espaco da memoria atraves da funcao malloc
	
	printf("Intervalo da rand = [0,%d] \n", RAND_MAX); //mostrando o intervalo de rand
	
	for(i=1; i<=10; i++){//laco de repeticao para mostra os 10 nvalores aleatorios 
		printf("Numero %d = %d \n", i, rand());//atraves RAND eh possivel mostrar os numero aleatorios 
	}
	printf("\n");
	
    for(i=1; i<=n1; i++){ //laco de repeticao que serve para imprimir (n1) ou seja os valores aleatorios que foi solicitado pelo usuario
        printf("NUMERO:%d = %d \n", i, rand()); //gerando numeros aleatorios 
    }
	free(g);//liberando g			
	return 0;		
}
