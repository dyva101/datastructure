/**TIPOS DE VARIÁVEIS
 
 *COMO AS VARIÁVEIS SÃO ARMAZENADAS, E COM QUE ESPAÇO
 *FORMAS DE PASSAR UMA VARIÁVEL
 *OPERADORES DE DECISÃO: IF/ELSE, TERNÁRIO E SWITCH/CASE

**/
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() {
    //TIPO NOME TAMANHO
    int x[100] = {0};
    cout << "x[0] = " << x[0] << ", endereço: " << &x[0] << endl;
    cout << "x[1] = " << x[1] << ", endereço: " << &x[1] << endl;
    cout << "x[99] = " << x[99] << ", endereço: " << &x[99] << endl;
    cout << "Tamanho de x = " << sizeof(x)/sizeof(x[0]) << endl;
    cout << "------------------------------------------" << endl;
    return 0;

    int array[4];

    array[0] = 8;
    array[1] = 64;
    array[0] = 256;
    array[0] = 512;
    
    cout << "array[0] = " << array[0] << ", endereço: " << &array[0] << endl;
    cout << "array[1] = " << array[1] << ", endereço: " << &array[1] << endl;
    cout << "array[2] = " << array[2] << ", endereço: " << &array[2] << endl;
    cout << "array[3] = " << array[3] << ", endereço: " << &array[3] << endl;
    cout << "Tamanho de x = " << sizeof(array)/sizeof(array[0]) << endl;
    cout << "------------------------------------------" << endl;
    return 0;

}