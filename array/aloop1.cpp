#include <iostream>
#include <climits>
using namespace std;

int main ()
{
   double price [] = {10.2,25.1,414.5,45.545};
   int size = 4;

   double mini =price[0];
   for (int i = 0; i <size; i++)
   {
    if (price[i]<mini)
    {
        mini = price[i];
    }
   }
   cout <<mini;
    return 0;
}
