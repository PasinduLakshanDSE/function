#include<stdio.h>
float hour_charge;
int hour;
float income;
int em_num;

void input(){
	
	printf("Enter the employee number:");
	scanf("%d",&em_num);
	printf("Enter the number of hour:");
	scanf("%d",&hour);
	printf("Enter the hour charge:");
	scanf("%f",&hour_charge);
	
}
void getIncome(){
	income=hour * hour_charge;
}
void display(){
	printf("%d income is:%f\n",em_num,income);
	
	
}
int main(){
	input();
	getIncome();
	display();
	
	return 0;
}