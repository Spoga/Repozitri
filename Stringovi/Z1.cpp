//STRINGOVI
//Napisati program u kojem unosite vase ime, godinu rodjenja i trenutnu godinu a treba da ispise koliko imate god.
#include<iostream>
#include<string>
using namespace std;

int main()

{
            int god, god1, god2;
            string ime;
            cout<<"Upisi svoje ime:";
            cin>>ime;
            cout<<endl<<"Upisi godinu svog rodjenja:";
            cin>>god1;
            cout<<endl<<"Koja je godina sada? ";
            cin>>god2;
            god=god2-god1;
            cout<<endl<<ime<<" ima "<<god<<" godina."<<endl;
            return 0;
}
