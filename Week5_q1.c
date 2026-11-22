#include <stdio.h>
//Function at the top
float CalculateElectricBill(int consumedUnits);

int main(){
	int consumedUnits;
	float totalBill;
	
	printf("---Electric Bill Calculator---\n\n");
	printf("Please enter the number of units consumed: ");
	scanf("%d", &consumedUnits);
	
	totalBill=CalculateElectricBill(consumedUnits);
	printf("\nFor %d units, the total bill is ksh %.2f\n", consumedUnits, totalBill);
	
	return 0;
	
}
//Function definition at the bottom
float CalculateElectricBill(int consumedUnits) {
	float bill=0.0;
	//Your calculation logic here (rates per unit)
	bill= consumedUnits*15.0;
	return bill;
}