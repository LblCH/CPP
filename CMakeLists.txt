cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP Module00/ex01/Contact.class.hpp
Module00/ex01/Contact.class.cpp Module00/ex01/main.cpp Module01/ex00/Pony.hpp
        Module01/ex00/Pony.cpp Module01/ex00/main.cpp Module01/ex01/ex01.cpp
        Module01/ex02/main.cpp Module01/ex04/ex04.cpp Module01/ex05/Brain.hpp
        Module01/ex05/Human.hpp Module01/ex05/Human.cpp Module01/ex05/Brain.cpp
        Module01/ex05/main.cpp Module01/ex06/HumanB.hpp Module01/ex06/HumanB.cpp
        Module01/ex06/HumanA.hpp Module01/ex06/HumanA.cpp Module01/ex06/main.cpp
        Module01/ex06/Weapon.hpp Module01/ex06/Weapon.cpp Module01/ex07/main.cpp Module01/ex07/replace.hpp Module02/ex00/Fixed.cpp Module02/ex00/Fixed.hpp Module02/ex00/main.cpp)