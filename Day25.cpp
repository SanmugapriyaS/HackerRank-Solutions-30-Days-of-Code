#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,factor;
    int *arr;
    cin>>n;
    arr=(int *)(malloc)(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i]!=2 || arr[i]==1)
        {
            cout<<"Not prime\n";
           
        }
        else if(arr[i]==2)
        {
            cout<<"Prime\n";
        }
        else
        {
           int range=sqrt(arr[i]);
           for(factor=3;factor<=range;factor+=2)
           {
               if(arr[i]%factor==0)
                break;
           }
           if(factor>range)
            cout<<"Prime\n";
           else
             cout<<"Not prime\n";
        }
    }
    return 0;
}
