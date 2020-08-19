#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <limits>

template<size_t N>
void to_binary(const int a)
{
    std::string s1 = std::bitset<N>(a).to_string();
    auto it = std::find(s1.begin(), s1.end(), '1');
    std::string ans{it, s1.end()};
    if(a == 0)
        std::cout << 0;
    else
        std::cout << ans;
}

int main()
{
    int a = 0;
    std::cin >> std::oct >> a;
    to_binary<10'000'000>(a);
}
