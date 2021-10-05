#include<iostream>
using namespace std;

int const CF = 12;

void function(int n);

int main()
{
    int height;
    cout << "How tall are you?(in)___\b\b\b";
    cin >> height;
    function(height);
    return 0;
}

void function(int n)
{
    int m = n/CF;
    cout << "Wow! You are " << m << "foots and " << n%CF << " inches!";
}