/*Conceitos Básicos

Trabalho de Casa -> leitura e exercício sobre UNICODE (TF8)

- Formatos: meia-precisão; precisão simples; dupla-precisa (double)

Padrão IEEE 754
   - Sinal da Mantissa
        1 bit / 1 bit
   - Expoente Viesado (Bias)
        8 bits / 11 bits
   - Mantissa Normalizada (Significante)
        23 bits / 52 bits

Ordenação (Endianness)
   - Little-Endian: ordenação com as partes menores primeiro
   - Big-Endian: ordenação com as partes maiores primeiro
*/

/******************************************************************************
~ PEÇA APENAS O QUE VOCÊ PRECISA ~

#include é diretiva de inclusão de plataformas (iostream é uma das principais, fluxo
entrada e saída)

definição de variável: "não tem conversinha com o c/c++"

*******************************************************************************/

#include <iostream>

using std::cout;
using std::endl;

//Hungarian Notation. systems Hungarian x Apps. Hungarian

int main() {
    auto i = 1;
    
    cout << "Exemplo de incrementos: " << "\n";
    cout << "Valor de i - " << i << "\n";
    
    auto c_pre = ++i;
    auto c_pos = i++;

    cout << "Valor de c_pre - " << c_pre << "\n";
    cout << "Valor de i - " << i << "\n";
    
    int iNum = 42;
    
    cout << "Valor de Num: " << iNum << endl;
    cout << "Endereço de Num: " << &iNum << endl;
    
    return 0;
}