#include <stdio.h>

int main(){
	//1D- Weekly Revenue Tracker
	double revenue[7];
	double total_weekly_revenue=0.0;
	double average_daily_revenue=0.0;
	
	printf("---Hotel Mnagement System: Weekly Revenue Tracker---\n\n");
	
	//1. Input the revenue for each day
	for(int i=0; i<7; i++){
		printf("Enter revenue for day %d: ", i + 1);
		scanf("%lf", &revenue[i]);
	}
	
	//2.Calculate the total weekly revenue
	for(int i=0; i<7; i++){
		total_weekly_revenue +=revenue[i];
	}
	//3.Calculate the average daily revenue
	average_daily_revenue=total_weekly_revenue/7.0;
	
	//Display the results
	printf("\n---Results---\n");
	printf("The total weekly revenue: %.2f\n",total_weekly_revenue);
	printf("The average daily revenue: %.2fn", average_daily_revenue);
	
	return 0;
}