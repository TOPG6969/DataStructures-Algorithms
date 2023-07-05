//  ONLY IMPORTANT CODE
//  Time Complexity = O(n)
//  Space Complexity = O(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1 ; i < arr.size() ; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for( ; j >= 0 ; j--)
        {
            if(arr[j] > temp) 
              arr[j+1] = arr[j];

            else 
              break;
        }
        arr[j+1] = temp;
    }
}
            
