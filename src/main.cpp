#include <iostream>
#include "window_t.h"
#include "screen_t.h"

struct commands
{
    std::string move = "move";
    std::string resize = "resize";
    std::string display = "display";
    std::string exit = "close";
};

int main()
{
    commands commands_list;
    std::string command = "none";

    screen_t* screen = new screen_t;
    screen->get_local_window_current_location();
    screen->display();

    do
    {
        std::cout << "type command move/resize/display/close:";
        std::cin >> command;
        if(command == commands_list.move) screen->move_window();
        if(command == commands_list.resize) screen->size_dimentions();
        if(command == commands_list.display) screen->display();
        if(command == commands_list.exit)
        {
            delete screen;
            std::cout << "closed" << std::endl;
            break;
        }
    }while(true);
    return 0;
}
