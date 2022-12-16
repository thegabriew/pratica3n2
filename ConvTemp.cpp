#include<stdio.h>
#include <locale.h>

float convCpF (float c){
	float calc;
	calc = (c*9/5) + 32;
	return calc;
}

float convFpC(float f){
	float calc;
	calc= (f-32)*5/9;
	return calc;
}

int main (){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int op;
	float temp,temp0;
	printf("Conversor de temperatura\nFahrenheit & Celsius\n");
	printf("\n");
	printf("Digite a conversao que deseja fazer: \n");
	printf("1- Celsius para Fahrenheit\n2- Fahrenheit para Celsius\n");
	scanf("%d",&op);
	
	while(op!=1&&op!=2){
	printf("Valor invalido, tente novamente.\n");
	printf("Digite a conversao que deseja fazer: \n");
	printf("1- Celsius para Fahrenheit\n2- Fahrenheit para Celsius\n");
	scanf("%d",&op);
	}
	
	printf("Digite a temperatura: ");
	scanf("%f",&temp);
	
	if(op==1){
	temp0=  convCpF (temp);
	printf("A temperatura em Fahrenheit: %.2f °F\n",temp0);
	}else if(op==2){
	temp0= convFpC (temp);
	printf("A temperatura em Celsius: %.2f °C\n",temp0);
	
	}
	
	return 0;
	
}
