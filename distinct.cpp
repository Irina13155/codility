#include <vector>
#include <iostream>
#include <set>

int solution(std::vector<int> &A) {
    std::set<int> set(begin(A), end(A));

    return set.size();
}

int main() {
    return 0;
}
 