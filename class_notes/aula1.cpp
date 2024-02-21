/*Aula de Apresentação - ft. Profº Dr. Thiago

Linguagens de programação podem ser: 
    (Puramente Interpretada: Convenção entre humanos; necessita de um software para realizar a tradução do que você escreveu)
        * Java
        * Python
    (Compilada: tem por objetivo ser transformada numa linguagem entendida pela máquina)
        * B/BCpL/C/C++/C#

Compilação: compilador traduz o código fonte de uma linguagem de programação para um conjunto de instruções em linguagem de máquina, criando um arquivo executável

- Princípio do Zero Overhead: "O que você não usa, você não paga"
*/

#include <cstdio>

constexpr int isqrt(int n) { //contexpr: tempo de compilação é o tempo para criar o compilável; para evitar tempo de compilação desnecessário, declaramos contexpr.
    int i=1;
    while (i*i<n) ++i;
    return i-(i*i!=n);
}

int main() {
    constexpr int x = isqrt(1764);
    printf("%d", x);
}
