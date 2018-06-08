#include <stdio.h>
#include "ArrayList.h"

// 예제
//int main(void)
//{
//	// ArrayList의 생성 및 초기화
//	List list;
//	int data;
//	ListInit(&list);
//
//	// 5개의 데이터 저장
//	LInsert(&list, 11); LInsert(&list, 11);
//	LInsert(&list, 22); LInsert(&list, 22);
//	LInsert(&list, 33);
//
//	// 저장된 데이터의 전체 출력
//	printf("현재 데이터의 수: %d \n", LCount(&list));
//
//	if (LFirst(&list, &data))	// 첫번째 데이터 조회
//	{
//		printf("%d ", data);
//
//		while (LNext(&list, &data))
//			printf("%d ", data);
//	}
//	printf("\n\n");
//
//	// 숫자 22를 탐색하여 모두 삭제
//	if (LFirst(&list, &data))
//	{
//		if (data == 22)
//			LRemove(&list);
//
//		while (LNext(&list, &data))
//		{
//			if (data == 22)
//				LRemove(&list);
//		}
//	}
//
//	// 삭제 후 남은 데이터 전체 출력
//	printf("현재 데이터의 수: %d \n", LCount(&list));
//
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//
//		while (LNext(&list, &data))
//		{
//			printf("%d ", data);
//		}
//	}
//	printf("\n\n");
//	return 0;
//}

// 문제03-1
int main(void)
{
	// ArrayList의 생성 및 초기화
	List list;
	int data, sum = 0;
	ListInit(&list);

	// 1~9 저장
	LInsert(&list, 1);
	LInsert(&list, 2);
	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);
	LInsert(&list, 6);
	LInsert(&list, 7);
	LInsert(&list, 8);
	LInsert(&list, 9);

	// 저장된 데이터의 전체 출력
	printf("현재 데이터의 수: %d \n", LCount(&list));

	// 합계 출력
	if (LFirst(&list, &data))	// 첫번째 데이터 조회
	{
		printf("%d ", data);
		sum += data;

		while (LNext(&list, &data))
		{
			sum += data;
			//printf("%d ", data);
		}
		printf("합: %d ", sum);
	}
	printf("\n\n");

	// 2의 배수와 3의 배수를 탐색하여 모두 삭제
	if (LFirst(&list, &data))
	{
		printf("2의 배수와 3의 배수 삭제\n");
		if (data%2 == 0 || data%3 == 0)
			LRemove(&list);

		while (LNext(&list, &data))
		{
			if (data % 2 == 0 || data % 3 == 0)
				LRemove(&list);
		}
	}

	// 삭제 후 남은 데이터 전체 출력
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
		{
			printf("%d ", data);
		}
	}
	printf("\n\n");
	return 0;
}