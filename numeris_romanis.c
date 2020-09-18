#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convert(decimal)
{   int  numerals[7]      = { 1,  5, 10, 50, 100, 500, 1000};
    int  numeral;
    char majors[7]        = {73, 86, 88, 76,  67,  68,   77}; /*ascii codes*/
    char major;
    int  small_nudges[5]  = {-1,  0,  1,  2,   3};
    int  small_nudge;
    char minors[5]        = {105,48, 73, 74,  75}; /*approximate ascii e.g. iii = K */
    char minor;
    for (int n = 0; n < 7; n++) {
        numeral = numerals[n];
        major   = majors[n];
        for (int s = 0; s < 5; s++) {
            small_nudge = small_nudges[s];
            minor       = minors[s];
            if (decimal==numeral+small_nudge){
                printf("\nYour decimal matches a symbol\t%d", numeral);
                printf("\nWith the adjustment\t\t%d", small_nudge);
                printf("\nThis implies\t\t\t %c %c", major, minor);
            printf("\nseemed to work\n");}
            else{
            printf("");
            }
        }
    }
return 0;
}
int get_decimal()
{
    int decimal;
    printf("\nPlease simply enter a decimal and press return: ");
    scanf("%d", &decimal);
    return decimal;
}
int greeting()
{
    printf("Salve Mundi!\n");
    printf("Hello World!\n");
    printf("Numeri Arabica accipio et Numeri Romani redeo\n");
    printf("I accept standard decimal and return Roman Numerals\n");
    return 0;
}

/* tests*/
int test_get_decimal()
{
    int decimal;
    printf("This is a test so you need to type 1 when it asks.");
    decimal = get_decimal();
    assert (decimal == 1);
    printf("\npass.");
    return 0;
}
int test_convert()
{   int convert_output;
    for (int n = 1; n < 50; n++){
    printf("\nn for testing convert %d", n);
    convert_output = convert(n);
    assert (convert_output==0);
    }
    return 0;
}
int test()
{
    test_get_decimal();
    test_convert();
    return 0;
}

/* main */
int main()
{   int decimal;
    greeting();
    decimal = get_decimal();
    convert(decimal);
    test();
    return 0;
}
