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

    return 0;
}