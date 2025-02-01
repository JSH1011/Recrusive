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
		// �θ�� �ڱⰡ ������ �Ű����� ����











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
    // ���Ͽ� ���ε�
	// find �Լ� ����. �θ� ��ȯ�ϴ� �Լ�.
	// �ڱ��ڽ��� �θ��, �ڽ��� ��ȯ
	// �ƴϸ� ��ͷ� �θ� ȣ���Ͽ� �θ��� �θ� ã��

	Graph graph;

	graph.Union(1, 2);
	graph.Union(2, 3);
	graph.Union(1, 4);

	cout << graph.Same(1, 3) << endl;	// 1
	cout << graph.Same(1, 5) << endl;	// 0

	return 0;
}






// ��Ʈ
// �ڱ��ڽ��� �θ��, �ڽ��� ��ȯ
// �ƴϸ� ��ͷ� �θ� ȣ���Ͽ� �θ��� �θ� ã��













// if (parent[x] == x)
// {
// 	return x;
// }
// else
// {
// 	return parent[x] = Find(parent[x]);
// }