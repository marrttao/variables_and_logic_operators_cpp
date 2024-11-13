#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float length, width, height;
    cout << "Length (cm) -> ";
    cin >> length;
    cout << "Width (cm) -> ";
    cin >> width;
    cout << "Height (cm) -> ";
    cin >> height;

    float volume = length * width * height;
    cout << "Volume: " << fixed << setprecision(2) << volume << " cubic cm" << endl;

    return 0;
}
