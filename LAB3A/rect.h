#ifndef RECT_H
#define RECT_H
#include <string>


class Rect
{
private:

    double hight;
    double width;
    std::string color;

public:
    Rect();
    Rect(double newHight, double newWidth );
    Rect(double newHight, double newWidth, std::string color_ );


    double area () const;
    double per () const;

    double getHight() const;
    void setHight(double newHight);

    double getWidth() const;
    void setWidth(double newWidth);

    const std::string &getColor() const;
    void setColor(const std::string &newColor);

    void print() const;
};

#endif // RECT_H
