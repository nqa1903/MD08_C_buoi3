#include <stdio.h>

int main(){
	int years;
	printf("nhap vao nam sinh cua ban :");
	scanf("%d", &years);
	int ages = 2023 - years;
	printf("tuoi cua ban la : %d \n",ages);
	(ages%2==0)? printf("Tuoi ban la tuoi %s \n", "chan") : printf("Tuoi ban la tuoi %s", "le");
	
}
