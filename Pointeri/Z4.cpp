#include<iostream>
using namespace std;
double zapremina(double *duzina, double *sirna, double *visina);

int main()
{
	double duz, sir, vis, rez;
	cout<<"Unesite duzinu, sirinu i visinu"<<endl;
	cin>> duz;
	cin>> sir;
	cin>> vis;
	double *duzina = &duz;
	double *sirina = &sir;
	double *visina = &vis;
	rez = zapremina(duzina, sirina, visina);
	cout<<rez<<endl;
	return 0;
}

double zapremina(double *duz, double *sir, double *vis)
{
	double rez, Rduz, Rsir, Rvis;
	Rduz = *duz;
	Rsir = *sir;
	Rvis = *vis;
	rez = Rduz*Rsir*Rvis;
	
	return rez;
}
