#include <iostream>
#include <vector>

using namespace std;
#define SIZE 6

void QuickSort(int list[], int start, int end)
{
	


}

int main()
{
	//퀵 정렬
	int list[SIZE] = { 4,5,6,2,3,1 };

	QuickSort(list, 0, SIZE - 1); //

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}

	return 0;
}





// 힌트
// 조건들이 좀 복잡하긴한데 잘 생각해서 해보자
// start가 end보다 같거나 커지면 return.
// start에 피벗을 넣고, left에 start + 1. right에 end
// left는 pivot보다 작은 값이면 이동, right는 pivot보다 큰 값이면 이동
//
// left와 right 교환 or left가 right보다 크면 right에 pivot 값 넣기





// if (start >= end)   // 방어코드 안하면 재귀 시에 조건을 다 걸어줘야해.
// {
// 	return;
// }
// 
// int pivot = start;
// int left = start + 1, right = end;
// 
// while (left <= right)
// {
// 	while (left <= end && list[pivot] >= list[left]) // 왜 여기만 등호가 붙는가
// 	{
// 		left++;
// 	}
// 
// 	while (right > start && list[pivot] <= list[right])
// 	{
// 		right--;
// 	}
// 
// 	if (left > right)
// 	{
// 		swap(list[pivot], list[right]);
// 	}
// 	else
// 	{
// 		swap(list[left], list[right]);
// 	}
// }
// 
// QuickSort(list, start, right - 1); // 방어코드 하면 조건문 2개 안넣어도 됨.
// QuickSort(list, right + 1, end);