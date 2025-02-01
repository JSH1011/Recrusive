#include <iostream>
#include <vector>

using namespace std;
#define SIZE 8

// 이거 매개변수도 없는 상태로 연습해야하나. 저번 실기시험 때 매개변수도 줬는지 기억이 안나네.
// 근데 구상을 잘 할 수 있으면, 필요한게 뭐고 필요없는게 뭔지 바로 판단할 수 있으니까 별로 중요하지 않아.

void BinarySearch(int list[], int key, int left, int right)
{






}


int main()
{
	// 이진 탐색
	// 검색 대상의 중간 값을 확인하고, 찾고자 하는 값과 비교하여 검색 범위를 절반으로 줄여나가는 방식으로 동작

	int list[SIZE] = { 5,6,11,13,27,55,66,99 };

	int left = 0, right = SIZE - 1;

	BinarySearch(list, 66, left, right);   // 66는 배열 내에 있으니까 인덱스값 출력
	BinarySearch(list, 65, left, right);   // 65는 없으니까 Not Key Found 출력.

	return 0;
}





// 힌트
// 이진탐색 : 중간 값과 찾는 값을 비교한 후, 범위를 절반으로 축소시키면서 재귀 반복
//
// 먼저 중간 값 설정
// 현재 중간 값보다 찾는 값이 크면 left 증가 (중간 값보다 크게)
// 현재 중간 값보다 찾는 값이 작으면 right 감소 (중간 값보다 작게)
// 같으면 index 출력
// left가 right를 초과하면 값이 존재하지 않으니까 not key found










// 답안 예시
// int pivot = (left + right) / 2;
// 
// if (left > right)
// {
// 	cout << key << " Not Key Found." << endl;
// }
// else if (list[pivot] == key)
// {
// 	cout << key << " Found. Index : " << pivot << endl;
// }
// else if (list[pivot] < key)
// {
// 	left = pivot + 1;
// 	BinarySearch2(list, key, left, right);
// }
// else
// {
// 	right = pivot - 1;
// 	BinarySearch2(list, key, left, right);
// }