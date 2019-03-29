#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int> e)
    {
        elements=e;
    }
    void computeDifference()
    {   int min,max;

        for (vector<int>::iterator it = elements.begin() ; it != elements.end(); ++it)
           {
               if(it==elements.begin())
               {
                   min=*it;
                   max=*it;
               }
               if(min> *it)
               {
                   min=*it;
               }
               if(max< *it)
               {
                   max=*it;
               }
           }
           maximumDifference=max-min;
    }
	// Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}