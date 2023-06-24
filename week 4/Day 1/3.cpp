#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

namespace mp = boost::multiprecision;
using Int128 = mp::int128_t;

Int128 str_to_int(const std::string& s) {
    return mp::cpp_int(s);
}

int main() {
    std::string s;
    std::cin >> s;
    Int128 ans = str_to_int(s);
    std::cout << ans << std::endl;
    return 0;
}
