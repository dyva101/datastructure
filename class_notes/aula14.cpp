#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

typedef struct Node() {
    int iData;
    struct Node* next;
    
} Node;

typedef struct Queue {
    struct Node* front;
    struct Node* rear;
} Queue;

Node* newNode(int);
void enQueue(Queue*, int);
Queue* newQueue();
void deQueue(Queue* const);

int main() {

    //1. Estrutura de um nó (v)
    //2. Estrutura de uma fila (v)
    //3. Função para criar filas (v)
    //4. Função que cria um nó (v)
    //4. Função que enfileira um nó (v)
    //4. Função que exibe o primeiro elemento (v)
    //4. Função que exibe o último elemento (v)
    

    Queue* queue = newQueue();
    showFirstElement(queue);
    showLastElement(queue);
    
    showElements(queue);
    cout << "///////////////////////////////////////////////" << endl;
    
    //partições de igualdade, técnicas de teste
    enQueue (queue, 0);
    
    showFirstElement(queue);
    showLastElement(queue);
    
    showElements(queue);
    cout << "///////////////////////////////////////////////" << endl;
    //adicionar mais elementos
    enQueue (queue, 3);
    enQueue (queue, 7);
    enQueue (queue, 42);
    
    showFirstElement(queue);
    showLastElement(queue);
    
    showElements(queue);
    cout << "///////////////////////////////////////////////" << endl;
    std::cout << "Hello FUCKING STUPID World" << endl;

    return 0;
}

Node* newNode(int iValue) {
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->iData = iValue;
    temp->next = nullptr;
}

void enQueue(Queue* queue, int iValue) {
    Node* temp = newNode(iValue)

    if (queue->front == nullptr) {
        queue->front = temp;
        queue->rear = temp;
    } else {
        queue->rear->next = temp;
        queue->rear = nullptr;
    }

}

Queue* newQueue() {

    Queue* temp = (Queue*) malloc(sizeof(Queue));
    temp->front = nullptr;
    temp->rear = nullptr;
    return temp;
}

void deQueue(Queue* const queue) {
    if (queue->front == nullptr) {
        cout << "Fila Vazia" << endl;
        return;
    }

    Node* temp = queue->front;

    cout << "Elemento Removido: " << temp->iData << endl;

    queue->front = queue->front->next;

    free(temp);
}