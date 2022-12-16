#include <stdio.h>
#define pi 3.14

float areaDoCirculo(float raio);

int main (){
	
	float raio,a;
	
	printf("Informe o valor do raio: ");
	scanf("%f",&raio);
	a = areaDoCirculo(raio);
	
	printf("\nA area do circulo equivale a %.2f cm",a);
	
	return raio;
	
	
}

float areaDoCirculo (float raio){
	
	float a;
	
	a = pi * (raio*raio);
	
	return a;
	
}
