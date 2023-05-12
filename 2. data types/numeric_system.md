# SISTEMAS NUMÉRICOS

-   Responsáveis por transformar dados humanos em formato de máquina.

## 1. BINÁRIO

-   Sistema que utiliza a base 2;
    -   Admite somente dois valores: 0 e 1;
    -   Exemplos práticos -
        -   10010 = (1 x 2⁴) + (0 x 2³) + (0 x 2²) + (1 x 2¹) + (0 x 2⁰)
        -   1011 = (1 x 2³) + (0 + 2²) + (1 x 2¹) + (1 x 2⁰)
    -   Cada valor representa um bit na memória do computador. Uma sequência de 8 bits, como todos sabemos, forma o que é conhecido como byte.
        Mas existem outras sequências de bits, que podem ser agrupados em 3, 4, 5, etc.
    -   Por exemplo, numa sequência de 3 dígitos temos:
        -   000 = 0
        -   001 = 1
        -   010 = 2
        -   011 = 3
        -   100 = 4
        -   101 = 5
        -   110 = 6
        -   111 = 7
    -   Para representar valores maiores que 7, usamos a sequência de 4 dígitos:
        -   0000 = 0
        -   0001 = 1
        -   0010 = 2
        -   0011 = 3
        -   0100 = 4
        -   0101 = 5
        -   0110 = 6
        -   0111 = 7
        -   1000 = 8
        -   1001 = 9
        -   1010 = 10
        -   1011 = 11
        -   1100 = 12
        -   ...
        -   (até 15, após isso usa-se sequência de 5 dígitos, depois 6, etc.)
    -   Generalização:
        -   1 dígito = somente o valor 1
        -   2 dígitos = representam valores de 0 a 3
        -   3 dígitos = representam valores de 0 a 7
        -   4 dígitos = representam valores de 0 a 15
        -   5 dígitos = representam valores de 0 a 31
            ...
        -   n dígitos = representam valores de 0 até 2^n - 1.
    -   Comumente, aqui estão listados sistemas bem usados:
        -   8 dígitos = 1 byte = 0 - 255
        -   16 dígitos = 2 bytes = 0 - 65535
        -   64 dígitos = 8 byte = 0 - 18446744073709551615

## 2. HEXADECIMAL

-   Usado para reduzir o tamanho da escrita em números binários.

    -   Organizado em um sistema de 4 dígitos.
    -   Tabela de comparação abaixo:

        BIN | DECIMAL | HEX

        -   0001 = 0 | 1
        -   0010 = 1 | 1
        -   0010 = 2 | 2
        -   0011 = 3 | 3
        -   0100 = 4 | 4
        -   0101 = 5 | 5
        -   0110 = 6 | 6
        -   0111 = 7 | 7
        -   1000 = 8 | 8
        -   1001 = 9 | 9
        -   1010 = 10 | A
        -   1011 = 11 | B
        -   1100 = 12 | C
        -   1101 = 13 | D
        -   1110 = 14 | E
        -   1111 = 15 | F

    -   Por exemplo: seja o número binário 0110 1000 1011 0010 1010 0011 0110 e converta-o em hexadecimal
        -   R: 0x 68B2A36
        -   0x indica que o número é um hexadecimal.
