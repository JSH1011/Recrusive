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
		// 부모랑 자기가 같으면 매개변수 리턴











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
	// find 함수 구현. 부모를 반환하는 함수.
	// 자기자신이 부모면, 자신을 반환
	// 아니면 재귀로 부모를 호출하여 부모의 부모 찾기

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
// 아니면 재귀로 부모를 호출하여 부모의 부모 찾기













// if (parent[x] == x)
// {
// 	return x;
// }
// else
// {
// 	return parent[x] = Find(parent[x]);
// }