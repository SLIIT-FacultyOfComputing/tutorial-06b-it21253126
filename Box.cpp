#include "Box.h"
#include <iostream>
using namespace std;

void Box::setLength(int L)
{
  length = L;
}
void Box::setWidth(int W)
{
  width = W;
}
void Box::setHeight(int H)
{
  height = H;
}

int Box::getLength()
{
  return length;
}
int Box::getWidth()
{
  return width;
}
int Box::getHeight()
{
  return height;
}
// Implemenet the calcVolume() function
int Box::calcVolume()
{
  return length * width * height;
}