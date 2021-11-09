/* Zadanie 15. Znajdź liczbę trójelementowych kombinacji liczb z zadanego ciągu, których suma jest równa zadanej lizcbie M.
    Przykład.
        Wejście: [ 1, 2, 5, 1, 2, 1, 2, 4 ]
                M = 6
                Wyjście:
                Liczba kombinacji wynosi 3: [ 1 2 3 ], [ 2 2 2 ], [ 1 1 4 ]
*/
#include <iostream>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <fstream>
#include <iomanip>

using namespace std;

void wypelnij(int tablica[], int rozmiar);
void znajdz_kombinacje(int tablica[], int rozmiar, int suma);
/*  Dla czytelnosci programu tworzymy funkcje void ktorej zadaniem jest znalezienie wszystkich trojelementowych kombinacji,
  wykonujemy w niej 3 petle ktore pokolei sprawdzaja liczby, pierwsza petla zaczyna sie od indeksu 0 i konczy na 5 w tabeli,
  druga od indeksu 1 i konczy na 6, a trz od miejsca 2 i konczy na 7. Jezeli elementy spelniaja odpowiedni warunek
  (ich suma jest równa zadanej przez uzytkownka M) to wyswietl je na ekranie.

*/


int main()
{
    int suma;
    int rozmiar;
    int* tablica;


    cout << "Podaj rozmiar tablicy: "; cin >> rozmiar;
    tablica = new int[rozmiar];
    wypelnij(tablica, rozmiar);

    for (int i = 0; i < rozmiar; i++)
    {
        cout << tablica[i] << "\n\n";
    }

    // Do wypisania potrzebna jest petla ktora bedzie wykonywac sie n-krotnie




    // Wprowadzamy wartosc sumy

    cout << "wprowadz wartosc sumy: ";
    cin >> suma;
    cout << "kombinacje: " << endl;
    // Wywolujemy funkcje void
    znajdz_kombinacje(tablica, rozmiar, suma);
    return 0;


}

void wypelnij(int tablica[], int rozmiar)
{
    srand(time(NULL));
    for (int i = 0; i < rozmiar; i++)
    {
        tablica[i] = rand() % rozmiar + 1;

        
    }
}

void znajdz_kombinacje(int tablica[], int rozmiar, int suma)
{
    for (int i = 0; i < rozmiar - 2; i++)
    {
        for (int j = i + 1; j < rozmiar - 1; j++)
        {
            for (int k = j + 1; k < rozmiar; k++)
            {
                if (tablica[i] + tablica[j] + tablica[k] == suma)
                    cout << tablica[i] << " ," << tablica[j] << " ," << tablica[k] << endl;
               
              
            }
        }
    }
}

