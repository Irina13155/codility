#include <algorithm>
#include <iostream>
#include <vector>
#include <limits>

int solution(const std::vector<int>& squares) {
    std::cout<<std::endl;
    std::vector<int> max_ways(1, squares[0]);
    max_ways.reserve(squares.size());
    for (size_t i = 1; i < squares.size(); i++) {
        int max_way = std::numeric_limits<int>::lowest();
        for (int dice = 1; dice <= 6; dice++) {
            if (dice <= i) {
                int way = max_ways[max_ways.size() - dice] + squares[i];
                max_way = std::max(max_way, way);
            }
        }
        std::cout << " " << max_way;
        max_ways.push_back(max_way);
    }
    std::cout<<std::endl;

    return max_ways[max_ways.size() - 1];
}

int main() {
    std::vector<int> example = {1, -2, 0, 9, -1, -2};
    std::cout << "solution: " << solution(example) << std::endl;
    return 0;
}