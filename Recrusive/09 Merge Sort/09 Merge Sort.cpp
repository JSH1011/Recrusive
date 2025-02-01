#include <iostream>
#include <vector>

using namespace std;
#define SIZE 8

void Merge(int list[], int start, int middle, int end)
{
	int count = 0;
	int left = start;
	int right = middle; // ���� ������ ������ �־���. 
	// middle�� right�� ���������� ���������� �׿� �°� ���� ������ �ۼ��ؾ���.

	int* ptr = new int[end - start + 1];

	while (left < middle && right < end + 1) // right ���ǿ� ���� �� ���ǵ� ������ �ʿ�.
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
		if (left >= middle) // ����.
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
    // ���� ����
	int list[SIZE] = { 21,10,12,20,25,13,15,22 };

	MergeSort(list, 0, SIZE - 1);

	for (const int& element : list)
	{
		cout << element << " ";
	}

	return 0;
}




// ��Ʈ
// 1ĭ ���ϰ� �Ǹ� return
// �߰��� ����
// ���� ����, ������ ���� ���� ���
// ��� �迭�� ������ �� ���Ŀ� Merge�� ����.
// merge ���� �Լ��� ����Ǹ鼭 �� ū ������ ����










// ��� ����
// if (start >= end)
// {
// 	return;
// }
// 
// int middle = (start + end) / 2;
// 
// MergeSort(list, start, middle);			// �ϴ� ���Һ��� ����
// MergeSort(list, middle + 1, end);		// ������
// 
// Merge(list, start, middle + 1, end);	// �� ������ ���¿��� ���� ����
// �� �ܰ��� ������ ������ �Լ��� ���� �����ؼ� ����Ǵϱ� �� ���� �ܰ��� �������� �̾�����.