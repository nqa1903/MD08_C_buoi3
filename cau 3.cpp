#include <stdio.h>

int main(){
	float math , literature , english;
	printf("nhap diem 3 mon toan van anh : ");
	scanf("%f %f %f", &math ,&literature, &english);
	printf("Diem tong 3 mon la : %.2f \n" , math + literature + english);
	printf("Diem trung binh la : %2f" , (math+literature+english)/3);
}
