/* Napisati program koji koristi funkciju stepen preko dva parametra: eksponent i baza, racuna stepen baze na vrijednost eksponenta
vrijednost se unosi sa tastature
Prot: int Stepen(int,int)*/
#include <iostream>
#include <math.h>
using namespace std;

int Stepen(int,int);
int main(int argc, char *argv[]) {
	int x,e;
	cout<<"Unesite bazu i eksponent"<<endl;
	cin>>x>>e;
	cout<<Stepen(x,e);
	return 0;
}

int Stepen(int x,int e){
	int i = 0,rez = 1;
	while(i<e){
		rez *= x;
		i++;
	}
	return rez;
}
