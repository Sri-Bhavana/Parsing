#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& input, const std::string& delimiter) {
    std::vector<std::string> tokens;
    std::istringstream iss(input);
    std::string token;

    while (std::getline(iss, token, delimiter[0])) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    std::string str = "Hello,World";
    std::string delim = ",";
    auto tokens = split(str, delim);
    for (const auto& token : tokens) {
        std::cout << token << '\n';
    }
    return 0;
}