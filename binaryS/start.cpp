
#include <iostream>
#include <vector>
using namespace std;

int findTar(vector<int> arra, int target)
{
    int start = 0;
    int end = arra.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arra[mid] == target)
        {
            return mid;
        }
        else if (arra[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arra = {10, 20, 30, 40, 55, 56, 57, 60, 61, 65, 66};

    int target = 57;

    cout << findTar(arra, target) << endl;
    cout << arra[target];

    return 0;
}
