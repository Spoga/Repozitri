/* Struktura (String(ime prezime pol(karakter)) printati sve studentice iz grupe (pol Z) */
#include <iostream>
#include <string>

using namespace std;


struct grupa{
	string ime;
	string prezime;
	char pol;
};

int main(int argc, char *argv[]) {
	int n;
	char hold;
	cout<<"Unesite broj clanova grupe"<<endl;
	cin>>n;
	grupa grupa_1[n];
	string unos;

	for(int i=0;i<n;i++){
		cout<<"Unesite ime "<<i+1<<". clana grupe"<<endl;
		getline(cin >> ws,grupa_1[i].ime);
		cout<<"Unesite prezime "<<i+1<<". clana grupe"<<endl;
		getline(cin >> ws,grupa_1[i].prezime);	
		cout<<"Unesite spol "<<i+1<<". clana grupe"<<endl;
		cin>>grupa_1[i].pol;	
	}
	
	cout<<"Spisak svih clanova grupe zenskog spola:"<<endl;
	
	for(int i=0;i<n;i++){
		if(grupa_1[i].pol == 'Z'){
			cout<<grupa_1[i].ime<<" "<<grupa_1[i].prezime<<endl;
		}
		
	}
	
	
	return 0;
}
