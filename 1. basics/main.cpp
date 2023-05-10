// BIBLIOTECAS: funções de terceiros que permitem, por exemplo, receber dados de entrada e entregar uma saída (iostream).

/** DIFERENÇAS ENTRE:
 * "core features": são as "características" mais essenciais da linguagem, que definem seus tipos primitivos, funções e etc.
 * "standard library": bibliotecas que podem ser usadas para complementar o seu código e que trazem novas funcionalidades, como a possibilidade de se trabalhar com strings e outros tipos de dados, e etc.
 * "STL": uma parte da standard library "mais complexa"
 */

/* MÉTODOS de iostream:
    cout -> escreve algo no console.
    cin -> recebe dados por meio do console.
    cerr -> imprime mensagens de erro no console.
    clog -> imprime logs no console.
*/
#include <iostream>
#include <string>

// "atalho" para não precisar escrever std::cout e std::cin todas as vezes.
using namespace std;

int main()
{
    string name;
    cout << "what's your full name?" << endl;
    cin >> name;
    // ALTERNATIVA: getline(cin, name); -> coleta a linha inteira, incluindo espaços.
    cout << "welcome to the jungle, " << name << endl;
    return 0;
}
