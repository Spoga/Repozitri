//NAPISATI PROGRAM KOJI CE FORMIRATI STRUKTURU SStudent I ISPISATI STUDENTA SA NAJVECIM PROSJEKOM ZA UNESENI BR. STUDENATA
#include<iostream>
#include<fstream>
using namespace std;

struct Student
{
	char ime[15], prezime[15];
	int godina;
	float prosjek;
};
int main()
{
	int n;
	cout<<"Unesite broj studenata: "<<endl;
	cin>> n;
	Student studenti[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Unesite ime "<<i+1<<" studenta: "<<endl;
		cin>>studenti[i].ime;
		cout<<"Unesite prezime "<<i+1<<" studenta: "<<endl;
		cin>>studenti[i].prezime;
		cout<<"Unesite godinu studija "<<i+1<<" studenta: "<<endl;
		cin>>studenti[i].godina;
		cout<<"Unesite prosjek "<<i+1<<" studenta: "<<endl;
		cin>>studenti[i].prosjek;
	}
	int maxindex = 0;
	float max = 0;
	for(int i=1;i<n;i++)
	{
		if(studenti[i].prosjek>max)
		{
			max=studenti[i].prosjek;
			maxindex=i;
			
		}
		cout<<endl;
	}
	cout<<"Student sa najvecim prosjekom je: "<<endl;
	cout<<studenti[maxindex].ime<< " "<<studenti[maxindex].prezime<<" "
	<<studenti[maxindex].godina<<" "<<studenti[maxindex].prosjek<<endl;
	
	
	return 0;
}
