#include <iostream>
#include <vector>
using namespace std;

int Fibonacci(int n) // 재귀 O, 메모이제이션 X
{
	// 구현





}

int Fibonacci(int n, int list[]) // 재귀 O, 메모이제이션 O
{
	// 위 함수 완성 후 복사해서 수정




}

int main()
{
	// 피보나치 수열 구하기
	// 0 1 1 2 3 5 8 13 21 34 55 89...
	// 점화식 : f(n) = f(n-1) + f(n-2)

	// 메모이제이션 하지 않는 함수는 list 활용 X. 값을 저장해서 사용하는 두 번째 함수는 list 활용.

	
	cout << Fibonacci(43); // 큰 값을 넣었을 때 오래 걸림. 43이면 몇초 걸림.

	int list[100] = { 0, };
	// cout << Fibonacci(43, list); // 속도가 개선되어야 제대로 만들어진 것. list를 활용하여 시간 단축!

	return 0;
}




// 힌트
// 0일 때 0
// 1일 때 1
// 그 외에는 점화식 : f(n) = f(n-1) + f(n-2) 활용.
// 
// 메모이제이션 활용할 때는 list[n]값이 존재하면 재귀하지않고 바로 list[n]값 반환.
// union find와 같이 return하면서 변수에 저장하는 방법 활용.
// return 변수 = 재귀함수()







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