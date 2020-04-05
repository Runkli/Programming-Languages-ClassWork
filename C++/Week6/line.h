#ifndef UNTITLED_LINE_H
#define UNTITLED_LINE_H

#include "coordinates.h"

class line {
public:
    coordinates start;
    coordinates end;
    char type;

    line();
    void set(coordinates,coordinates,char);
    void draw();

};


#endif //UNTITLED_LINE_H
