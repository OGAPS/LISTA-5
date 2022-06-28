#include <stdio.h>

int ehprimo(int num){
		int cont, n;

	for(cont= 2 ; cont<num ; cont++){
		
		if(n%cont == 0)
		
			return 0;
	}
	return 1;
}

int quaisprimos( int num ){
	int i, soma = 0;

	for(cont= 2; cont<=num; cont++){
		
		if(ehprimo(cont) == 1)
		
			soma = soma + 1;
	}
	return soma;
}
