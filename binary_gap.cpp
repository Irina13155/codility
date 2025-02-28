#include <vector>
#include <iostream>

int solution(int N) {
    int max_gap = 0;
    int current_gap = 0;
    bool counting = false;
    while (N/2>=0) {
       int remain = N%2;
       if (remain == 1) 
       {
            if (counting && max_gap < current_gap)
            {
                max_gap = current_gap;
            }
            current_gap = 0;
            counting = true;
        }
       else if (counting)
       {
            current_gap++;
       }
        if ( N == 0) {
            break;
        }
        N = N/2;
    }

    return max_gap;
}

int main () 
{
    std::cout<<solution(561892)<<std::endl;
    return 0;
}