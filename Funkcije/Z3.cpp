/* Napisati program koji ce pomocu dvije funkcije ispisivati
parne brojeve od manjeg ka vecem koristeci for petlju unutar funkcije 
odnosno neparne brojeve od veceg ka manjem koristeci while petlju 
unutar funkcije. Sumirane rezultate i jedne i druge funkcije vratiti u 
main funkc. i  pomnoziti ih.*/
#include <iostream>
using namespace std;
int Parni(int,int);
int Neparni(int,int);
int main(int argc, char *argv[]) {
	int a,b,x,y;
	cout<<"Unesite interval a i b: ";
	cin>>a>>b;
		
	x = Parni(a,b);
	cout<<endl;
	y = Neparni(a,b);
	
	cout<<endl;
	cout<<"Proizvod suma 2 funkcije je: "<<x*y;	
	
	return 0;
}

int Parni(int a,int b){
	int i,suma=0;
	if (a>b){
		for(b;b<a;b++){
			if (b%2==0){
				cout<<b<<",";
				suma += b;
			}
		}
	}
	else{
		for(a;a<b;a++){
			if (a%2==0){
				cout<<a<<",";
				suma += a;
			}
		}		
		
	cout<<suma;
	return suma;
	}
}
int Neparni(int a,int b){
	int suma=0;
	if (a>b){
		while(a!=b){
			if(a%2!=0){
				cout<<a<<",";
				suma +=a;
			}
			a--;
		}	
		
	}
	else{
		while(a!=b){
			if(b%2!=0){
				cout<<b<<",";
				suma +=b;
			}
			b--;
		}	
		}
	cout<<suma;
	return suma;
	
}

