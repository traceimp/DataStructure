#include <stdio.h>

int Fibo(int n)
{
	printf("func call param %d \n", n);		// 호출순서 출력

	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int main(void)
{
	// 피보나치 함수 출력
	/*int i;
	for (i = 1; i < 15; i++)
		printf("%d ", Fibo(i));*/


	// 피보나치 함수의 출력순서
	Fibo(7);

	return 0;
}