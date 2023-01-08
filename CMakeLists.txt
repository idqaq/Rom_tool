cmake_minimum_required(VERSION 3.20)
project(Rom_tool)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Rom_tool main.cpp win.cpp win.h win.ui)
target_link_libraries(Rom_tool
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

