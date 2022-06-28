#include <stdio.h>

float p( int sexo , float altura){
	float h, m;
	int n;
	
printf("1 - H  /  2 - M");
scanf("%d", &n);

	if(sexo== 1){ //h
	
		h= (72.7 * altura) - 58;
		
		printf("HOMEM: %.2f", h);
}
	else if (sexo == 2){ //m

		m= (62.1 * altura) - 44.7;
		
		printf("MULHER: %.2f", m);

}
	return m;
	return h;
}
