#include <stdio.h>

int main(){
	float r;
	printf("Nhap ban kinh r : ");
	scanf("%f", &r);
	const float PI = 3.14;
	printf("Chu vi hinh tron la : %f \n" , r*2*PI);
	printf("Ban kinh hinh tron la : %f" , r*r*PI);
}
