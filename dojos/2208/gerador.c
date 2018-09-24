#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int N;
	int meuRand;
	
	system("clear");
	printf("Gerador de número aleatório\n");
	printf("Digite um valor para N:");
	scanf("%d", &N);

	if(N<1){
		printf("Apenas valores maiores que 1.\n");
	} else {	

	srand((unsigned)time(NULL));
	meuRand = (rand()%N) + 1;

	printf("\nrand retornou %d\n\n", meuRand );

	}

}