#include<iostream>
using namespace std;
int main()
{
	int n,unos;
	cout<<"Unesite velicinu niza: " <<endl;
	cin>>n;
	int niz[n];
	cout<<"Unesite elemente niza: " <<endl;
	for(int i=0;i<n;i++)
	{
		cin>>unos;
		niz[i]=unos;
	}
	for(int i =n-1; i>=0;i--)
		cout<<niz[i]<<endl;
	return 0;
}
