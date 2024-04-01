#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//BEST FIT & WORST FIT:  Se queremos um espaço de 102 bit, um de 305 bit e um de 409 bit (desperdiçamos memória de computador)

typedef struct Node {
    int iData;
    struct Node* next;
} Node;

typedef struct Queue {
    //eh possivel colocar mais indicações na fila
    struct Node* front;
    struct Node* rear;
} Queue;

Node* newNode(int iValue) {
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->iData = iValue;
    temp->next = nullptr;
}

Queue* newQueue() {
    Queue* temp = (Queue*) malloc(sizeof(Queue));
    temp->front = nullptr;
    temp->rear = nullptr;
    return 0;
}

void enQueue (Queue* const queue, int iValue) {

}

int main() {
    //1. Estrutura de um nó (v)
    //2. Estrutura de uma fila (v)
    //3. Função para criar filas (v)

    Queue* queue = newQueue();
    std::cout << "Hello FUCKING STUPID World" << endl;

    return 0;
}
