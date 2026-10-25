
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairnum(vector<int> number, int target)
{
    
    int start = 0;
    int end = start-1;
    int num = number.size();
    vector<int> ans;

    for (start = 0; start<num ; start++)
    {
        for (int end = start-1; end <num; end++)
        {
            if (number[start] + number [end ]==  target)
            {
               ans.push_back(start);
               ans.push_back(end);
               return ans;
            }
        }
    }
}

int main()
{
    vector<int> number = {10,20,40,65,46,54,98,41,68,88,95,79,5,6,4,9,58,598,49};
    int target = 29;

    vector<int> ans = pairnum(number, target);
    cout << ans[0] << " " << ans[1] << endl;
   return 0;
}
