#include <iostream>

int main(){
    using namespace std; // Not sure if this is a good idea because a video told me so... lol

    char unit;
    double degree;

    cout << "Are you converting from Celsius (C) or Fahrenheit (F)?: ";
    cin >> unit;

    switch (unit)
    {
    case 'C':
        cout << "Enter the degrees in Celsius: ";
        cin >> degree;
        cout << "The temperature in Fahrenheit is: " << (degree * 1.8 + 32);
        break;
    case 'F':
        cout << "Enter the degrees in Fahrenheit: ";
        cin >> degree;
        cout << "The temperature in Celsius is: " << ((degree - 32)/(1.8)); // wouldn't work when I used ((degree - 32)/(5/9)), prob could fix lol
        break;
    default:
        cout << "You did not enter a valid response.";
        break;
    }

    return 0;
}