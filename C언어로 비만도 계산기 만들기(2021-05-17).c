#include<stdio.h>
int Obesity(double weight, double height) {
	double bmi ;
	double m= height / 100;
	bmi = weight / (m*m);
	printf("BMI: %.1lf\n", bmi);
	if (bmi <= 16.83)printf("��ü�� �Դϴ�.");
	else if (bmi <= 24.74)printf("���� �Դϴ�.");
	else if (bmi <= 27,77)printf("��ü�� �Դϴ�.");
	else if (bmi>27.77)printf("�� �Դϴ�.");
}
int main() {
	double weight, height;
	printf("������(kg): ");
	scanf_s("%lf", &weight);
	printf("����(cm): ");
	scanf_s("%lf", &height);
	Obesity(weight, height);
	return 0;
}