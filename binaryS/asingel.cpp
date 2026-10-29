#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int>& arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return arr[start];
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 5};

    cout << singleElement(arr);

    return 0;
}