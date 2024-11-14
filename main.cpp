#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    const int work_day = 28800; 
    int seconds;
    cout << "Enter seconds: ";
    cin >> seconds;

    int time_to_end = work_day - seconds;
    double hours_to_end = time_to_end / 3600.0;

    cout << fixed << setprecision(1); 
    cout << endl << "Time to end of workday: ";
    cout << "Hours: " << hours_to_end;
    return 0;
}
