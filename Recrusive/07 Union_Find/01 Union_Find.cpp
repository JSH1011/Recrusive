#include <iostream>

using namespace std;
#define SIZE 7

class Graph
{
private:
	int parent[SIZE];

public:
	Graph()
	{
		for (int i = 1; i < SIZE; i++)
		{
			parent[i] = i;
		}
	}

	int Find(int x)
	{
		// 구현










	}

	void Union(int x, int y)
	{
		Find(x) > Find(y) ? parent[x] = parent[y] : parent[y] = parent[x];
	}

	bool Same(int x, int y)
	{
		return Find(x) == Find(y);
	}
};

int main()
{
    // 유니온 파인드
	// Find 함수 구현. 부모를 반환하는 함수.
	// 자기자신이 부모면, 자신을 반환
	// 아니라면 재귀로 부모의 부모 찾으면서 자기 부모값도 갱신

	Graph graph;

	graph.Union(1, 2);
	graph.Union(2, 3);
	graph.Union(1, 4);

	cout << graph.Same(1, 3) << endl;	// 1
	cout << graph.Same(1, 5) << endl;	// 0

	return 0;
}








// 힌트
// 자기자신이 부모면, 자신을 반환
// 아니면 재귀로 부모의 부모 찾으면서 자기 부모값(parent[x])도 갱신
// 
// 재귀하면서 값도 갱신(저장)하는 방법 : return 변수 = 재귀함수()













// if (parent[x] == x)
// {
// 	return x;
// }
// else
// {
// 	return parent[x] = Find(parent[x]);
// }