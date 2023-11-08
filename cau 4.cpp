#include <stdio.h>

int main(){
	float number1 , number2 , number3;
	printf("nhap 3 so nguyen : ");
	scanf("%f %f %f", &number1 , &number2 , &number3);
	float max = number1 , min = number1;
	
	max = (max < number2) ? number2 : max;
	max = (max < number3) ? number3 : max;
	min = (min > number2) ? number2 : min;
	min = (min > number3) ? number3 : min;
	
	printf("max va min la : %f %f", max , min);
}
