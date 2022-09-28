# include "easyfind.hpp"

int main()
{
    const int N = 5;
    int a[N] = {1, 4, 7, 3};
    std::vector<int> vec(a, a + N);
    easyfind(vec, 7);
}