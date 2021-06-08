#pragma once
#include <iostream>
#include "window_t.h"

class screen_t
{
private:
    int x[32];
    int y[16];
public:
    window_t local_window;
    void display();
    void move_window();
    void size_dimentions();
    void get_local_window_current_location();
};
