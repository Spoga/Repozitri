//stringovi
//Napisati program koji provjerava jeli uneseni string palindrom
#include <iostream>
#include <string>
using namespace std;
int main(){
 string str;
 cout<<"Unesite string: "<<endl;
 getline(cin, str);
 int i=0;
 int j=str.length()-1;
 bool ind=true;
 while(i<j)
 {
 if(str.at(i)==' ') 
 	{i++; continue;}
 if(str.at(j)==' ') 
 	{j--; continue;}
 if(str.at(i)!=str.at(j))
 	{ind=false; break;}
 i++; j--;
 }
 if(ind) cout<<"DA"<<endl;
 else cout<<"NE"<<endl;
 return 0;
}
