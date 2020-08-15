#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num1;
	float num2[1000],sum = 0;
	printf("Find the average\n");
	printf("How much number do you have : ");
	scanf("%d", &num1);
	for (int i = 0; i < num1; i++) {
		printf("Enter number : ");
		scanf("%f", &num2[i]);
		sum += num2[i];
	}
	printf("Average of these number is %.3f", sum / num1);
	return 0;
}