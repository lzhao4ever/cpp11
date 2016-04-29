//
//  findid.cpp
//  cpp11
//
//  Created by Liang Zhao on 11/14/15.
//  Copyright © 2015 Liang Zhao. All rights reserved.
//

#include "findid.hpp"

int find_id(const std::vector<Record> &people,
            const std::string &name)
{
    auto match_name = [&name](const record& r) -> bool {
        return r.mName == name;
    };

    auto ii = find_if(people.begin(), people.end(), match_name );

    if (ii == people.end())
        return -1;
    else
        return ii->id;
}
