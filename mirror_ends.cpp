Run this code
#include <iostream>
#include <string>
#include <algorithm>
 
std::string mirror_ends(const std::string& in)
{
    return std::string(in.begin(),
                       std::mismatch(in.begin(), in.end(), in.rbegin()).first);
}

int main()
{
}
 
