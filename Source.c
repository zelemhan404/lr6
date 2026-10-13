#include<stdio.h>
#include<locale.h>
int task1() {
	setlocale(LC_CTYPE, "RUS");
	int years, days;
	printf("введите год\n");
	scanf("%d", &years);
	printf("остатка от деления введенного числа на 4 равен %d\n", years / 4);
	printf("введите кол-во дней:");
	scanf("%d", &days);

	if (days == 366) {
		printf("год високосный\n");
	}
	else {
		printf("год невисокосный\n");
	}
	return 0;
}
int task2() {
	setlocale(LC_CTYPE, "RUS");
	int years, days;
	printf("введите год\n");
	scanf("%d", &years);
	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0) {
		printf("год високосный\n");
	}
	else {
		printf("год невисокосный\n");
	}

}
int main() {
	task2();
}