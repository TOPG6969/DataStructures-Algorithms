//  ONLY IMPORTANT CODE
//  Time Complexity = O(n)
//  Space Complexity = O(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1 ; i < n ; i++)
    {
        bool swapped = false;
        for(int j = 0 ; j < arr.size()-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) break;
    }
}
      
