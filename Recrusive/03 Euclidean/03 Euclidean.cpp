#include <iostream>
#include <vector>

using namespace std;

int Euclid(int x, int y)
{





}

int main()
{
    // 유클리드 호제법
	// 최대 공약수 구하는 알고리즘
	// A % B = ?... R
	// (B % R)을 반복. R이 0일 때의 B가 최대 공약수.
	cout << "최대공약수: " << Euclid(192, 270);


	return 0;
}










// 답안 예시
// if (x % y == 0) { return y; }
// 
// return Euclid(y, x % y);
