#include <iostream>
#include <vector>
using namespace std;

int Fibonacci(int n) // ��� O, �޸������̼� X
{





}

int Fibonacci(int n, int list[]) // ��� O, �޸������̼� O
{





}

int main()
{
	// �Ǻ���ġ ���� ���ϱ�
	// 0 1 1 2 3 5 8 13 21 34 55 89...
	// ��ȭ�� : f(n) = f(n-1) + f(n-2)

	// �޸������̼� ���� �ʴ� �Լ��� list Ȱ�� X. ���� �����ؼ� ����ϴ� �� ��° �Լ��� list Ȱ��.

	int list[100] = { 0, };
	cout << Fibonacci(43, list);

	return 0;
}




// ��Ʈ
// 0�� �� 0
// 1�� �� 1
// �� �ܿ��� ��ȭ�� : f(n) = f(n-1) + f(n-2) Ȱ��.







// ��� O, �޸������̼� X
// if (n <= 0)
// {
// 	return 0;
// }
// else if (n == 1)
// {
// 	return 1;
// }
// 
// return Fibonacci(n - 1) + Fibonacci(n - 2);



// ��� O, �޸������̼� O
// if (n <= 0)
// {
// 	return 0;
// }
// else if (n == 1)
// {
// 	return 1;
// }
// else if (list[n] != 0)
// {
// 	return list[n];
// }
// 
// return list[n] = Fibonacci(n - 1, list) + Fibonacci(n - 2, list);