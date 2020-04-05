#ifndef TIME_H
#define TIME_H

class Rectangle {

private:
    float length;
    float width;
    char fill;
    char perm;
public:

    Rectangle();
    float perimeter();
    float area();
    void setLength(float);
    void setWidth(float);
    void draw();
    void setFillChar(char);
    void setPermChar(char);


};
#endif