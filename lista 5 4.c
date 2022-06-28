#include <stdio.h>

void fibon(int n){
		int soma,cont, fib1 = 1, fib2 = 1;
  
   scanf("%d", &n);
   
   for(cont=0; cont<n; cont++){
   
      
	   soma = fib1 + fib2;                    
   		fib1 = fib2;                           
      	 fib2 = soma; 
      	 
}
return fib2;
	   
}
