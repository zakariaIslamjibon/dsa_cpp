
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> arra)
{
    int n = arra.size() -1;

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arra[j] > arra[j + 1])
            {
                swap(arra[j], arra[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arra[i] << " ";
    }
}

int main()
{
    vector<int> arra = {1, 28, 4, 9, 8, 4, 7, 3, 2};

    bubbleSort(arra);

    return 0;
}
