#include <iostream>
#include <vector>
using namespace std;

void findIntersection(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> ans;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
            }
        }
    }

    for (auto elem : ans)
    {
        cout << elem << "   ";
    }
}

int main()
{
    int arr1[5] = {1, 43, 54, 23, 99,88};
    int arr2[6] = {34, 54, 232, 23, 1, 43};
    findIntersection(arr1, arr2, 5, 6);
}
