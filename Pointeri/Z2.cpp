#include<iostream>
using namespace std;

int main()
{
	int niz[8]={3,5,8,66,5,9,2,89};
	cout<<niz[1]<<endl;
	int *poki = &niz[0];
	for(int j = 0; j<8;j++)
		cout<<niz[j]<<endl;
	
	for(int i = 0; i<8;i++)
	{
		poki++;
		cout<<poki<<endl<<endl;
		cout<<*poki<<endl;
	}
	
	return 0;
}
