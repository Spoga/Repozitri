//POKAZIVACI NIZOVI I FUNKCIJE
#include<fstream>
#include <iostream>
using namespace std;

void swap(short *mypointer1, short *mypointer2);

short myarray[8] = { 10, 5, 4, 17, 12, 9, 19, 1 };

int main()
{
       short low = 0;
       cout << "Niz \t\t";

       for (short i = 0; i < 8; i++)
       {
             cout << myarray[i] << "\t";

       }

       cout << endl << endl;

       for (short j = 0; j < 8; j++)
       {
             
             low = j;

             for (short k = j; k < 8; k++)
             {
                    if (myarray[k] < myarray[low]) low = k;
                    if (j != low) swap(&myarray[j], &myarray[low]);

             }

       }

       cout << "Sort \t\t";
       for (short l = 0; l < 8; l++)
       {
             cout << myarray[l] << "\t";

       }

       cout << endl << endl;
       system("PAUSE");
    return 0;

}

// FUNKCIJA
void swap(short *mypointer1, short *mypointer2)
{
       short temp = *mypointer1;
       *mypointer1 = *mypointer2;
       *mypointer2 = temp;

}
