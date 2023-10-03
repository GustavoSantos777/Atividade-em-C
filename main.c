#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int opcao;
	float preco;
	float total;
	
	opcao = 1;
	while (opcao==1){
	
	printf("Coloque o preço do Produto:");
	scanf("%f", &preco);
	
	if (preco <100){
		
		total = preco *  10 / 100 + preco;
		
		
	}
	else{
	
		total = preco * 20 / 100 + preco;
	
	}
	
	printf("O Valor do Produto é: R$%.2f\n", total);
	printf("Se deseja continuar Digite 1, se não, Digite 0\n");
	scanf("%d", &opcao);
	
	}
	
	return 0;
}

