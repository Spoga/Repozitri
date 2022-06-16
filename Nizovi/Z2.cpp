/*Treba prebrojiti koliko puta se pojavljuje slovo o u znakovnom nizu:
Koliko slova o ima u ovoj recenici?
Ispis neka bude ovakav:
U znakovnom nizu: Koliko slova o ima u ovoj recenici? Ima ... slova o.*/
#include <iostream>
using namespace std;
int main ()

{
    int i,brojo;
    brojo=0;
    char X[]="Koliko slova o ima u ovoj recenici?";
    
    for (i=0;X[i]!='\0';i++)
    {
                if(X[i]=='o')
                {
                           brojo=brojo+1;
                }
    }

    cout<<endl<<"U znakovnom nizu: Koliko slova o ima u ovoj recenici? Ima ";
    cout<<brojo<<" slova o."<<endl;
    return 0;
}
