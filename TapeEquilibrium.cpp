#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>
#include <algorithm>

int solution (const std::vector<int>& A) {
    if(A.size() == 2) {
        return std::abs(A[0]-A[1]);
    }
    auto sum_rights = std::reduce(A.begin(), A.end());
    int sum_left = 0;
    int min_diff = std::numeric_limits<int>::max();
    for (const int& n: A) {
        sum_left += n;
        sum_rights -= n;
        min_diff = std::min(std::abs(sum_rights - sum_left), min_diff);
    }
    return min_diff;
}

int main() {

    std::vector<int> example = {-800, 400};
    std::cout << solution(example) << std::endl;
    return 0;
}
