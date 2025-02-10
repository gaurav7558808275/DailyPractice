#include<iostream>
#include<vector>

using namespace std;


void ZeroesToend(vector<int> &arr)
{
    int count = 0;
    int i = 0;
    int NonZeroCount = 0;
    int numzero = 0;

    int size = arr.size();
    for(i = 0; i < size ; i++)
    {
        if(arr[i] != 0)
        {
            arr[count++] = arr[i];
            NonZeroCount++;

        }
    }
    while(count < size)
    {
        arr[count++] = 0;
    }
    for(i = 0; i < size ; i++)
    {
        cout << arr[i] << endl;
    }

}

int main()
{
    vector<int> arr = {1,2,5,4,0,9,7,0,0,5,3,0};
    ZeroesToend(arr);
    return 0;

}