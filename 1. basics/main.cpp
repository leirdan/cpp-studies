// BIBLIOTECAS: funções de terceiros que permitem, por exemplo, receber dados de entrada e entregar uma saída (iostream).

#include <iostream>
#include <string>

// "atalho" para não precisar escrever std::cout e std::cin todas as vezes.
using namespace std;

int main()
{
    string name;
    cout << "what's your name?" << endl;
    cin >> name;
    cout << "welcome to the jungle, " << name << endl;
    return 0;
}
