#include <iostream>
#include <vector>
#include <algorithm>

int GetSecondlargest(std::vector<int> &a)
{
    sort(a.begin() , a.end());
    int size = a.size();
    if(size > 2)
        return a[size-2];
    else
        return -1;
}

int GetThirdLargest(std::vector<int> &a)
{
    sort(a.begin() , a.end());
    int size = a.size();
    if(size > 3)
        return a[size-3];
    else
        return -1;
}

int ThreeGreatcandidates(int first , int second , int third)
{
    return (first * second * third);
}
int main()
{

    std::vector<int> arr = {1,2,6,3,4};
    std::cout <<GetSecondlargest(arr) << std::endl;;
    std::cout <<GetThirdLargest(arr) << std::endl;
    return 0;

}