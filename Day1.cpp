

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b=0.0;
    string str;

    cin>>a;
    cin>>b;
    
    cin.ignore(); // ignores an end of line character
    getline(cin,str);
    
    d=d+b;
    cout<<(i+a)<<endl;
    cout.precision(1);
    cout<<fixed<<d<<endl;
    
    cout<<s<<str<<endl;
    
    return 0;
}