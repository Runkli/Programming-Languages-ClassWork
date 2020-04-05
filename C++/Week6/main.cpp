#include <iostream>
#include "rect.h"
#include "line.h"

using namespace std;
int main(){
    Rectangle rect1;
    rect1.setWidth(5.0);
    rect1.setLength(6.0);
    cout<<endl;

    rect1.perimeter();
    rect1.area();
    cout<<endl;

    rect1.setFillChar('z');
    rect1.setPermChar('*');
    rect1.draw();
    cout<<endl;

    line l1;
    coordinates start;
    coordinates end;
    start.x = 1;
    start.y = 1;
    end.x = 1;
    end.y = 5;

    l1.set(start,end,'v');
    l1.draw();

    return 0;
}