#include <iostream>
#include <string>
using namespace std;


int main()
{
    int i;
    string ime;

    cout << "Unesi nesto" << endl;
    getline(cin, ime);

    for (i = ime.length(); i <= ime.length() + 1; i--) {
        cout << ime[i];


    }

    return 0;
}