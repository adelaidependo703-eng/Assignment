#include<stdio.h>
//Function
float calculateFare(float distance);

int main(){
	float distance;
	
	printf("---Fare calculator---\n");
	printf("Enter distance traveled in kilometers: ");
	scanf("%f", &distance);
	
	float totalFare=calculateFare(distance);
	
	printf("Total Fare: ksh %.2f\n",totalFare);
	
	return 0;
}
//Function definition
float calculateFare(float distance){
	float ratePerkm=50.0;
	return distance *ratePerkm;
}