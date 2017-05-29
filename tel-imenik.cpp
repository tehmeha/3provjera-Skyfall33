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

            datotekaUpisivanje.open("imenik.txt", ios::app);
            datotekaUpisivanje << prezimeIme[brojOsoba] << endl;
            datotekaUpisivanje << brTelefona[brojOsoba] << endl;
            datotekaUpisivanje << adresa[brojOsoba] << endl;
            datotekaUpisivanje.close();

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
            unsigned long long int brtelefona;
            bool postoji = false;
            cout << " Unesite broj telefona kojeg zelite pronaci: ";
            cin >> brtelefona;
            for (int i = 0; i < brojOsoba; i++)
            {
                if (brtelefona == brTelefona[i])
                {
                    cout << " postoji u imeniku " << endl;
                    cout << prezimeIme[i] << endl;
                    cout << adresa[i] << endl;
                    postoji = true;
                    break;
                }
                if (brtelefona == false )
                {
                    cout << " Ne postoji " << endl;
                }
            }
        }
        else if( izbor == 4 )
        {
            string prezimeime;
            bool postoji = false;
            cout << " unesite ime i prezime osobe koju zelite pronaci: " << endl;
            cin.ignore();
            getline(cin, prezimeime);
            for (int i = 0; i < brojOsoba; i++)
            {
                if (prezimeime == prezimeIme[i])
                {
                    cout << " postoji u imeniku " << endl;;
                    cout << brTelefona[i] << endl;
                    cout << adresa[i] << endl;
                    postoji = true;
                    break;
                }
                if ( postoji == false )
                {
                    cout << " ne postoji " << endl;
                    break;
                }
            }

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
