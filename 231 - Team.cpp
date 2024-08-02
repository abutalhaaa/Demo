//https://codeforces.com/problemset/problem/231/A

#include<iostream>

using namespace std ;

int main ()
{
    int t, Petya , Vasya , Tonya , number(0);
    cin >> t ;
    while (t--)
    {
        cin >> Petya >> Vasya >> Tonya ;

        if (Petya +Vasya + Tonya >= 2 )
        {
            number++ ;
        }
    }
    cout << number << endl ;
}
