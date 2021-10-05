#include<iostream>
using namespace std;

int const CF = 60;

double function(double deg, double min, double sec);

int main()
{
    double deg,min,sec;
    cout << "Enter a latitude in degrees, minutes and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;
    cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << function(deg, min, sec) << " degrees.";
    return 0;
}

double function(double deg, double min, double sec)
{
    return deg + min / CF + sec / (CF*CF);
}