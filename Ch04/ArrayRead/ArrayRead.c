#include <stdio.h>

int main(void)
{
	int arr[10];
	int readCount = 0;
	int readData;
	int i=1;

	while (i)
	{
		printf("�ڿ��� �Է�: ");
		scanf_s("%d", &readData);
		if (readData < 1)
			break;

		arr[readCount++] = readData;
	}

	for (i = 0; i < readCount; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}