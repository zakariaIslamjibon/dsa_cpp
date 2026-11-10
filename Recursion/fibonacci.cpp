#include <iostream>
using namespace std;

void fibonFind(int num)
{
   int fst = 0;
   int snd = 1;
   int count = 0;
   int fibo;
   
   while(count < num)
   {
    if (count <= 1)
    {
        fibo = count;
    }
    else
    {
        fibo = fst+snd;
        fst = snd;
        snd =fibo;
    }
    cout << fibo << endl;
    count ++;
    
   }
}
int main ()
{
    int num;

    cout << "Enter number find Fibonacci : ";
    cin >> num;

    fibonFind(num);

    return 0;
}