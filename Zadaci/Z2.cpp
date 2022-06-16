#include <iostream>
#include <string>
using namespace std;

int main()
{
	int r, k;


	cout << " Unesite broj redova i kolona matrice" << endl;
	cin >> r >> k;

	int matrica[r][k];
	
	cout << "Unesite elemente matrice"<<endl;
	
	for (int i = 0;i<r;i++){
		for (int j=0;j<k;j++){
			cout<<"Unesite element a"<<i<<j<<endl;
			cin>>matrica[i][j];
		}	
	}
	cout<<"Elementi matrice djeljivi sa 3 su:"<<endl;
	for (int i = 0;i<r;i++){
		for (int j=0;j<k;j++){
			if(matrica[i][j]%3==0){
				cout<<matrica[i][j]<<", ";
			}
			
		}	
	}
	

	
	return 0;
}