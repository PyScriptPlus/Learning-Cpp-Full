#include <stdio.h>
#include <bits10_3.h>

// Ma 4 ta Numeral system toye zaban C darim:
// 1- Decimal
// 2- Binary
// 3- Octal
// 4- Hexadecimal

// Berim vase coding...


int main() {

    // Decimal: Mabnaye 10
    // Defaultesh ine dige 0/1/2/3/4/5/6/7/8/9
    int decimals = 5; // In Number is Decimal
    printf("In Number is decimal: %d\n" , decimals);
    // In decimal dar zendegi rozmare estefade mikonim

    //--------------------------------------------------------------------//

    // Binary: Mabnaye 2
    // Ke adad haye 0 / 1 mishe fagaht
    // Mesal:

    // Kafiye avvalesh ye ( 0 ) bad ( b OR B ) bezari benevisi ragham hato
    int bin = 0b0101;
    printf("In Number is binary: %d\n" , bin);
    int bin1 = 0b1000;
    printf("In Number is binary: %d\n" , bin1);

    //--------------------------------------------------------------------//

    // Octal: Mabnaye 8
    // Intori mishe nevesht 0/1/2/3/4/5/6/7 // 8 ragham hast ba 0 albate 8 ragham mishe
    // 7 be bad chejurie? 10/11/12/13/14/15/16/17
    // 10 dar octal be Decimal mishe 8

    // Bad 17 chejurie chon 17 mishe 15 mikham 16 chap konam:
    // 20/21/22/23/24/25/26/27
    // Mesal:

    // Faghat bayad avvalesh ye 0 bezari
    int octal1 = 010;
    printf("In Number is Octal: %d\n" , octal1);
    int octal2 = 017;
    printf("In Number is Octal: %d\n" , octal2);
    int octal3 = 020;
    printf("In Number is Octal: %d\n" , octal3);

    //--------------------------------------------------------------------//

    // Hexadecimal: Mabnaye 16 
    // Ke 16 ragham hast injuri mishe neveht:
    // 0/1/2/3/7/5/6/7/8/9/A/B/C/D/E/F
    // A = 10
    // B = 11
    // C = 12
    // D = 13
    // E = 14
    // F = 15
    // Dar Hexadecimal injurie

    // Mesal: 
    // Faghat kafiye avvalesh ye ( 0 ) baad ( x ) bezari:

    int hexad = 0xF;
    printf("In Number is HexaDecimal: %d\n" , hexad);
    int hexad1 = 0x5F; // Formulesh neveshtam toye daftar chejuri hesab mishe
    printf("In Number is HexaDecimal: %d\n" , hexad1);
    int hexad2 = 0xAF1B; // Big Number
    printf("In Number is HexaDecimal: %d\n" , hexad2);

    return 0;

}