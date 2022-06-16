/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <iostream>
#include <math.h>
using namespace std;

float Kvadrat(float);
float Kub(float);
int main(int argc, char *argv[]) {
	float n;
	cout<<"Unesite vrijednost N: ";
	cin>>n;
	
	for(float i = 1;i<n-0.1;i+=0.1){
		cout<<"Za i="<<i<<", "<<Kvadrat(i)<<", "<<Kub(i)<<endl;
	}
	return 0;
}

float Kvadrat(float x){
	return pow(x,2);
}

float Kub(float x){
	return pow(x,3);
}


