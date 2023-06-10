#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// 그래프의 노드를 표현하는 구조체
struct Node
{
    int vertex;            // 노드의 값을 저장하는 변수
    struct Node* next;     // 다음 노드를 가리키는 포인터
};

// 그래프를 표현하는 구조체
struct Graph
{
    struct Node* adjList[MAX_VERTICES];    // 인접 리스트를 저장하는 배열
    int numVertices;                       // 그래프의 총 노드 개수
};

// 새로운 노드를 생성하는 함수
struct Node* createNode(int v)
{
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// 새로운 그래프를 생성하는 함수
struct Graph* createGraph(int vertices)
{
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    int i;
    for (i = 0; i < vertices; i++)
    {
        graph->adjList[i] = NULL;   // 모든 노드를 초기에는 연결되지 않은 상태(NULL)로 설정
    }

    return graph;
}

// 두 노드를 연결하는 간선을 추가하는 함수
void addEdge(struct Graph* graph, int src, int dest)
{
    // src에서 dest로 가는 간선 추가
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    // dest에서 src로 가는 간선 추가 (무방향 그래프를 가정)
    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

// 그래프의 인접 리스트를 출력하는 함수
void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct Node* temp = graph->adjList[v];
        printf("정점 %d의 인접 리스트\n", v);
        while (temp)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int vertices = 5;
    struct Graph* graph = createGraph(vertices);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    printGraph(graph);
    return 0;
}
