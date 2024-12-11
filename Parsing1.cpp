#include <iostream>
#include <string>
#include <algorithm>   // For trim
#include <sstream>  // For parseInt
#include <vector>   // For data parsing into Vector

void trim(std::string& str) {
    str.erase(str.begin(), std::find_if(str.begin(), str.end(), [](int ch) {
        return !std::isspace(ch);
        }));

    str.erase(std::find_if(str.begin(), str.end(), [](int ch) {
        return !std::isspace(ch);
        }));
}

std::vector<std::string> split(const std::string& input, char delim) {
    std::vector<std::string> strings;
    std::stringstream ss(input);
    std::string token;
    while (std::getline(ss, token, delim)) {
        strings.push_back(token);
    }
    return strings;
}


int main() {
    std::string str = " Hello World! ";

    // Printing the original string
    std::cout << "Original string: " << str << std::endl;

    // Trimming spaces
    trim(str);
    std::cout << "Trimmed string: " << str << std::endl;

    // Splitting string and dumping elements in a vector
    auto splitStrings = split(str, ' ');
    for (const auto& splitString : splitStrings) {
        std::cout << splitString << " ";
    }
    std::cout << std::endl;

    // Parsing a simple string
    std::string numberStr = "123 bc";
    int number;
    {
        std::stringstream ss(numberStr);
        ss >> number;  // ignores spaces and other characters after parsing the number
        std::cout << "Parsed number: " << number << std::endl;
    }

    return 0;
}