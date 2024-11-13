#include <iostream>
using namespace std;

int main() {
	const int midnight = 86400;
    int seconds;
    cout << "Enter seconds: ";
    cin >> seconds;
    int minutes = seconds / 60;
    seconds = seconds % 60;
    int hours = minutes / 60;
    minutes = minutes % 60;
    int time_to_midnight = midnight - seconds;
	int minutes_midnight = time_to_midnight / 60;
    time_to_midnight = time_to_midnight % 60;
	int hours_midnight = minutes_midnight / 60;
	minutes_midnight = minutes_midnight % 60;

    cout << "Hours: " << hours << " Minutes: " << minutes << " Seconds: " << seconds;
	cout << endl << "Time to midnight: ";
    cout << "Hours: " << hours_midnight-1 << " Minutes: " << minutes_midnight << " Seconds: " << time_to_midnight;
    return 0;
}
