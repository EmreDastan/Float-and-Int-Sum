#include <iostream>
using namespace std;
float floatSum(float a,float b);
int main() {
    float a,b;
    cout << "Enter number 1 : " << endl;
    cin >> a;
    cout << "Enter number 2 : " << endl;
    cin >> b;
    float sum = floatSum(a,b);
    cout << "Sum = " << sum << endl;
}
float floatSum(float a, float b) {
    return ((float) a + b);
}