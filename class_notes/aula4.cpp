/**TIPOS DE VARIÁVEIS
 
 *COMO AS VARIÁVEIS SÃO ARMAZENADAS, E COM QUE ESPAÇO
 *FORMAS DE PASSAR UMA VARIÁVEL

**/

#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main() {
    
    //-2, 147, 487, 648 a 2
    //4 bytes
    int iNum1 = 42;
    int iNum2 = 0;
    int iNum3 = 17;
    
    cout << "iNum1: " << iNum1 << "\nTamanho de iNum1: " << sizeof(iNum1) << endl;
    cout << "iNum2: " << iNum2 << "\nTamanho de iNum2: " << sizeof(iNum2) << endl;
    cout << "iNum3: " << iNum3 << "\nTamanho de iNum3: " << sizeof(iNum3) << endl;
    
    //-32, 768 a 32
    //2 bytes
    short sNum = 17;
    
    cout << "sNum: " << sNum << "\nTamanho de sNum: " << sizeof(sNum) << endl;
    
    //-9, 808 a 9, 854
    long lNum = 17;
    cout << "lNum: " << "\nTamanho de lNum: " << sizeof(lNum) << endl;
    
    float fNum = 42.123456789;
    double dNum = 42.123456789;
    long double ldNum = 42.123456789;
    
    cout << "fNum: " << fNum << "\nTamanho de fNum: " << sizeof(fNum) << endl;
    cout << "dNum: " << dNum << "\nTamanho de dNum: " << sizeof(dNum) << endl;
    cout << "ldNum: " << ldNum << "\nTamanho de ldNum: " << sizeof(ldNum) << endl;
    
    char cValue = 'E';
    cout << "cValue: " << cValue << "\nTamanho de cValue: " << sizeof(cValue) << endl;
    cout << "(int) cValue: " << int(cValue) << endl;

    char cPalavraPreferida_dec = 77;
    char cPalavraPreferida_hex = 0x41;
    char cPalavraPreferida_bin = 0b1110000;
    
    cout << cValue;
    cout << cPalavraPreferida_dec << cPalavraPreferida_hex << cPalavraPreferida_bin << endl;
    
    string strValue_1 = "Eu adoro a";
    string strValue_2 = "EMAp";
    
    cout << "strValue_1: " << strValue_1 << "\nTamanho de strValue_1: " << sizeof(strValue_1) << endl;
    cout << "strValue_2: " << strValue_2 << "\nTamanho de strValue_2: " << sizeof(strValue_2) << endl;
    
    cout << strValue_1 << " " << strValue_2 << endl;

    bool bValue_1 = true;
    bool bValue_2 = false;
    bool bValue_3 = 42;
    bool bValue_4 = 0;
    
    cout << "bValue_1: " << bValue_1 << "\nTamanho de bValue_1: " << sizeof(bValue_1) << endl;
    cout << "bValue_2: " << bValue_2 << "\nTamanho de bValue_2: " << sizeof(bValue_2) << endl;
    cout << "bValue_3: " << bValue_3 << "\nTamanho de bValue_3: " << sizeof(bValue_3) << endl;
    cout << "bValue_4: " << bValue_4 << "\nTamanho de bValue_4: " << sizeof(bValue_4) << endl;
    
    const int iNUMERO = 42;
    //iNUMERO = 111;
    cout << "iNUMERO: " << iNUMERO << "\nTamanho de iNUMERO: " << sizeof(iNUMERO) << endl;
    
    unsigned short usNum = 42;
    cout << "usNum: " << usNum << "\nTamanho de usNum: " << sizeof(usNum) << endl;
    
    unsigned long long int ulliNum = 42; 

    return 0;
}