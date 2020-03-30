// Complex.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
     //Punkt 5 - Erstellung von Objekte vom Typ-Complex

    float x,y;
    Complex Nummer[10];
    int n, i, j;
    cout<<"Geben Sie bitte das Anzahl von Elemente: ";cin>>n;
    int Anzahl = 0;
    for(i=1; i<=n; i++)
    {
        cout<<"Das Realteil des Nummers ist: ";cin>>x;
        Nummer[i].setReal(x);
        cout<<"Das Imaginarteil des Nummers ist: ";cin>>y;
        Nummer[i].setImg(y);
    }

    //Punkt 6 - Sortieren nach der Betrag

    Complex aux; //neue Variable fur das Sortieren der Objekte
    for(i=1; i<=n; i++)
        for(i=1; i<=n; i++)
            if(Nummer[i].abs(Nummer[i]) > Nummer[j].abs(Nummer[j])) //comparatie functionala la Betrag
            {
                aux = Nummer[i];
                Nummer[i] = Nummer[j];
                Nummer[j] = aux;
            }
    for(i=1; i<=n; i++)
        Nummer[i].show_compl(Nummer[i]);

    //Punkt 7 - Gesamtsumme
    Complex Summe;
    for(i=1; i<=n; i++)
        Summe = Summe + Nummer[i].add(Nummer[i]);
    cout<<Summe

	return 0;
}


