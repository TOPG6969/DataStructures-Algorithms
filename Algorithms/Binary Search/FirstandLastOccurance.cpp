#include <iostream>
using namespace std;

long long firstOccurance(vector<long long>& v, long long target)
{
    int n = v.size();
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
long long lastOcc(vector<long long>& v, long long target)
{
    int n = v.size();
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
pair<long,long> indexes(vector<long long> v, long long target)
{
        long long first=firstocc(v,target);
        long long last=lastocc(v,target);
        return {first,last};
}
