

#include <string>
#include <iostream>


using namespace std;


int main(){
    string S;
    int no;
    cin >> S;
    try{
             no=stoi(S);
             cout<<no;
             }
    catch(exception e)
    {
    cout<<"Bad String";}
    return 0;
}