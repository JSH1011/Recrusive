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
	// �ϳ��� �� �� ���� ������ �� �ִ� ��ȯ. 
	// ���յǸ鼭 ���� ��ȯ�� ���� ���Ͽ� ���� �� �ִ� ��ȯ.
	// �� ������ �ݺ��Ͽ� ��� ������ ������ ��ü �迭�� �ִ��� ��ȯ�ȴ�.

	int list[SIZE] = { 20, 15, 99, 1, 25, 76, 105, 15 };

	int left = 0, right = SIZE - 1;
	// ���� ���������� �� ���� ������ ��û �߿��ϴ�.
	// ���� ����� ����� ��µ��� �ʴ´ٸ� �ʱⰪ�� �ٽ� �� �� Ȯ���غ��� �͵� �߿���!!!
	// �ʱⰪ�� �°� ����� �Ű������� �����ؾ��Ѵ�!

	cout << "list�� �ִ� : " << Find(list, left, right) << endl;

	return 0;
}





// ��Ʈ
// 
// 1. left�� right�� ������ ��ȯ.
// 2. �߰��� ����
// 3. numleft���� ���ۺ��� �߰����� ����Ͽ� ��ȯ�Ǵ� �ִ� ����
// 4. numright���� �߰�+1���� ���������� ����Ͽ� ��ȯ�Ǵ� �ִ� ����
// 5. numleft, numright ���� �� ���� �Ŀ��� �� ���� ���ؼ� ū ���� ��ȯ.










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
// return numleft > numright ? numleft : numright; // left, right ���ؼ� ū �� ��ȯ. if�� �ᵵ ��.