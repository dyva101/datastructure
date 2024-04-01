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

    return temp;
}

Queue* newQueue() {

    Queue* temp = (Queue*) malloc(sizeof(Queue));
    temp->front = nullptr;
    temp->rear = nullptr;
    return temp;
}

void enQueue (Queue* const queue, int iValue) {

    Node* temp = newNode(iValue);
    if (queue->front == nullptr) {

        queue->front = temp;
        queue->rear = temp;
    }
    else {

        queue->rear->next = temp;
        queue->rear = temp;
    }
}

void showFirstElement (Queue* const queue) {
    cout << "1o Elemento: " << ((queue->front != NULL) ? (queue->front)->iData : -1) << endl;
    return ;
}

void showLastElement (Queue* const queue) {
    cout << "1o Elemento: " << ((queue->rear != NULL) ? (queue->rear)->iData : -1) << endl;
    return ;
}

void showElements(Queue* const queue) {
    if (queue->front == nullptr) {
        cout << "FILA VAZIA CARALHO, TÁ QUERENDO QUE EU IMPRIMA O QUÊ?" << endl;
        return ;
    }

    Node* current = queue->front;

    while (current != nullptr) {
        cout << "ELEMENTO: " << current->iData << endl;
        current = current->next;

    }

}
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