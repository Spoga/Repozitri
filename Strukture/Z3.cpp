//strukture nizovi i pokazivaci
#include <iostream>
using namespace std;
struct Complex
{
 int real;
 float img;
};

int main()
{
  Complex var1[2];
  Complex *ptr;
  ptr=var1;
  
  var1[0].real = 5;
  var1[0].img = 0.33;
  var1[1].real = 7;
  var1[1].img = 0.56;    
 
 for(int i=0;i<2;i++)
 {
 	cout<<"Real part of  array element"<<(i+1)<<" : "<<(ptr+i)->real<<endl;
 	cout<<"Imaginary part of array element"<<(i+1)<<" : "<<(ptr+i)->img<<endl;
 }
  
 return 0;
}
