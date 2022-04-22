// Aufgabe 01 BMI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void main()
{
    locale::global(locale("German_germany"));

    cin.imbue(locale("german"));

    while (true)
    {
        double gewicht;

        cout << endl << "Ihr Gewicht ist (kg): ";
        cin >> gewicht;

        if (!(gewicht > 0))
        {
            cout << endl << "Sie haben einen falschen Wert eingegeben!" << endl;
            break;
        }

        double groesse;

        cout << endl << "Ihre Größe ist (m): ";
        cin >> groesse;

        if (!(groesse > 0))
        {
            cout << endl << "Sie haben einen falschen Wert eingegeben!" << endl;
            break;
        }

        double bmi = gewicht / (groesse * groesse);

        cout << endl << "Ihre BMI ist: ";
        printf("%2.1f\n", bmi);

        if (bmi < 10)
            cout << endl << "Überprüfen Sie ihre Eingabe!" << endl;
        else if (bmi < 15)
        {
            cout << endl << "Magersucht" << endl;
            break;
        } 
        else if (bmi < 20)
        {
            cout << endl << "Untergewicht" << endl;
            break;
        }
        else if (bmi < 25)
        {
            cout << endl << "Normalgewicht" << endl;
            break;
        }
        else if (bmi < 30)
        {
            cout << endl << "Übergewicht" << endl;
            break;
        }
        else if (bmi < 40)
        {
            cout << endl << "Fettsucht" << endl;
            break;
        }
        else if (bmi < 50)
        {
            cout << endl << "morbide Fettsucht" << endl;
            break;
        }
        else
            cout << endl << "Überprüfen Sie ihre Eingabe!" << endl;
    }
}
