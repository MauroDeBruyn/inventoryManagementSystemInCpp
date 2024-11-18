cmake_minimum_required(VERSION 3.16)

project(inventoryManagementSystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(inventoryManagementSystem main.cpp
    workshop.h workshop.cpp
    item.h item.cpp
    tool.h tool.cpp

)

include(GNUInstallDirs)
install(TARGETS inventoryManagementSystem
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
