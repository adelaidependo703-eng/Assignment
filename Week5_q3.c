#include<stdio.h>

//Function
float convertToCelsius(float fahrenheit);

int main(){
	float fahrenheit;
	
	printf("---Temperature Converter---\n");
	printf("Enter temperature in Fahrenheit:");
	scanf("%f", &fahrenheit);
	
	float celsius= convertToCelsius(fahrenheit);
	
	printf("Temperature in celsius:%.2f C\n", celsius);
	
	return 0;
}

//Function definition 
float convertToCelcius(float fahrenheit){
	float celsius= (fahrenheit-32.0) * 5.0 /9.0;
	return celsius;
}