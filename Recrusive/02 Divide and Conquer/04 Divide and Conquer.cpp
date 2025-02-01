#include <iostream>
#include <vector>

using namespace std;
#define SIZE 8

int Find(int list[], int left, int right)
{





}

int main()
{
	// 분할 정복
	// 하나가 될 때 까지 분할한 후 최댓값을 반환. 
	// 각각 반환된 값을 비교하여 다시 반환하는 과정을 반복하여 배열의 최댓값 출력.

	int list[SIZE] = { 20, 15, 99, 1, 25, 76, 105, 15 };
	int left = 0, right = SIZE - 1;

	cout << "list의 최댓값 : " << Find(list, left, right) << endl;

	return 0;
}





// 힌트
// 
// 1. left와 right가 같으면 반환.
// 2. left에는 시작부터 중간까지 재귀
// 3. right에는 중간+1부터 마지막까지 재귀
// 4. left,right 값이 다 들어온 후에는 두 값을 비교해서 큰 값을 반환.










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
// return numleft > numright ? numleft : numright;