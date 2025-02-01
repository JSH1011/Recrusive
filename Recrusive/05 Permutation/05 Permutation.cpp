#include <iostream>

using namespace std;
#define SIZE 3

void Permutation(int n, int list[], int depth)
{







}


int main()
{
    // 백트래킹
	// 1,2,3 3개로 만들 수 있는 순열의 경우의 수를 모두 구하시오.

	int list[SIZE] = { 1,2,3 };
	Permutation(SIZE, list, 0);

	return 0;
}





// 힌트
// depth 0 : 00 01 02 바꾸기
// depth 1 : 11 12 바꾸기
// depth 2 : 출력
// 
// depth가 제일 밑에 도달하면 모든 값 출력
// 그 외에는 swap을 활용하여 값 변경
// 재귀 호출
// 다음 반복이 돌기 전에 다시 swap으로 원상 복귀.
// 
// 다 해보고 문자가 더 많을 때도 잘 동작하는지 확인.










// 답안 예시
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