
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int numberOfSwaps = 0,temp;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
    
    
    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            numberOfSwaps++;
        }
    }
    if(numberOfSwaps==0)
     break;
     
    } 
   cout<<"Array is sorted in "<<numberOfSwaps<<" swaps.";
   cout<<"\nFirst Element: "<<a[0];
   cout<<"\nLast Element: "<<a[n-1];


    return 0;
}
