#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class Vec
{
private:
    double* array;
    int quan;
    int state;
public:
    Vec();
    ~Vec();
    Vec(int quan_);
    Vec(int quan_, double init);
    Vec(const Vec &input);


    Vec &operator=(const Vec &copy);
    Vec operator+(const Vec &b) const;
    Vec operator-(const Vec &b) const;
    Vec operator*(double num) const;
    Vec operator/(double num) const;

    void changeel(unsigned int position, double number = 0);
    void printel(unsigned int pos);


    bool bthen(const Vec &a, const Vec &b, int pos) const;
    bool lthen(const Vec &a, const Vec &b, int pos) const;
    bool nequal(const Vec &a, const Vec &b) const;
    bool equal(const Vec &a, const Vec &b) const;

    friend std::ostream &operator<<(std::ostream &os, const Vec &v);
};

#endif // VECTOR_H
