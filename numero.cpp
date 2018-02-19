
#include<stdio.h>

main(){

int n[10];
int maior=0, i;

for(i=0;i<9;i++){
	
	printf("Entre com o numero:");
	scanf("%d", &n[i]);
	if(n[i] > maior)
		maior = n[i];
}
printf("Maior valor= %d", maior);

return 0;
}
