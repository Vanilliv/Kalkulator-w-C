/*
*Maciej Plonski
*Temat: Program - Kalkulator
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
        int opt = 0;
        int a = 0;
        int b = 0;
        int wynik = 0;
        printf("Kalkulator liczb calkowitych:\n a [dzialanie] b = [wynik]\n");
        printf("Wybierz dzialanie: [1]+ [2]- [3]* [4]/ [0]zakoncz\n>");
        scanf("%d", &opt);
        do{
        switch(opt){
        case 1:
            //Podanie liczb
            printf("Podaj a = ");
            scanf("%d", &a);
            printf("Podaj b = ");
            scanf("%d", &b);
            //Dzialanie
            wynik = a + b;
            //wyswietlanie dzialania
            printf("Obliczenie to:\n %d + %d = %d \n", a,b,wynik );
            //wybierania dzialania
            printf("Wybierz dzialanie: [1]+ [2]- [3]* [4]/ [0]zakoncz\n>");
            scanf("%d", &opt);
            break;

        case 2:
            printf("Podaj a = ");
            scanf("%d", &a);
            printf("Podaj b = ");
            scanf("%d", &b);
            wynik = a - b;
            printf("Obliczenie to:\n %d - %d = %d \n", a,b,wynik );
            printf("Wybierz dzialanie: [1]+ [2]- [3]* [4]/ [0]zakoncz\n>");
            scanf("%d", &opt);
            break;

        case 3:
             printf("Podaj a = ");
            scanf("%d", &a);
            printf("Podaj b = ");
            scanf("%d", &b);
            wynik = a * b;
            printf("Obliczenie to:\n %d * %d = %d \n", a,b,wynik );
            printf("Wybierz dzialanie: [1]+ [2]- [3]* [4]/ [0]zakoncz\n>");
            scanf("%d", &opt);
            break;

        case 4:
            printf("Podaj a = ");
            scanf("%d", &a);
            //Sprawdzanie czy nie jest "0" jesli jest to podanie nowej wartosci
            while(a == 0){
            printf("0 nie moze byc wartoscia\n Podaj inna wartosc a = ");
            scanf("%d", &a);
            }
            printf("Podaj b = ");
            scanf("%d", &b);
             while(b == 0){
            printf("0 nie moze byc wartoscia\n Podaj inna wartosc b = ");
            scanf("%d", &b);
             }
            wynik = a / b;
            printf("Obliczenie to:\n %d / %d = %d \n", a,b,wynik );
            printf("Wybierz dzialanie: [1]+ [2]- [3]* [4]/ [0]zakoncz\n>");
            scanf("%d", &opt);
            break;
        default://sprawdzanie czy w wybieraniu dzialania wybralismy podana opcje
            printf("Niepoprawna opcja!!!\n");
            printf("[1] [2] [3] [0]\n?>");
            scanf("%d", &opt);
            break;
        }
        }while(opt !=0);//jesli wybierzemy opcje 0 to konczymy dzialanie
        printf("Koniec");
         return  (opt);
}
