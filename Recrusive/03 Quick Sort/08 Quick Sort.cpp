#include <iostream>
#include <vector>

using namespace std;
#define SIZE 6

void QuickSort(int list[], int start, int end)
{
	// ����








}

int main()
{
	//�� ����
	int list[SIZE] = { 4,5,6,2,3,1 };

	QuickSort(list, 0, SIZE - 1);

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}

	return 0;
}





// ��Ʈ
// ���ǵ��� �� �����ϱ��ѵ� �� �����ؼ� �غ���
// 
// start�� end���� ���ų� Ŀ���� return
// start�� �ǹ��� �ְ�
// left�� start + 1. right�� end
// 
// left�� right���� ���ų� ������ ��� �ݺ� & ��ȯ
// left�� pivot���� ���� ���̸� ��� �̵�, right�� pivot���� ū ���̸� ��� �̵�
// left�� right ��ȯ or left�� right���� ũ�� right�� pivot �� �ֱ�
// 
// �� ������ ������ pivot ���� ���� �迭�� ������ �迭 ���� ���
// 





// if (start >= end)
// {
// 	return;
// }
// 
// int pivot = start;
// int left = start + 1, right = end;
// 
// while (left <= right)
// {
// 	while (left <= end && list[pivot] >= list[left])
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
// QuickSort(list, start, right - 1);
// QuickSort(list, right + 1, end);