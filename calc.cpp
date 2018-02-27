#include<stdio.h>
int soma(int n1, int n2){
	return n1+n2;
}

int subtracao(int n1, int n2){
	return n1-n2;
}
int menu(){
	
	int op;	
	
	printf("\n****************");
	printf("\n Calculadora");
	printf("\n****************");
	printf("\n1-Soma");
	printf("\n2-Subtrair");
	printf("\n0-Sair");
	printf("\n****************");
		
	do{
		printf("\n Escolha uma opcao:");
		scanf("%d", &op);
	}while(op<0 || op>2);
	  	
 return op;
}

int main(){
	int m, n1, n2;
	
	m=menu();
	if(m==0)
		return 0;
	else
	{
		printf("Entre com numero 1:");
		scanf("%d", &n1);
		printf("Entre com numero 2:");
		scanf("%d", &n2);
		
			if(m==1)
				printf("\nSoma= %d", soma(n1,n2));
			else
				if(m==2)
				printf("\nSubtracao= %d", subtracao(n1,n2));
					
	}
	
	return 0;
}
