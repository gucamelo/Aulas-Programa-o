#include<stdlib.h>
#include <stdio.h>
#include<time.h>

int main(){
	srand(time(NULL)); //defenir random seed
	int eq1,eq2; //defenir variaveis
	eq1 = rand() % 5; //Gerar resultado da equipa 1
	eq2 = rand() % 5; //Gerar resultado da equipa 2
	printf("\tPortugal: %d \n\tEspanha: %d",eq1,eq2); //Apresentar o resultado
	return 0;
}
