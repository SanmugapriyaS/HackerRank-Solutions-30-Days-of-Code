#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;

template< typename T >
typename vector<T>::iterator 
   sort_vector( vector<T> & vec, T const& item )
{
    return vec.insert
        ( 
            upper_bound( vec.begin(), vec.end(), item ),
            item 
        );
}



int main() {
    int N;
    static regex pattern("(\\w+)(\\.|_)?(\\w*)@(gmail)(\\.(\\w+))+");
    vector<string> names;
    
    cin >> N;
    
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if (regex_match(emailID, pattern)) {
          sort_vector(names, firstName);
        }
    }
    for(int counter=0;counter<N;++counter) cout << names[counter]<<endl;
    return 0;
}
