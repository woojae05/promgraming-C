#include<stdio.h>
int Obesity(double weight, double height) {
	double bmi ;
	double m= height / 100;
	bmi = weight / (m*m);
	printf("BMI: %.1lf\n", bmi);
	if (bmi <= 16.83)printf("저체중 입니다.");
	else if (bmi <= 24.74)printf("정상 입니다.");
	else if (bmi <= 27,77)printf("과체중 입니다.");
	else if (bmi>27.77)printf("비만 입니다.");
}
int main() {
	double weight, height;
	printf("몸무게(kg): ");
	scanf_s("%lf", &weight);
	printf("신장(cm): ");
	scanf_s("%lf", &height);
	Obesity(weight, height);
	return 0;
}