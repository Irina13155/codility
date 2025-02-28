// https://app.codility.com/programmers/lessons/6-sorting/max_product_of_three/
// 
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected time complexity: O(N)
//
#include <algorithm>
#include <cmath>

int solution(vector<int> &A) {
    std::sort(A.begin(), A.end());
    int product_end = A.end()[-1]*A.end()[-2]*A.end()[-3];
    int product_begin = A.end()[-1]*A.begin()[0]*A.begin()[1];
    if (product_begin > product_end) {
        return product_begin;
    }
    return product_end;
}