#include <bits/stdc++.h>

using namespace std;



int main()
{
    int arr[6][6];
    int sum=0,value=0;
    for (int i = 0; i < 6; i++) 
    {
        
        for (int j = 0; j < 6; j++) 
        {
            cin >> arr[i][j];
        }

    }
    for(int i=0;i<4;i++)
    {
      for(int j=0;j<4;j++)
      {
      
       value=arr[i][j]+ arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
       if(i==0 && j==0)
       {sum=value;} 
           
      if(value>sum)
        sum=value;
      }
    }
    cout<<sum;
    return 0;
}