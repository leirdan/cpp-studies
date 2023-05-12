/**
 *  chapter 2: data types
 *  content: integer type and modifiers
 *  author: leirdan
 *  date: 11 mai 2023.
 *
 */

/** DETALHES SOBRE O INTEGER
 * palavra-chave: int;
 * ocupa 4 ou mais bytes de memória;
 * pode assumir valores positivos e negativos;
 */

/** MODIFIERS DO INTEGER
 * signed: opcional, diz que o tipo pode armazenar valores negativos ou positivos
 * unsigned: opcional, diz que o tipo pode armazenar somente valores positivos
 * short: ocupa 2 bytes de memória, e pode ser combinado com "signed", "unsigned e /ou e "int"
 * int: ocupa 4 bytes de memória, sendo combinado com "signed" ou "unsigned"
 * long: ocupa 8 bytes de memória, sendo combinado com "signed", "unsigned" e/ou "int"
 */

#include <iostream>

using namespace std;

int main()
{
    // range do signed -> [(-2^n-1); (2^n-1) - 1]
    // range do unsigned -> [0; 2^n-1]
    // n é o nº de bits

    // exemplos com opcionais
    int v1{-3}; // não é necessário declarar signed ou unsigned;
    signed int v2{300};

    cout << v1 << " " << v2 << endl;
    // -3 300

    // short e long

    signed short int v3{-440};
    unsigned long v4{1092002};
    cout << v3 << " " << v4 << endl;
    cout << sizeof(v3) << " " << sizeof(v4) << endl;
    // 2 8

    return 0;
}