/*
Utilizando o comando while, peça ao usúario 10 números inteiros e retorne o maior entre eles.
*/

#include<stdio.h>
#include<stdlib.h>


main (){
	int n,maior,i;
	printf("\nInsira 10 numeros inteiros:\n");
	
	i=1;
	maior=0;
	
	while(i<=10){
		scanf("%d",&n);
		if (n>maior)
		maior=n;
		
		i++;
	}
	
	printf("\n\nO maior numero dentre os 10 inseridos eh %d\n\n",maior);
	system ("pause");
	return 0;
}
