#include <iostream>
#include <vector>

using namespace std;
#define SIZE 8

int Find(int list[], int left, int right)
{





}

int main()
{
	// ���� ����
	// �ϳ��� �� �� ���� ������ �� �ִ��� ��ȯ. 
	// ���� ��ȯ�� ���� ���Ͽ� �ٽ� ��ȯ�ϴ� ������ �ݺ��Ͽ� �迭�� �ִ� ���.

	int list[SIZE] = { 20, 15, 99, 1, 25, 76, 105, 15 };
	int left = 0, right = SIZE - 1;

	cout << "list�� �ִ� : " << Find(list, left, right) << endl;

	return 0;
}





// ��Ʈ
// 
// 1. left�� right�� ������ ��ȯ.
// 2. left���� ���ۺ��� �߰����� ���
// 3. right���� �߰�+1���� ���������� ���
// 4. left,right ���� �� ���� �Ŀ��� �� ���� ���ؼ� ū ���� ��ȯ.










// if (left == right)
// {
// 	return list[left];
// }
// 
// int mid = (left + right) / 2;
// 
// int numleft = Find(list, left, mid);
// int numright = Find(list, mid + 1, right);
// 
// return numleft > numright ? numleft : numright;