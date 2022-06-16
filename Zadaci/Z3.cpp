//STRUKTURE_I_POKAZIVACI
#include<stddef.h>
#include<iostream>
using namespace std;
struct Tacka
{
	int x =2;
	int y =4;
};

int main()
{
	Tacka a;
	Tacka *poki;
	poki = &a;
	cout<<a.x<<endl<<a.y<<endl;
	(*poki).x =33;
	(*poki).y =73;
	cout<< poki -> x<<endl<< poki-> y <<endl;
	return 0;
}
