// // native O(n^2) nested for loop 
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> getleader(vector<int> arr)
// {
//     vector<int> result; 
//     int n = arr.size();

//     for (int i = 0; i < n; i++)
//     {
//         bool isLeader = true;

//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 isLeader = false;
//                 break;
//             }
//         }

//         if (isLeader)
//             result.push_back(arr[i]);
//     }

//     return result;
// }


// int main()
// {
//     vector<int> arr = {1,2,5,3,1,9,4,2};
//     vector<int> result = getleader(arr);
//     cout<<" nested loop finding the leader ";
//     for(int x : result)
//     {
//         cout<< x<< " ";
//     }
// }

//using suffix maximum O(n)
#include<iostream> 
#include<vector> 
using namespace std; 

vector<int> leader(vector<int> arr)
{
    vector<int> result; 
    int n = arr.size(); 
    int maxright = arr[n-1];
    result.push_back(maxright); 

    for(int i = n-2; i>=0; i--)
    {
        arr[i]>maxright; 
        maxright = arr[i]; 
        result.push_back(maxright); 

    }
    return result; 
}

int main()
{
    vector<int> arr = {16,17,4,3,5,2}; 
    vector<int> res = leader(arr);

    for(int x: res)
    {
        cout<< x << " ";
    }
}