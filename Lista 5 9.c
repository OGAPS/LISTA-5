int resmedia(float frequencia, float v1, float v2, float v3){
	float media;
	
	media = (v1+v2+v3)/3;
	
	if ( media >= 6 && frequencia >= 75.0) //aprovado
		return 1;
	
	else if (4>=media< 6 && frequencia >= 75.0) //prova final
		return 2;
	
	else if ( media < 4 || frequencia < 75) //reprovado
		return 3;
}

//Condições:
//? (Se media>=6 e freq>=75) “Aprovado”
//? (Se media<6 e media>=4 e freq>=75) “Final”
//? (Se media<4 ou freq<75) “Reprovado”
