#include <iostream>
#include <vector>
#include <numeric>
#include <cassert>

int sum_list(const std::vector<int>& nums) {
    return std::accumulate(nums.begin(), nums.end(), 0);
}

int main() {
    std::vector<int> data = {1, 2, 3};
    assert(sum_list(data) == 6); // Тест: 1+2+3 должно быть 6
    std::cout << "Test passed!" << std::endl;
    return 0;
}
