#include <iostream>
#include <vector>

using namespace std;
#define SIZE 8

void Merge(int list[], int start, int middle, int end)
{
	int count = 0;
	int left = start;
	int right = middle;

	int* ptr = new int[end - start + 1];

	while (left < middle && right < end + 1)
	{
		if (list[left] > list[right])
		{
			ptr[count++] = list[right++];
		}
		else
		{
			ptr[count++] = list[left++];
		}
	}

	while (count <= end - start)
	{
		if (left >= middle)
		{
			ptr[count++] = list[right++];
		}
		else if (right > end)
		{
			ptr[count++] = list[left++];
		}
	}

	for (int i = 0; i < end - start + 1; i++)
	{
		list[i + start] = ptr[i];
	}

	delete[] ptr;
}

void MergeSort(int list[], int start, int end)
{







}

int main()
{
    // 병합 정렬
	int list[SIZE] = { 21,10,12,20,25,13,15,22 };

	MergeSort(list, 0, SIZE - 1);

	for (const int& element : list)
	{
		cout << element << " ";
	}

	return 0;
}




// 힌트
// 1칸 이하가 되면 return
// 중간값 설정
// 
// 왼쪽 절반, 오른쪽 절반 각각 재귀
// 
// 모든 배열이 분할이 된 이후에 Merge로 병합 
// 
// (merge 이후 함수가 종료되면서 더 큰 범위로 병합)













// 답안 예시
// if (start >= end)
// {
// 	return;
// }
// 
// int middle = (start + end) / 2;
// 
// MergeSort(list, start, middle);			// 일단 분할부터 왼쪽
// MergeSort(list, middle + 1, end);		// 오른쪽
// 
// Merge(list, start, middle + 1, end);	// 다 나눠진 상태에서 병합 진행
// 각 단계의 병합이 끝나면 함수의 끝의 도달해서 종료되니까 그 다음 단계의 병합으로 이어진다.