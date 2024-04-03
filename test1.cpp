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