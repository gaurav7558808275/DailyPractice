#include<iostream>
#include<vector>

using namespace std;

int GetNumberofOnes(vector<int> &arr)
{
    int value = 0;
    int count = 0;

    for (int i = 0 ; i < arr.size() ; i++)
    {
        if(arr[i] == 1)
        {
            count++;
            value = max(value,count);
        }
        else if(arr[i] == 0)
        {
            count = 0;
        }
        else
        {
            value = -1;
            break;
        }

    }

    return value;
}


// maximum number of 1s in the array
int main()
{
    vector<int> arr = {1,0,1,1,1,1,0,0,1};

    cout << GetNumberofOnes(arr) << endl;

}