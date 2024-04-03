#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

int fatorial(int n);

//PROBLEMA 1
int main() {
    int iNum, iDif;
    string sAno;

    cin >> iNum;
    iDif = 2023 - iNum;
    
    if (iNum > 2023) {
        cout << iDif << " DC" << endl;
    } else {
        cout << iDif + 1 << " AC" << endl;
    }

    return 0;

}

//Problema 2

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int iNum;

    cin >> iNum;

    while (iNum != 0) {
        cout << fatorial(iNum) << endl;
        iNum--;
    }

    return 0;
}   

//Problema 3

void operarArrays(int iArray_1[5][5], int iArray_2[5][5], char cOperacao) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            switch (cOperacao) {
                case '+':
                    iArray_1[i][j] += iArray_2[i][j];
                    break;
                case '-':
                    iArray_1[i][j] -= iArray_2[i][j];
                    break;
            }
        }
    }
}

int main() {
    int iArray_1[5][5], iArray_2[5][5];
    char cOperacao;
    int b[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int c[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 1, 8, 9, 10},
        {11, 12, 1, 14, 15},
        {16, 17, 18, 1, 20},
        {21, 22, 23, 24, 1}
    };

    operarArrays(b, c, '+');

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

}
