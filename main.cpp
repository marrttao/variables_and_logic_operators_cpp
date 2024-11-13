#include <iostream>
using namespace std;

int main() {
    const int work_day = 28800;
    int seconds;
    cout << "Enter seconds: ";
    cin >> seconds;
    int minutes = seconds / 60;
    seconds = seconds % 60;
    int hours = minutes / 60;
    minutes = minutes % 60;
    int time_to_end = work_day - seconds;
    int minutes_to_end = time_to_end / 60;
    time_to_end = time_to_end % 60;
    int hours_to_end = minutes_to_end / 60;
    minutes_to_end = minutes_to_end % 60;

    cout << endl << "Time to end of workday: ";
    cout << "Hours: " << hours_to_end - 1 << " Minutes: " << minutes_to_end << " Seconds: " << time_to_end;
    return 0;
}