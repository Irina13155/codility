// https://app.codility.com/programmers/lessons/6-sorting/distinct/
// 
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected time complexity: O(N*log(N))
//

#include <vector>
#include <iostream>
#include <set>

int solution(std::vector<int> &A) {
    std::set<int> set(begin(A), end(A));
    return set.size();
}
 
