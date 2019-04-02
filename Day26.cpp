#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int da,ma,ya,de,me,ye,fine;
    
    cin>>da >>ma>>ya;

    cin >> de >> me >> ye;
    int monthsLate = ma - me;
    int daysLate = da - de;
    int yearDiference = ya - ye;

    fine= (ya - ye > 0)
            ? 10000
            : (ma - me > 0 && yearDiference == 0)
                  ? (monthsLate * 500)
                  : (da - de > 0 && yearDiference == 0)
                        ? (daysLate * 15)
                        : 0;
    cout<<fine;
    return 0;
}
