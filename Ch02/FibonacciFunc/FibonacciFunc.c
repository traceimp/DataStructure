#include <stdio.h>

int Fibo(int n)
{
	printf("func call param %d \n", n);		// ȣ����� ���

	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int main(void)
{
	// �Ǻ���ġ �Լ� ���
	/*int i;
	for (i = 1; i < 15; i++)
		printf("%d ", Fibo(i));*/


	// �Ǻ���ġ �Լ��� ��¼���
	Fibo(7);

	return 0;
}