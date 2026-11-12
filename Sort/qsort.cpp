
#include <iostream>
#include <vector>
using namespace std;

int part(vector<int> &arra, int st, int end)
{
    int idx = st - 1;
    int pivot = arra[end];

    for (int i = st; i < end; i++)
    {
        if (arra[i] <= pivot)
        {
            idx++;
            swap(arra[i], arra[idx]);
        }
    }

    idx++;
    swap(arra[end], arra[idx]);

    return idx;
}

void quickSort(vector<int> &arra, int st, int end)
{
    if (st < end)
    {
        int pivot = part(arra, st, end);

        quickSort(arra, st, pivot - 1);
        quickSort(arra, pivot + 1, end);
    }
}

int main()
{
    vector<int> arra = {30, 40, 20, 70, 60, 10, 25};

    quickSort(arra, 0, arra.size() - 1);

    cout << "Sorted Array: ";

    for (int val : arra)
    {
        cout << val << " ";
    }

    return 0;
}
