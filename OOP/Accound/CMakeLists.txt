cmake_minimum_required(VERSION 3.27)
project(Accound)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Accound
        main.cpp
        Account.h
        Account.cpp
        SavingAccount.cpp
        CheckingAccount.cpp)
