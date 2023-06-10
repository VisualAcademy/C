#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// �׷����� ��带 ǥ���ϴ� ����ü
struct Node
{
    int vertex;            // ����� ���� �����ϴ� ����
    struct Node* next;     // ���� ��带 ����Ű�� ������
};

// �׷����� ǥ���ϴ� ����ü
struct Graph
{
    struct Node* adjList[MAX_VERTICES];    // ���� ����Ʈ�� �����ϴ� �迭
    int numVertices;                       // �׷����� �� ��� ����
};

// ���ο� ��带 �����ϴ� �Լ�
struct Node* createNode(int v)
{
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// ���ο� �׷����� �����ϴ� �Լ�
struct Graph* createGraph(int vertices)
{
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    int i;
    for (i = 0; i < vertices; i++)
    {
        graph->adjList[i] = NULL;   // ��� ��带 �ʱ⿡�� ������� ���� ����(NULL)�� ����
    }

    return graph;
}

// �� ��带 �����ϴ� ������ �߰��ϴ� �Լ�
void addEdge(struct Graph* graph, int src, int dest)
{
    // src���� dest�� ���� ���� �߰�
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    // dest���� src�� ���� ���� �߰� (������ �׷����� ����)
    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

// �׷����� ���� ����Ʈ�� ����ϴ� �Լ�
void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct Node* temp = graph->adjList[v];
        printf("���� %d�� ���� ����Ʈ\n", v);
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
