#include <iostream>
#include <string>

using namespace std;

class Augintinis
{
private:

    /*
    Augintinio duomenys
    */
    string vardas;
    double amzius;
    double svoris;
    char lytis;
    bool aktyvus;

public:

    /*
    Numatytasis konstruktorius
    */
    Augintinis()
    {
        vardas = "Nenurodyta";
        amzius = 0.0;
        svoris = 0.0;
        lytis = 'N';
        aktyvus = false;
    }

    /*
    Konstruktorius su parametrais
    */
    Augintinis(string naujasVardas, double naujasAmzius,
        double naujasSvoris, char naujaLytis,
        bool arAktyvus)
    {
        vardas = naujasVardas;
        amzius = naujasAmzius;
        svoris = naujasSvoris;
        lytis = naujaLytis;
        aktyvus = arAktyvus;
    }

    /*
    Kopijavimo konstruktorius
    */
    Augintinis(const Augintinis& kitas)
    {
        vardas = kitas.vardas;
        amzius = kitas.amzius;
        svoris = kitas.svoris;
        lytis = kitas.lytis;
        aktyvus = kitas.aktyvus;
    }

    /*
    Pakeicia augintinio varda
    */
    void keistiVarda(string naujasVardas)
    {
        vardas = naujasVardas;
    }

    /*
    Pakeicia augintinio amziu
    */
    void keistiAmziu(double naujasAmzius)
    {
        amzius = naujasAmzius;
    }

    /*
    Pakeicia augintinio svori
    */
    void keistiSvori(double naujasSvoris)
    {
        svoris = naujasSvoris;
    }

    /*
    Parodo augintinio duomenis
    */
    void rodytiDuomenis()
    {
        cout << "Vardas: " << vardas << endl;
        cout << "Amzius: " << amzius << " metu" << endl;
        cout << "Svoris: " << svoris << " kg" << endl;

        if (lytis == 'V')
        {
            cout << "Lytis: Vyriska" << endl;
        }
        else if (lytis == 'M')
        {
            cout << "Lytis: Moteriska" << endl;
        }
        else
        {
            cout << "Lytis: Nenurodyta" << endl;
        }

        if (aktyvus)
        {
            cout << "Augintinis aktyvus" << endl;
        }
        else
        {
            cout << "Augintinis neaktyvus" << endl;
        }
    }
};

int main()
{
    /*
    Sukuriamas pirmas augintinis
    */
    Augintinis augintinis1("Izumi", 1.5, 4.0, 'V', true);

    cout << "Pirmas augintinis:" << endl;
    augintinis1.rodytiDuomenis();

    cout << endl;

    /*
    Sukuriamas antras augintinis
    */
    Augintinis augintinis2("Kora", 1.7, 5.0, 'M', true);

    cout << "Antras augintinis:" << endl;
    augintinis2.rodytiDuomenis();

    return 0;
}