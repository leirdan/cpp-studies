
/**
 *  chapter 2: data types
 *  content: variables in general
 *  author: leirdan
 *  date: 11 mai 2023.
 *
 */

/** VARIÁVEIS E O QUE REPRESENTAM
 * Definição: variáveis são pedaços de memória usados para armazenar valores.
 * Declaração: tipo_da_variável + nome + {valor}
 * Quando declaramos uma variável sem um valor inicial, o programa vai alocar
 * algum valor de "garbage" apenas para demarcar espaço. Contudo, devemos ter cuidado.
 * Tipos:
 * int - números inteiros; ocupam 4 ou mais bytes de memória
 * double - números com casas decimais
 * float - números com ponto flutuante
 * char - caracteres
 * bool - true ou false
 * auto - palavra-chave usada para deduzir o tipo de uma expressão
 */

#include <iostream>

using namespace std;

int main()
{
    /** EXEMPLOS DE TIPOS E FORMAS DE DECLARAR*/
    int dec(13);
    auto hex{0x4b};
    auto bin = 0b0110;

    cout << dec << endl;
    cout << sizeof(dec) << endl; // 4 bytes
    cout << hex << endl;         // 75
    cout << sizeof(hex) << endl; // 4 bytes
    cout << bin << endl;         // 6

    return 0;
}
