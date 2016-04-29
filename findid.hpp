//
//  findid.hpp
//  cpp11
//
//  Created by Liang Zhao on 11/14/15.
//  Copyright © 2015 Liang Zhao. All rights reserved.
//

#ifndef findid_hpp
#define findid_hpp

#include <iostream>
#include <vector>
#include <string>

struct Record {
    std::string mName;
    int mId;
};

int find_id(const std::vector<Record> &people, const std::string &name);

#endif /* findid_hpp */

