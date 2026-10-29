
#include <iostream>
#include <vector>
using namespace std;

int rotated(vector<int> arra, int target)
{
    int start = 0;
    int end = arra.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arra[mid] == target)
        {
            return mid;
        }

        // Left half is sorted
        if (arra[start] <= arra[mid])
        {
            if (arra[start] <= target && target < arra[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        // Right half is sorted
        else
        {
            if (arra[mid] < target && target <= arra[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> arra = {4, 5, 6, 7, 8, 0, 1, 2, 3};
    int target = 7;

    cout << rotated(arra, target) << endl;


    return 0;
}