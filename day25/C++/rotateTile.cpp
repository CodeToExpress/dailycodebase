/**
 * @author : Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @handle : razdeep
 * @date   : Feb 17, 2019
 */
#include <bits/stdc++.h>
std::vector<std::vector<int>> rotate(std::vector<std::vector<int>> &two_D_array)
{
    std::vector<std::vector<int>> result(two_D_array.size());
    for(int i=0; i<two_D_array.size();i++)
    {
        std::vector<int> this_array(two_D_array.size(), 0);
        result[i] = this_array;
    }
    int rj = two_D_array.size() - 1, ri = 0;
    for (int i = 0; i < two_D_array.size(); i++)
    {
        for (int j = 0; j < two_D_array[i].size(); j++)
        {
            result[ri++][rj] = two_D_array[i][j];
        }
        rj--;
        ri = 0;
    }
    return result;
}
int main(int argc, char **argv)
{
    int n;
    std::cout << "Enter the value of n ";
    std::cin >> n;
    std::vector<std::vector<int>> two_D_array(n);
    for (int i = 0; i < n; i++)
    {
        std::vector<int> this_array(n, 0);
        // std::vector<int> this_array = new std::vector<int>(n);
        for (int j = 0; j < n; j++)
        {
            std::cin >> this_array[j];
        }
        two_D_array[i] = this_array;
    }
    std::cout << "Original Matrix is..." << std::endl;
    for (int i = 0; i < two_D_array.size(); i++)
    {
        for (int j = 0; j < two_D_array[i].size(); j++)
        {
            std::cout << two_D_array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::vector<std::vector<int>> rotated_2d_array = rotate(two_D_array);
    std::cout << "Rotated matrix is" << std::endl;
    for (int i = 0; i < two_D_array.size(); i++)
    {
        for (int j = 0; j < two_D_array[i].size(); j++)
        {
            std::cout << rotated_2d_array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}