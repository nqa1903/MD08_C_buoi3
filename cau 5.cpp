#include <stdio.h>

int main(){
	int n , thousandDigit, hundredDigit, dozenDigit, unitDigit;
	printf("nhap vao so nguyen n co 4 chu so : ");
	scanf("%d" , &n);
	thousandDigit = n / 1000;
	hundredDigit = (n%1000) / 100;
	dozenDigit = (n%100) / 10;
	unitDigit = n%10;
	
	int sum = thousandDigit + hundredDigit + dozenDigit + unitDigit;
	printf("tong cac chu so cua n la : %d \n", sum);
	printf("so dao nguoc cua n la : %d%d%d%d", unitDigit, dozenDigit, hundredDigit, thousandDigit); 
}
