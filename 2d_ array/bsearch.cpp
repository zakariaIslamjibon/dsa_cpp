#include <iostream>
#include <vector>
using namespace std;

bool search(vector<vector<int>>& matrix, int rows, int cols, int target)
{
    int start = 0;
    int end = rows - 1;

    // Find the row containing the target
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (matrix[mid][0] <= target &&
            target <= matrix[mid][cols - 1])
        {
            // Binary search inside the selected row
            int left = 0;
            int right = cols - 1;

            while (left <= right)
            {
                int midCol = left + (right - left) / 2;

                if (matrix[mid][midCol] == target)
                    return true;

                else if (matrix[mid][midCol] < target)
                    left = midCol + 1;

                else
                    right = midCol - 1;
            }

            return false;
        }
        else if (target > matrix[mid][cols - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int target = 7;
    int rows = 3;
    int cols = 4;

    if (search(matrix, rows, cols, target))
        cout << "Target found";
    else
        cout << "Target not found";

    return 0;
}