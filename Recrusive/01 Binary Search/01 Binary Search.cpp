#include <iostream>
#include <vector>

using namespace std;
#define SIZE 8

// �̰� �Ű������� ���� ���·� �����ؾ��ϳ�. ���� �Ǳ���� �� �Ű������� ����� ����� �ȳ���.
// �ٵ� ������ �� �� �� ������, �ʿ��Ѱ� ���� �ʿ���°� ���� �ٷ� �Ǵ��� �� �����ϱ� ���� �߿����� �ʾ�.

void BinarySearch(int list[], int key, int left, int right)
{






}


int main()
{
	// ���� Ž��
	// �˻� ����� �߰� ���� Ȯ���ϰ�, ã���� �ϴ� ���� ���Ͽ� �˻� ������ �������� �ٿ������� ������� ����

	int list[SIZE] = { 5,6,11,13,27,55,66,99 };

	int left = 0, right = SIZE - 1;

	BinarySearch(list, 66, left, right);   // 66�� �迭 ���� �����ϱ� �ε����� ���
	BinarySearch(list, 65, left, right);   // 65�� �����ϱ� Not Key Found ���.

	return 0;
}





// ��Ʈ
// ����Ž�� : �߰� ���� ã�� ���� ���� ��, ������ �������� ��ҽ�Ű�鼭 ��� �ݺ�
//
// ���� �߰� �� ����
// ���� �߰� ������ ã�� ���� ũ�� left ���� (�߰� ������ ũ��)
// ���� �߰� ������ ã�� ���� ������ right ���� (�߰� ������ �۰�)
// ������ index ���
// left�� right�� �ʰ��ϸ� ���� �������� �����ϱ� not key found










// ��� ����
// int pivot = (left + right) / 2;
// 
// if (left > right)
// {
// 	cout << key << " Not Key Found." << endl;
// }
// else if (list[pivot] == key)
// {
// 	cout << key << " Found. Index : " << pivot << endl;
// }
// else if (list[pivot] < key)
// {
// 	left = pivot + 1;
// 	BinarySearch2(list, key, left, right);
// }
// else
// {
// 	right = pivot - 1;
// 	BinarySearch2(list, key, left, right);
// }