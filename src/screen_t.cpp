#include "screen_t.h"

void screen_t::display()
{
    for(int Y = 0; Y < sizeof(y) / sizeof(int); ++Y)
    {
        for(int X = 0; X < sizeof(x) / sizeof(int); ++X)
        {
            if((Y >= local_window.getStartPointY() && Y <= (local_window.getStartPointY()+local_window.getLengthY()-1))
            &&
            (X >= local_window.getStartPointX() && X <= (local_window.getStartPointX()+local_window.getLengthX())-1))
            {
                std::cout << true << " ";
            }
            else std::cout << false << " ";
        } std::cout << std::endl;
    }
}

void screen_t::move_window()
{
    int user_input_int = 0;
    std::cout << "type value TOP LEFT corner horisontal(X): ";
    std::cin >> user_input_int;
    local_window.setStartPointX(user_input_int, local_window.getLengthX(), sizeof(x) / sizeof(int));
    std::cout << "type value TOP LEFT corner vertical(Y): ";
    std::cin >> user_input_int;
    local_window.setStartPointY(user_input_int, local_window.getLengthY(), sizeof(y) / sizeof(int));
    get_local_window_current_location();
}

void screen_t::get_local_window_current_location()
{
    std::cout << "Current coordinates ";
    std::cout << "x = " << local_window.getStartPointX();
    std::cout << "; y = " << local_window.getStartPointY() << std::endl;
    std::cout << "Current size X: " <<local_window.getLengthX() << "; Y: " << local_window.getLengthY() << std::endl;
    std::cout << std::endl;
}

void screen_t::size_dimentions()
{
    int user_input_int = 0;
    std::cout << "type value horisontal(X) length: ";
    std::cin >> user_input_int;

    local_window.setLengthX(user_input_int, local_window.getLengthX(), sizeof(x) / sizeof(int));
    std::cout << "type value vertical(Y) length: ";
    std::cin >> user_input_int;
    local_window.setLengthY(user_input_int, local_window.getLengthY(), sizeof(y) / sizeof(int));
    get_local_window_current_location();
}
