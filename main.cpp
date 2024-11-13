#include <iostream>
using namespace std;

int main() {
    float scale, Distance_On_Map;
    cout << "Enter the input data:" << endl;
    cout << "Map scale (kilometers per centimeter) -> ";
    cin >> scale;
    cout << "Distance between points representing settlements (cm) -> ";
    cin >> Distance_On_Map;
    float Settlements_Distance = scale * Distance_On_Map;
    cout << "Distance between settlements: " << Settlements_Distance << " km" << endl;
    return 0;
}
