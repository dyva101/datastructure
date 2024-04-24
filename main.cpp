/******************************************************************************
EXERCÍCIO: 24.04.2024 --> ESTRUTURA LISTA DUPLAMENTE ENCADEADA <3 

JOÃO OTÁVIO SIQUEIRA DE BRITO (JOAUN)
DAVY ALBERT DUTRA DE ANDRADE (DYVA)
*******************************************************************************/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

typedef struct Node
{
    int iPayload;
    Node* ptrNext;
    Node* ptrPrev;
} Node;

Node* createNode(int);
void insertFront(Node**, int);
void insertEnd(Node**, int);
void displayList(Node*);
void insertAfter(Node*, int);
void deleteNode(Node**, Node*);
void insertBefore(Node*, int);
void deleteNodebyValue(Node**, int);
Node* searchNodebyValue(Node**, int);

int main()
{
    Node* head = nullptr;
    cout << "Testanto insertBefore:" << endl;
    cout << "====================================================" << endl;
    insertEnd(&head, 0);
    insertEnd(&head, 1);
    insertEnd(&head, 3);
    insertBefore(head->ptrNext, 7);
    displayList(head);
    cout << "Testando deleteNodebyValue:" << endl;
    cout << "====================================================" << endl;
    deleteNodebyValue(&head, 7);
    deleteNodebyValue(&head, 42); // valor não pertencente a lista
    displayList(head);
    cout << "Testanto searchNodebyValue:" << endl;
    cout << "====================================================" << endl;
    cout << "Nó com valor 1 " << " encontrado no endereço " << searchNodebyValue(&head, 1) << endl;
    cout << searchNodebyValue(&head, 7) << endl;
    
    displayList(head);
}

Node* createNode(int iPayload)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->iPayload = iPayload;
    temp->ptrNext = nullptr;
    temp->ptrPrev = nullptr;

    return temp;
}

void displayList(Node* node)
{
    if (node == nullptr)
    {
        cout << "Lista vazia: Não é possível realizar displayList" << endl;
        return;
    }

    if (node->ptrPrev != nullptr)
    {
        cout << "Meio ou Fim da Lista: Não é possível realizar displayList" << endl; //Meio é qualquer nó que não esteja no começo ou no fim
        return;
    }

    Node* temp = node;

    cout << "Payload: ";

    //Percorremos a lista até seu fim (ptrNext do último nó é NULL)
    while (temp != nullptr)
    {
        cout << temp->iPayload << " ";
        temp = temp->ptrNext;
    }
    
    cout << endl; 
}

void insertFront(Node** head, int iPayload)
{
    Node* newNode = createNode(iPayload);
    
    if (*head != nullptr)
    {
        // newNode->ptrPrev = nullptr
        (*head)->ptrPrev = newNode;
        newNode->ptrNext = (*head);
        (*head) = newNode;
        return;
    }
    (*head) = newNode;
}

void insertEnd(Node** head, int iPayload)
{
    Node* newNode = createNode(iPayload);

    if (*head == nullptr)
    {
        (*head) = newNode; // Entre parênteses pq estamos derreferenciando um ponteiro (Pinho gosta de escrever assim)
        return;
    }

    Node* temp = (*head);

    //Percorremos a lista até seu fim (ptrNext do último nó é NULL)
    while (temp->ptrNext != nullptr) temp = temp->ptrNext;

    newNode->ptrPrev =  temp; //newNode aponta para o fim da lista
    temp->ptrNext = newNode; //Antigo último elemento aponta para o novo nó
}

// Recebe um nó que pode estar em qualquer lugar da lista
void insertAfter(Node* ptrLocation, int iPayLoad)
{
    if (ptrLocation == nullptr)
    {
        cout << "Location é NULL." << endl;
        return;
    }

    Node* newNode = createNode(iPayLoad);

    // Corrigir nó a ser inserido
    newNode->ptrNext = ptrLocation->ptrNext;
    newNode->ptrPrev = ptrLocation;

    // Corrigir o ponto de inserção
    ptrLocation->ptrNext = newNode;

    if (newNode->ptrNext == nullptr) newNode->ptrNext->ptrPrev=newNode;
}

void deleteNode(Node** head, Node* ptrDelete)
{
    if (*head == nullptr || ptrDelete == nullptr)
    {
        cout << "Não foi possível remover." << endl;
        return;
    }

    // Caso o ptrDelete seja o primeiro elemento da lista
    if (*head == ptrDelete) (*head) = ptrDelete->ptrNext;

    // Se o ptrDelete não é o primeiro nó
    if (ptrDelete->ptrNext != nullptr) ptrDelete->ptrNext->ptrPrev = ptrDelete->ptrPrev;

    // Se o ptrDelete não é o primeiro nó
    if (ptrDelete->ptrPrev != nullptr) ptrDelete->ptrPrev->ptrNext = ptrDelete->ptrNext;

    free(ptrDelete);
}

void insertBefore(Node* ptrLocation, int iPayLoad)
{
    if (ptrLocation == nullptr)
    {
        cout << "Location é NULL." << endl;
        return;
    }

    Node* newNode = createNode(iPayLoad);

    // Corrigir nó a ser inserido
    newNode->ptrNext = ptrLocation;
    newNode->ptrPrev = ptrLocation->ptrPrev;

    // Corrigir o ponto de inserção
    if (ptrLocation->ptrPrev != nullptr) ptrLocation->ptrPrev->ptrNext = newNode;
    ptrLocation->ptrPrev = newNode;
}

void deleteNodebyValue(Node** head, int value)
{
    if (*head == nullptr)
    {
        cout << "Lista vazia, nada para deletar." << endl;
        return;
    }

    Node* current = *head;
    while (current != nullptr)
    {
        if (current->iPayload == value)
        {
            if (current == *head) // Se o nó a ser removido é o primeiro da lista
            {
                *head = current->ptrNext;
                if (*head != nullptr)
                    (*head)->ptrPrev = nullptr;
            }
            else
            {
                if (current->ptrPrev != nullptr)
                    current->ptrPrev->ptrNext = current->ptrNext;
                if (current->ptrNext != nullptr)
                    current->ptrNext->ptrPrev = current->ptrPrev;
            }

            Node* temp = current;
            current = current->ptrNext;
            free(temp);
            cout << "Nó com valor " << value << " deletado." << endl;
            return;
        }
        current = current->ptrNext;
    }

    cout << "Valor não encontrado na lista." << endl;
}

Node* searchNodebyValue(Node** head, int value)
{
    if (*head == nullptr)
    {
        cout << "Lista vazia, nada para buscar." << endl;
        return nullptr;
    }

    Node* current = *head;
    while (current != nullptr)
    {
        if (current->iPayload == value)
        {
            return current;
        }
        current = current->ptrNext;
    }

    cout << "Valor não encontrado na lista." << endl;
    return nullptr;
}