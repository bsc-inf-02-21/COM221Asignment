#include<iostream>
#include<cmath>
using namespace std;

float areaoftriangle(float base, float height) {
    return 0.5 * base * height;
}

float areaofrectangle(float length, float width) {
    return length * width;
}

float areaofsquare(float side) {
    return side * side;
}

int main() {
    while (true) {
        char choice;
        bool valid_Choice = false;
        
        while (!valid_Choice) {
            cout << "Select shape to calculate the area for: " << "\n";
            cout << "1. Square" << endl;
            cout << "2. Rectangle" << endl;
            cout << "3. Triangle" << endl;
            cout << "4. Quit Program" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            
            switch (choice) {
                case '1': {
                    double side;
                    cout << "Input length of the square side: ";
                    cin >> side;
                    if (side > 0) {
                        cout << "area of square: " << areaofsquare(side) << "\n";
                        valid_Choice = true;
                    } else {
                        cout << "Invalid input. Side length must be positive." <<"\n";
                    }
                    break;
                }
                case '2': {
                    double length, width;
                    cout << "Input length and width of the rectangle ";
                    cin >> length >> width;
                    if( length>0 && width>0 ){
                        cout << "area of rectangle " << areaofrectangle(length, width) << "\n";
                        valid_Choice = true;
                    } else {
                        cout << "Invalid input. Length and width must be positive." <<"\n";
                    }
                    break;
                }
                case '3': {
                    double base, height;
                    cout << "Input the base and height of the triangle: ";
                    cin >> base >> height;
                    if ( base>0 && height>0) {
                        cout << "area of triangle " << areaoftriangle(base, height) << "\n";
                        valid_Choice = true;
                    } else {
                        cout << "Invalid input. Base and height must be positive." << "\n";
                    }
                    break;
                }
                case '4': {
                    cout << "Program Quitting" << "\n";
                    return 0;
                }
                default: {
                    cout << "Invalid input. Please enter a choice between 1 to 4." << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}
