#include <stdio.h>

void save(int amount)
{
	static long balance = 0;
	//amount가 양수이면 입금, 음수이면 출금
	if (amount >= 0)
		printf("%d\t\t", amount);
	else
		printf("\t%d\t", -amount);

	balance += amount;
	printf("%d\n", balance);
}

int main(void) {
	printf("==========================\n");
	printf("입금\t 출금\t 잔고\n");
	printf("==========================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==========================\n");
	return 0;
}