#include <iostream>
using namespace std;

int main() {
    float n, max, min, somma, positivi, negativi, i;
    positivi =0;
    somma =0;
    i=0;
    negativi=0;
    do
    {
        cout << "inserisci numero" << endl;
        cin >>n;
        if (i=0)
        {
            max = n;
        }
        else
        {
            if (n>max)
            {
                max=n;
            }
            else
            {

            }
        }
        if (i=0)
        {
            min = n;
        }
        else
        {
            if (n<min)
            {
                min=n;
            }
            else
            {

            }
        }
        if (n>0)
        {
          somma = somma +n;
          positivi = positivi +1;
        }
        else
        {
            negativi = negativi +1;
        }
        i = i +1;

    } while (n!=0);
    cout << "il numero piu grande è " << max << endl;
    cout << "il numero piu piccolo è " << min << endl;
    cout << "sono stati inseriti " << negativi << " numeri negativi" << endl;
    cout << "la media di tutti i valori positivi è " << somma/positivi << endl;
    
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
