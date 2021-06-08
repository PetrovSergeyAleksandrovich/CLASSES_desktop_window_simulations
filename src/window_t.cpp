#include "window_t.h"

int window_t::getStartPointX()
{
    return x_point;
}

int window_t::getStartPointY()
{
    return y_point;
}

int window_t::getLengthX()
{
    return x_length;
}

int window_t::getLengthY()
{
    return y_length;
}

void window_t::setStartPointX(int value_user, int value_object, int window_size_x)
{
    if(value_user < 0)
    {
        x_point = 0;
        return;
    } else if (value_user + value_object > window_size_x)
    {
        x_point = window_size_x - value_object;
        return;
    }
    x_point = value_user;
}

void window_t::setStartPointY(int value_user, int value_object, int window_size_y) {
    if(value_user < 0)
    {
        y_point = 0;
        return;
    } else if (value_user + value_object > window_size_y)
    {
            y_point = window_size_y - value_object;
            return;
    }
    y_point = value_user;
}

void window_t::setLengthX(int value_user, int value_object, int window_size_x)
{
    if(value_user < 0)
    {
        x_length = 5;
        return;
    } else if(value_user > window_size_x)
    {
        x_length = window_size_x;
        x_point = 0;
        return;
    } else if (x_point+value_object == window_size_x)
    {
        x_length = value_user;
        x_point = window_size_x - value_user;
    } else
    {
        x_length = value_user;
    }
}

void window_t::setLengthY(int value_user, int value_object, int window_size_y)
{
    if(value_user < 0)
    {
        y_length = 5;
        return;
    } else if(value_user > window_size_y)
    {
        y_length = window_size_y;
        y_point = 0;
        return;
    } else if (y_point+value_object == window_size_y)
    {
        y_length = value_user;
        y_point = window_size_y - value_user;
    } else
    {
        y_length = value_user;
    }
}
