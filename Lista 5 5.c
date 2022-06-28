#include <stdio.h>

int ehprimo(int num){
		
	int cont, n;

	for(cont=2 ; cont<num ; cont++){
		
		if(n%cont == 0)
		
			return 0;
	}
	return 1;
}
