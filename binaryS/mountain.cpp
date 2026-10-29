//Peak Index in Mountain Array 
#include <iostream>
#include <vector>
using namespace std;

int findMount(vector<int> arra)
{
    int start =0, end = arra.size() - 1;

    while (start<=end)
    {
        int mid = start +(end -start)/2;
        if (arra[mid -1] <  arra[mid] && arra[mid]  > arra[mid+1])
        {
            return mid;
        }
        else if (arra[mid -1] < arra[mid])
        {
            start = mid +1;
        }
        else {end = mid -1;}
    }
    return -1;

}
    
int main ()
{
    vector<int> arra = {5,6,7,8,9,1,2,3,4};
    
    cout << findMount(arra) << endl;
    
    return 0;
}
