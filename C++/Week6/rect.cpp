#include <iostream>
#include "rect.h"
using namespace std;

Rectangle::Rectangle(){
    length = 1.0;
    width = 1.0;
    perm = '*';
    fill = '-';
}

void Rectangle::setWidth(float w) {
    if(w>0.0 && w<20.0) {
        width = w;
        cout << "Width has been set to " << w << endl;
        return;
    }
    cout << "Invalid input, please enter float between 0 and 20" << endl;
}


void Rectangle::setLength(float l) {

    if(l>0.0 && l<20.0) {
        length = l;
        cout << "Length has been set to " << l << endl;
        return;
    }
    cout << "Invalid input, please enter float between 0 and 20" << endl;

}

float Rectangle::area() {
    float a = width * length;
    cout << "Area is " << a <<endl;
    return a;
}

float Rectangle::perimeter() {
    float p = (width+length)*2;
    cout << "Perimeter is " << p << endl;
    return p;
}

void Rectangle::setFillChar(char x) {
    fill = x;
}
void Rectangle::setPermChar(char x) {
    perm = x;
}

void Rectangle::draw() {
    int i,j;
    for(i=0;i<length;i++){
        cout << perm;
    }
    cout << endl;

    for(i=0;i<width-2;i++){
        cout << perm;
        for(j=0;j<length-2;j++){
            cout << fill;
        }
        cout << perm <<endl;
    }
    for(i=0;i<length;i++){
        cout << perm;
    }
    cout << endl;

}

