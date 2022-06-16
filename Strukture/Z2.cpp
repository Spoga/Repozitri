//STRUKTURE
#include <stddef.h>
#include <iostream>
using namespace std;

struct Tacka
{
       int X;
       int Y;
};

int main()
{
       Tacka a;

       a.X = 5;
       a.Y = 15;

       cout << a.X << endl << a.Y << endl << endl;
       return 0;

}

