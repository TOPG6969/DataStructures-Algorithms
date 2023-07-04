#include <iostream>
using namespace std;

int firstOccurance(int *v, int n, int target)
{
    int start = 0 , end = n - 1 , ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == v[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > v[mid])
             start = mid + 1;
        
        else
            end = mid - 1;   
    }
    return ans;
}
int lastOcc(int *v, int n, int target)
{
    int start = 0 , end = n - 1 , ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == v[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target > v[mid])
            start = mid + 1;
        
        else
            end = mid - 1;
    }
    return ans;
}
int main()
{
    int x[7] = {1, 2, 2, 3, 3, 8, 8};
    int target;
    cout << "enter target" << endl;
    cin >> target;
    cout << "index of first occurance is = " << firstOccurance(x, 7, target) << endl;
    cout << "index of last occurance is = " << lastOcc(x, 7, target) << endl;

    cout << "number of appearance is = " << lastOcc(x, 7, target)-firstOccurance(x, 7, target)+1 << endl;

    return 0;
}
