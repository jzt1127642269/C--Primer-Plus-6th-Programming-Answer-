#include<iostream>
using namespace std;

int const CF = 12;

void function(int n, int m, int w);

int main()
{
    int height_F, height_I, weight;
    cout << "How tall are you?" << endl << "Foots:" << endl;
    cin >> height_F;
    cout << "Inches: " << endl;
    cin >> height_I;
    cout << "Enter your weight:(pounds) " << endl;
    cin >> weight;

    function(height_F, height_I, weight);
    return 0;
}

void function(int n, int m, int w)
{
    double mm, kg;
    mm = (n*CF + m)*0.0254;
    kg = w / 2.2;
    cout << "Your BMI is " << kg / (mm * mm) << endl;
}