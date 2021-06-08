#pragma once
#include "vector"

class window_t
{
private:
    int x_point = 1;
    int y_point = 1;
    int x_length = 5;
    int y_length = 5;
public:
    int getStartPointX();
    int getStartPointY();
    int getLengthX();
    int getLengthY();
    void setStartPointX(int value_user, int value_object, int window_size_x);
    void setStartPointY(int value_user, int value_object, int window_size_y);
    void setLengthX(int value_user, int value_object, int window_size_x);
    void setLengthY(int value_user, int value_object, int window_size_y);
};
