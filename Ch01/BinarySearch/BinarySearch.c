#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;		// 탐색 대상의 시작 인덱스 값
	int last = len-1;	// 탐색 대상의 마지막 인덱스 값
	int mid;			// 탐색 대상의 중간 인덱스 값

	while (first <= last)
	{
		mid = (first + last) / 2;	// 탐색 대상의 중앙 인덱스 찾기
		
		if (target == ar[mid])		// 중앙에 저장된 것이 타겟이라면
		{
			return mid;
		}
		else						// 타겟이 아니라면 탐색 대상을 반으로 줄인다.
		{
			if (target < ar[mid])
				last = mid - 1;		// 왜 -1을 하였을까? (오른쪽은 다 버림)
			
			else
				first = mid + 1;	// 왜 +1을 하였을까? (왼쪾은 다 버림)
		}
	}
	return -1;		// 찾지 못했을 때 반환되는 값 -1
}

int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	// 배열에 있는 숫자
	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	// 배열에 없는 숫자
	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	return 0;
}