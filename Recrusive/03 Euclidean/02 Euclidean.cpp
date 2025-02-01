#include <iostream>
#include <vector>

using namespace std;

int Euclid(int x, int y)
{
	// 구현



}

int main()
{
    // 유클리드 호제법
	// 최대 공약수 구하는 알고리즘
	// A % B = ?... R
	// (B % R)을 반복. R이 0일 때의 B가 최대 공약수.
	cout << "최대공약수: " << Euclid(192, 270); // 6이 출력되어야함.


	return 0;
}








// 힌트
// y가 0이면 x를 반환. 또는 x%y가 0일 때, y를 반환
// 돌아가는 조건을 먼저 작성하고 아닌 경우에는 계속 재귀로 (y % x%y)을 반복













// 답안 예시
// if (x % y == 0) { return y; }
// 
// return Euclid(y, x % y);
