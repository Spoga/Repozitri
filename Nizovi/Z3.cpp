//VISEDIMENZIONALNI NIZOVI
#include <iostream>
using namespace std;

int multipletable[10][10];

int main()
{
      
       for (int i = 1; i <= 10; i++)
       {
             for (int j = 1; j <= 10; j++)
             {
                    multipletable[(i - 1)][(j - 1)] = i * j;
      
             }
       }
      
       for (int k = 0; k < 10; k++)
       {
             for (int l = 0; l < 10; l++)
             {
                    cout << multipletable[k][l] << "\t";

             }
       }
      
       cout << endl;
       system("PAUSE");
       return 0;

}

