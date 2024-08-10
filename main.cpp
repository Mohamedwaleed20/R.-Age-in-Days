#include <iostream>
#include <cmath>

using namespace std ;
int main()
{
    int x ;
    cin >> x ;
    int years = x/365 ;
    int months =  (x%365)/30 ;
    int days = (x%365)%30 ;
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    return 0;
}
