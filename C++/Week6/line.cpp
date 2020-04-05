#include <iostream>
#include "line.h"
#include <cmath>
#include "coordinates.h"
using namespace::std;

line::line(){
    start.x = 0;
    start.y = 0;
    end.x = 0;
    end.y = 0;
};

void line::set(coordinates s, coordinates e, char t) {
    start = s;
    end = e;
    if(t=='h'){
        if(start.y==end.y){
            cout << "Line is drawable" <<endl;
            type = t;
        }
        else{
            cout << "Line is not drawable with given type " <<t <<endl;
        }
    }else if(t=='v') {
        if (start.x==end.x) {
            cout << "Line is drawable" << endl;
            type = t;
        } else {
            cout << "Line is not drawable with given type " << t << endl;

        }
    }else{
        cout << "Invalid type" <<endl;
    }
}


void line::draw(){
    int i;
    if(type == 'h'){
        for(i=0;i<=abs((start.x-end.x));i++){
            cout << '*';
        }
        cout<<endl;
    }else if(type=='v'){
        for(i=0;i<=abs((start.y-end.y));i++){
            cout<<'*'<<endl;
        }

    }
}