#include <iostream>
#include <vector>
using namespace std;

int Fibonacci(int n) // 재귀 O, 메모이제이션 X
{





}

int Fibonacci(int n, int list[]) // 재귀 O, 메모이제이션 O
{





}

int main()
{
	// 피보나치 수열 구하기
	// 0 1 1 2 3 5 8 13 21 34 55 89...
	// 점화식 : f(n) = f(n-1) + f(n-2)

	// 메모이제이션 하지 않는 함수는 list 활용 X. 값을 저장해서 사용하는 두 번째 함수는 list 활용.

	int list[100] = { 0, };
	cout << Fibonacci(43, list);

	return 0;
}




// 힌트
// 0일 때 0
// 1일 때 1
// 그 외에는 점화식 : f(n) = f(n-1) + f(n-2) 활용.







// 재귀 O, 메모이제이션 X
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



// 재귀 O, 메모이제이션 O
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