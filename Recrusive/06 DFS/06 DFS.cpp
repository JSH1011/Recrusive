#include <iostream>
#include <vector>

using namespace std;

#define SIZE 8

class Graph
{
private:
	bool visited[SIZE];
	vector<int> graph[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = NULL;
		}
	}

	void Insert(int i, int j)
	{
		graph[i].push_back(j);
		graph[j].push_back(i);
	}


	void Search(int start)
	{








	}
};

int main()
{
    // ���� �켱 Ž�� (Depth First Search)
	// 1 2 3 6 7 4 5 �� ��µǾ����.
	Graph graph;

	graph.Insert(1, 2);
	graph.Insert(1, 3);
	graph.Insert(2, 3);

	graph.Insert(2, 4);
	graph.Insert(2, 5);
	graph.Insert(4, 5);

	graph.Insert(3, 6);
	graph.Insert(3, 7);
	graph.Insert(6, 7);

	graph.Search(1);

	return 0;
}






// ��Ʈ
// ���ο� �Լ��� ȣ��Ǹ� �湮 üũ (visited �迭 Ȱ��) & cout ���
// �׸��� for������ ���� ���� ����� ������ ��������� �湮
// �湮�ϱ� ���� visited �迭�� �湮 üũ�� �ϰų� or �Լ��� �������� �� �� ������ �湮 üũ�� �ϰų�













// ��� ����
// ���� ��带 �ݺ��� ������ ǥ���Ѵ�.
// visited[start] = true;
// 
// // ���� ��带 ����Ѵ�.
// cout << start << " ";
// 
// // ���� ���� ����� �ٸ� ��带 ��������� �湮�Ѵ�.
// for (int i = 0; i < graph[start].size(); i++)
// {
// 	// ���� ���� ����� ���� ��带 �����´�.
// 	int next = graph[start][i];
// 
// 	if (visited[next] == false)
// 	{
// 		// ���� ��尡 �湮���� ���� ����� 'Search'�Լ��� ȣ���Ѵ�.
// 		Search(next);
// 	}
// }
// 



// ���ǹ��� ���� ���� �δ� ���
// void Search(int start)
// {
// 	if (visited[start] != NULL)
// 	{
// 		return;
// 	}
// 
// 	visited[start] = true;
// 	cout << start << " ";
// 
// 	for (int i = 0; i < graph[start].size(); i++)
// 	{
// 		Search(graph[start][i]);
// 	}
// }
