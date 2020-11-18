#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

void triangleArea(double base, double height);
void triangleArea(double len1, double len2, double len3);

int main() {
    char again;
    double base, height, len1, len2, len3;
    do{
        int randnum;
        srand(time(NULL));
        randnum = rand() % 2;
        if(randnum == 1){
            cout << "Enter Base and Height of a triangle: ";
            cin >> base >> height;
            triangleArea(base, height);
        }
        else{
            cout << "Enter the length of all three sides of a triangle: ";
            cin >> len1 >> len2 >> len3;
            triangleArea(len1, len2, len3);
        }
        cout << "Run again? (Y/n)" << endl;
        cin >> again;
    }while(again == 'Y' || again == 'y');

    return 0;
}

void triangleArea(double base, double height){
    double area;
    area = base * height / 2;
    cout << "The area of the triangle is: " << area << endl;
}


void triangleArea(double len1, double len2, double len3){
    double area, s;
    s = len1 + len2 + len3 / 2;
    area = sqrt(s * (s - len1) * (s - len2) * (s-len3));
    cout << "The area of the triangle is: " << area << endl;
}