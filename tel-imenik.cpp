#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int brojOsoba = 0;
    int izbor;
    int MAX = 50;
    string prezimeIme[MAX];
    unsigned long long brTelefona[MAX];
    string adresa[MAX];
    ofstream datotekaUpisivanje;
    ifstream datotekaUcitavanje;

    while(1)
    {
        cout << "Glavni izbornik" << endl;
        cout << "1. Unos nove osobe" << endl;
        cout << "2. Ispisi sve podatke" << endl;
        cout << "3. Pretraga prema telefosnkom broju" << endl;
        cout << "4. Pretraga prema prezimenu i imenu" << endl;
        cout << "5. Izmjena podataka prema telefonskom broju" << endl;
        cout << "6. Ispisi sortirano prema prezimenu i imenu" << endl;
        cout << "7. Izlaz iz programa" << endl;
        cout << "Upisite broj iz izbornika: ";
        cin >> izbor;
        if( izbor == 1 )
        {
            cout << "Unesite ime i prezime: ";
            cin.ignore();
            getline(cin, prezimeIme[brojOsoba]);
            cout << "Unesite broj telefona: " << endl;
            cin >> brTelefona[brojOsoba];
            cout << "Unesite adresu: " << endl;
            cin.ignore();
            getline(cin, adresa[brojOsoba]);
            brojOsoba++;
        }
        else if( izbor == 2 )
        {
            cout << "prezime i ime" << "\t" << "broj telefona" << "\t" << "adresa" << endl;
            for( int i = 0; i < brojOsoba; i++ )
            {
                cout << prezimeIme[i] << endl;
                cout << brTelefona[i] << endl;
                cout << adresa[i] << endl;
            }
        }
        else if( izbor == 3 )
        {
            broj postoji = false;
            cin >> brTelefona[brojOsoba];
            cout << prezimeIme[brojOsoba] << endl;
            cout << adresa[brojOsoba] << endl;
        }
        else if( izbor == 4 )
        {
            ime i prezime postoji = false;
            cin >> prezimeIme[brojOsoba];
            cout << brTelefona[brojOsoba];
            cout << adresa[brojOsoba];
        }
        else if( izbor == 5 )
        {

        }
        else if( izbor == 6 )
        {
        }
        else if( izbor == 7 )
        {
            cout << "Kraj rada" << endl;
            break;
        }
        else
        {
            cout << "Unijeli ste krivi broj." << endl;
        }
        cout << endl;
    }
}
