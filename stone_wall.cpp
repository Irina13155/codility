#include <vector>
#include <stack>
#include <iostream>

int solution(const std::vector<int> &H) {
    std::stack<int> heights;
    int blocks = 0;

    for (int h: H) {
        if (heights.empty()) {
            heights.push(h);
        } 
        else if (h == heights.top()) {}
        else if (h > heights.top()) {
            heights.push(h);
        } else {
            while ( heights.size() && (heights.top() > h)) {
                blocks++;
                heights.pop();
            }
            if (heights.empty() || h != heights.top()) {heights.push(h);}
        }
    }
    blocks += heights.size();
    return blocks;
}

int main () {
    std::vector H = {8, 8, 5, 7, 9, 8, 7, 4, 8};
    int result = solution(H);
    std::cout <<"Amount of stones: "<< result << std::endl;
    return 0;
}