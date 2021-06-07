#include <iostream>
#include "display_t.h"
#include "screen_t.h"

struct commands
{
    std::string exit = "close";
};

int main()
{
    commands commands_list;
    std::string command = "none";

    screen_t* screen = new screen_t;
    do
    {
        std::cout << "type command move/resize/display/close:";
        std::cin >> command;

        if(command == commands_list.exit)
        {
            delete screen;
            std::cout << "closed" << std::endl;
            break;
        }
    }while(true);
    return 0;
}
