#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Enter the radius of the ball: ";
    cin >> r;
    cout << endl << "The volume of the ball is: " << (4.0 / 3.0) * M_PI * (r * r * r) << " cm in cube" << endl;
    return 0;
}
