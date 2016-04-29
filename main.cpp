//
//  main.cpp
//  cpp11
//
//  Created by Liang Zhao on 11/14/15.
//  Copyright © 2015 Liang Zhao. All rights reserved.
//
#include "findid.hpp"

int main()
{
    std::vector<Record> roster = { {"lisa",1},
        {"tom",2},
        {"larry",3}};
    std::cout << find_id(roster,"tom") << "\n";
    std::cout << find_id(roster,"rick") << "\n";
}
