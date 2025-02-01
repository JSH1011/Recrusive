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
    // 깊이 우선 탐색 (Depth First Search)
	// 1 2 3 6 7 4 5 가 출력되어야함.
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






// 힌트
// 새로운 함수가 호출되면 방문 체크 (visited 배열 활용) & cout 출력
// 그리고 for문으로 현재 노드와 연결된 노드들을 재귀적으로 방문
// 방문하기 전에 visited 배열로 방문 체크를 하거나 or 함수로 진입했을 때 맨 위에서 방문 체크를 하거나













// 답안 예시
// 현재 노드를 반복한 것으로 표시한다.
// visited[start] = true;
// 
// // 현재 노드를 출력한다.
// cout << start << " ";
// 
// // 현재 노드와 연결된 다른 노드를 재귀적으로 방문한다.
// for (int i = 0; i < graph[start].size(); i++)
// {
// 	// 현재 노드와 연결된 다음 노드를 가져온다.
// 	int next = graph[start][i];
// 
// 	if (visited[next] == false)
// 	{
// 		// 다음 노드가 방문하지 않은 노드라면 'Search'함수를 호출한다.
// 		Search(next);
// 	}
// }
// 



// 조건문을 제일 위에 두는 방식
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
