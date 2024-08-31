#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    float num;
    num=9.7;
    int floorValue = floor(num);
    int ceilValue = ceil(num);
    int nearestvalue=ceilValue;
    cout << "Floor value: " << floorValue << endl;
    cout << "Ceil value: " << ceilValue << endl;
    cout << "Rounded to nearest integer: " << nearestvalue << endl;
}

