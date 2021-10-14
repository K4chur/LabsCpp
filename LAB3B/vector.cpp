#include "vector.h"
#include <iostream>
#include <math.h>


Vec::Vec()
{
    array = new double[1];
    array[0] = 0;
    state = 0;
    quan = 1;

}

Vec::~Vec()
{
    if (array)
        delete[] array;

}

Vec::Vec(int quan_)
{
    if (quan_ <= 0) {
        array = NULL;
        quan = 0;
        state = -1;
        std::cout << "Error. Array is empty. State: -1!" << std::endl;
      }
    else {
        array = new double [quan_];
        std::cout << "Pls input an array of " << quan_ << " elements" << std::endl;
        for (int i = 0; i < quan_; i++) {
            std::cout << "Input array["<< i <<"]: ";
            std::cin >> array[i];
        }
        quan = quan_;
        state = 0;
      }

}

Vec::Vec(int quan_, double init)
{
    if (quan_ <= 0) {
        array = NULL;
        quan = 0;
        state = -1;
        std::cout << "Error. Array is empty. State: -1!" << std::endl;
      } else {
        array = new double[quan_];
        for (int i = 0; i < quan_; i++) {
          array[i] = init;
        }
        state = 0;
        quan = quan_;
      }

}

Vec::Vec(const Vec &input)
{
    if (this != &input) {
        quan = input.quan;
        array = new double[quan];
        state = 0;
        for (int i = 0; i < quan; i++)
          array[i] = input.array[i];
      }

}

Vec &Vec::operator=(const Vec &copy)
{
    if (quan != copy.quan) {
        if (array)
          delete[] array;
        quan = copy.quan;
        array = new double[quan];
        state = 0;
      }
      for (unsigned int i = 0; i < quan; i++)
        array[i] = copy.array[i];
      return *this;

}

Vec Vec::operator+(const Vec &b) const
{
    int lessquan;
        if (quan < b.quan) lessquan = quan ;
            else  lessquan = b.quan;
      if (lessquan >= 0) {
        Vec result(lessquan, 0);
        for (int i = 0; i < lessquan; i++) {
            result.array[i]=array[i];
        }
        for (int i = 0; i < lessquan; i++) {
          result.array[i] = array[i] + b.array[i];
        }
        return result;
      }

      std::cout << "something went wrong!"<< std::endl;
      return Vec();
}

Vec Vec::operator-(const Vec &b) const
{
    int lessquan;
    if (quan < b.quan) lessquan = quan ;
        else  lessquan = b.quan;
      if (lessquan >= 0) {
          Vec result(lessquan, 0);
            for (int i = 0; i < lessquan; i++) {
              result.array[i]=array[i];
            }
            for (int i = 0; i < lessquan; i++) {
                    result.array[i] = array[i] - b.array[i];
        }
        return result;
      }
      std::cout << "something went wrong!"<< std::endl;
      return Vec();
}

Vec Vec::operator*(double num) const
{
    Vec result(quan,0);
    for (int i = 0; i < quan; i++) {
      result.array[i]=array[i];
    }
      for (int i = 0; i < quan; i++) {
        result.array[i] = array[i] * fabs(num);
      }
      return result;

}

Vec Vec::operator/(double num) const
{
    Vec result(quan,0);
    for (int i = 0; i < quan; i++) {
      result.array[i]=array[i];
    }
      for (int i = 0; i < quan; i++) {
        result.array[i] = array[i] / fabs(num);
      }
      return result;
}

void Vec::changeel(unsigned int position, double number)
{
    if (array) {
        if (position <= quan) {
          array[position] = number;
        } else
          std::cout << "Error: N > positions in array." << std::endl;
      }

}

void Vec::printel(unsigned int pos)
{
    std::cout << array[pos];
}

bool Vec::bthen(const Vec &a, const Vec &b, int pos) const
{

      if (a.array[pos] <= b.array[pos])
        return false;
      return true;

}

bool Vec::lthen(const Vec &a, const Vec &b, int pos) const
{

    if (a.array[pos] >= b.array[pos])
      return false;
    return true;
}

bool Vec::nequal(const Vec &a, const Vec &b) const
{
    for (int i = 0; i < quan; i++) {
        if (a.array[i] == b.array[i])
          return false;
      }
      return true;
}



bool Vec::equal(const Vec &a, const Vec &b) const
{
    for (int i = 0; i < quan; i++) {
        if (a.array[i] != b.array[i])
              return false;
      }
      return true;
}

std::ostream &operator<<(std::ostream &os, const Vec &v)
{
    for (int i = 0; i < v.quan; i++) {
        os << v.array[i] << " ";
      }
      return os;

}
