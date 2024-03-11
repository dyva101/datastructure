/**LOOP's
 
 *COMO AS VARIÁVEIS SÃO ARMAZENADAS, E COM QUE ESPAÇO
 *FORMAS DE PASSAR UMA VARIÁVEL
 *OPERADORES DE DECISÃO: IF/ELSE, TERNÁRIO E SWITCH/CASE

**/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int iContador = 0;
    while (iContador < 5)
    {
        cout << iContador << "\n";
        iContador++;
    }
    
    iContador = 1;
    do {
        cout << iContador << "\n";
        iContador++;
    }
    while (iContador !=42);
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k =0; k < 10; k++)
            {    
                cout << "(" << i << ", " << j << ", " << k << ")" << "\n";
            }
        }
    }

    return 0;
}