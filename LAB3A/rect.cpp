#include "rect.h"
#include <iostream>
double Rect::getHight() const
{
    return hight;
}

void Rect::setHight(double newHight)
{
    if (newHight > 0)
    hight = newHight;
        else hight = 1;
}

double Rect::getWidth() const
{
    return width;
}

void Rect::setWidth(double newWidth)
{
    if(newWidth > 0)
    width = newWidth;
        else width = 1;
}

const std::string &Rect::getColor() const
{
    return color;
}

void Rect::setColor(const std::string &newColor)
{
    if (newColor != "")
    color = newColor;
}


Rect::Rect()
{
    hight = 1;
    width = 1;
    color = "black";
}

Rect::Rect(double newHight, double newWidth)
{
    hight = newHight;
    width = newWidth;
    color = "black";
}

Rect::Rect(double newHight, double newWidth, std::string color_)
{
    hight = newHight;
    width = newWidth;
    color = color_;
}

double Rect::area() const
{
    int n;
    n = hight * width;
    return n;
}

double Rect::per() const
{
    int n;
    n = hight + hight + width + width;
    return n;
}

void Rect::print() const
{
    std::cout << "Hight = " << hight << std::endl;
    std::cout << "Width = " << width << std::endl;
    std::cout << "Color = " << color << std::endl;
    std::cout << "Area = " << area() << std::endl;
    std::cout << "Perimetr = " << per() << std::endl;
}
