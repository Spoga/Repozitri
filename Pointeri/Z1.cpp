//POKAZIVACI I FUNKCIJE
#include<iostream>
using namespace std;

int saberi(int *prvi, int *drugi);

int main()
{
	int broj1, broj2, rezultat;
	cout<<"Unesite broj1:  "<<endl;
	cin>>broj1;
	cout<<"Unesite broj2:  "<<endl;
	cin>>broj2;
	int *prvi = &broj1;
	int *drugi = &broj2;
	rezultat = saberi(&broj1, &broj2);
	cout<<rezultat<<endl;
	return  0;
}
int saberi(int *jedan, int *dva)
{
	int br1, br2, rezultat;
	br1 = *jedan;
	br2 = *dva;
	rezultat = br1+br2;
	return rezultat;
}
