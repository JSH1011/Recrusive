#include <iostream>
#include <vector>

using namespace std;

int Euclid(int x, int y)
{
	// ����



}

int main()
{
    // ��Ŭ���� ȣ����
	// �ִ� ����� ���ϴ� �˰���
	// A % B = ?... R
	// (B % R)�� �ݺ�. R�� 0�� ���� B�� �ִ� �����.
	cout << "�ִ�����: " << Euclid(192, 270); // 6�� ��µǾ����.


	return 0;
}








// ��Ʈ
// y�� 0�̸� x�� ��ȯ. �Ǵ� x%y�� 0�� ��, y�� ��ȯ
// ���ư��� ������ ���� �ۼ��ϰ� �ƴ� ��쿡�� ��� ��ͷ� (y % x%y)�� �ݺ�













// ��� ����
// if (x % y == 0) { return y; }
// 
// return Euclid(y, x % y);
