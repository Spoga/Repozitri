#include <iostream>
#include <fstream>
using namespace std;

void datoteka1(char* a);
int main()
{
	char slovo;
	cout << "Unesite slovo: " << endl;
	cin >> slovo;
	char* a = &slovo;
	datoteka1(a)
	
	return 0;
}
void datoteka1(char *a)
{
	char slovo;
	slovo = *a

	fstream objekat;
	objekat.open("moja_datoteka.txt");
	objekat << slovo;
	objekat.close();


}
