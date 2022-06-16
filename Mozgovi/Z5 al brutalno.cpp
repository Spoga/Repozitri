#include <iostream>
using namespace std;

/*
unesite velicinu dvodimenzionalnog niza i neka se ispise sve
*/

void unesiElement(int **n,int r, int k)
{
    cout << "Unesite elemente niza: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int element;
            cin >> element;
            n[i][j] = element;
        }
    }
}

void ispisNiza(int **n, int r, int k)
{
    cout << "Elementi niza su: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << n[i][j] << "\t";
        }
        cout << endl;
    }
}

void djeljivoSa3(int **n, int r, int k)
{
    int djeljiv;

    cout << "Elementi djeljivi sa 3 su: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (n[i][j] % 3 == 0)
            {
                cout << n[i][j] << "\t";
            }
            else
            {
                cout << "x" << "\t";
            }
        }
        cout << endl;
    }
    
}

int main()
{
    int red, kolona;
    int element;

    cout << "Unesite koliko redova zelite u nizu: " << endl;
    cin >> red;
    cout << "Unesite koliko kolona zelite u nizu: " << endl;
    cin >> kolona;

    int **niz = new int*[red];
    for (int i = 0; i < red; i++)
    {
        *(niz + i) = new int [kolona];
    }

    unesiElement(niz,red,kolona);
    ispisNiza(niz, red, kolona);
    djeljivoSa3(niz, red, kolona);

    return 0;
}