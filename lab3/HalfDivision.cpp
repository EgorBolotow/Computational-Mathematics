#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265
float n(float x1, float x2,float a, float b)
{
float x = (x1 + x2) / 2;
while(fabs(a*sin(x)-b*(x*x)) > 0.001)
    if (a*sin(x) < b*(x*x))
    {
        x2 = x;
        x = (x2 + x1) / 2;
    }
    else 
        if (a*sin(x) > b*(x*x))
        {
            x1 = x;
            x = (x2 + x1) / 2;
        }
    return x;
}
int main()
{
    float a,b;
    cin >> a;
    cin >> b;
    cout << n(0, PI,a, b) ;    
    return 0;
}
