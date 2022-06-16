//stringovi
//Napisati program koji ce porediti i ispusati veci string
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string igrac1, igrac2, str1, str2;
	cout<<"Neka prvi igrac unese string: "<<endl;
	getline(cin, igrac1);
	cout<<"Neka drugi igrac unese string: "<<endl;
	getline(cin, igrac2);
	str1 = igrac1.length();
	str2 = igrac2.length();
	if(str1>str2)
		cout<<"Prvi string je veci!"<<endl;
	else if(str1<str2)
		cout<<"Drugi string je veci!"<<endl;
	else
		cout<<"Isiti su!"<<endl;
	
	return 0;
}
