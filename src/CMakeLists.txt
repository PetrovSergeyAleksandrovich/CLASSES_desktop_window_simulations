cmake_minimum_required(VERSION 3.19)

add_executable(
        CLASSES_desktop_window_simulations
        main.cpp
        display_t.cpp
        screen_t.cpp)


target_include_directories(CLASSES_desktop_window_simulations PUBLIC ${MY_INCLUDE_DIR})