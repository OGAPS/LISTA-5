int s(int num){
	int valor, cont, soma = 0;
	
	for (cont = 1; cont <= num; cont++){
	
		scanf("%d", &valor);
		
		soma = soma + valor;
	}
	
	return soma;
}
