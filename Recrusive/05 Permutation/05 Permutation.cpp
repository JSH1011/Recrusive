#include <iostream>

using namespace std;
#define SIZE 3

void Permutation(int n, int list[], int depth)
{







}


int main()
{
    // ��Ʈ��ŷ
	// 1,2,3 3���� ���� �� �ִ� ������ ����� ���� ��� ���Ͻÿ�.

	int list[SIZE] = { 1,2,3 };
	Permutation(SIZE, list, 0);

	return 0;
}





// ��Ʈ
// depth 0 : 00 01 02 �ٲٱ�
// depth 1 : 11 12 �ٲٱ�
// depth 2 : ���
// 
// depth�� ���� �ؿ� �����ϸ� ��� �� ���
// �� �ܿ��� swap�� Ȱ���Ͽ� �� ����
// ��� ȣ��
// ���� �ݺ��� ���� ���� �ٽ� swap���� ���� ����.
// 
// �� �غ��� ���ڰ� �� ���� ���� �� �����ϴ��� Ȯ��.










// ��� ����
// if (depth == n - 1)
// {
// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << list[i] << " ";
// 	}
// 
// 	cout << endl;
// 	return;
// }
// 
// for (int i = depth; i < 3; i++)
// {
// 	swap(list[depth], list[i]);
// 	Permutation(n, list, depth + 1);
// 	swap(list[i], list[depth]);
// }