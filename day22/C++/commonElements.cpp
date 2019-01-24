/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 18/01/2019
 */
#include <bits/stdc++.h>

int main()
{
    std::vector<int> a = {1, 2, 3, 4, 5, 6, 8, 8, 7};
    std::vector<int> b = {4, 2, 9, 1, 8};
    std::sort(a.begin(), a.end());
    auto last_ptr = std::unique(a.begin(), a.end());
    a.resize(std::distance(a.begin(), last_ptr));

    for (auto i : a)
    {
        if (std::find(b.begin(), b.end(), i) != b.end())
            std::cout << i << std::endl;
    }

    return 0;
}