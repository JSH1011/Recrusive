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
	// 하나가 될 때 까지 분할한 후 최댓값 반환. 
	// 병합되면서 각각 반환된 값을 비교하여 범위 내 최댓값 반환.
	// 이 과정을 반복하여 모든 병합이 끝나면 전체 배열의 최댓값이 반환된다.

	int list[SIZE] = { 20, 15, 99, 1, 25, 76, 105, 15 };

	int left = 0, right = SIZE - 1;
	// 실제 구현에서는 이 범위 설정도 엄청 중요하다.
	// 만약 결과가 제대로 출력되지 않는다면 초기값을 다시 한 번 확인해보는 것도 중요함!!!
	// 초기값에 맞게 재귀의 매개변수를 설정해야한다!

	cout << "list의 최댓값 : " << Find(list, left, right) << endl;

	return 0;
}





// 힌트
// 
// 1. left와 right가 같으면 반환.
// 2. 중간값 설정
// 3. numleft에는 시작부터 중간까지 재귀하여 반환되는 최댓값 저장
// 4. numright에는 중간+1부터 마지막까지 재귀하여 반환되는 최댓값 저장
// 5. numleft, numright 값이 다 들어온 후에는 두 값을 비교해서 큰 값을 반환.










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
// return numleft > numright ? numleft : numright; // left, right 비교해서 큰 값 반환. if문 써도 됨.