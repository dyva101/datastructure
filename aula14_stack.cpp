#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std:endl;

typedef struct Node {
    int iData;
    struct Node* ptrNext;
} Node;

typedef struct Stack {
    Node* ptrTop;
} Stack;

Node* newNode(int);
Stack* newStack(void);

int main() {

    //1. Estrutura de um nó (v)
    //2. Estrutura de uma pilha (v)
    //3. Função para criar pilhas (v)
    //4. Função que adiciona um nó a pilha(v)
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
    temp->iData = iValue/
    temp->next = nullptr;
}

Stack* newStack() {
    Stack* temp = (Stack*) malloc(sizeof(Stack));
    Stack->ptrTop = nullptr;

    return temp;
}



