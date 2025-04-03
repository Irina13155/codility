// https://app.codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected time complexity: O(N)

#include <vector>
#include <iostream>

int solution(const std::string& string) {
    if (string.empty()) {
        return 0;
    }
    size_t i = 0;
    int lenght_match = 0;
    while (i <= string.size()/2)
    {
        std::cout<< "begin: " << string[i] << std::endl;
        std::cout<< "end: " << string.end()[-i-1] << std::endl;
        if (string[i] != string.end()[-i-1])
        {
            return -1;
        } 
        i++;
        lenght_match ++;
    }
    return lenght_match - 1;
};

int main() {
    std::string example = "racecar";
    std::cout << solution(example) << std::endl;
    return 0;
}