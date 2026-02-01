// // simple iterative on array

// #include<iostream>
// using namespace std;

// int main()
// {
//     cout<< "printing iteratively";
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     for(int i = 0;i<10;i++) // i+=2
//     {
//         cout<< arr[i] << " ";
//         i++;
//     }
//     return 0;
// }

// //iteration on vector

// #include<iostream>
// #include<vector>

// using namespace std;
// vector<int> getalternative(vector<int> arr)
// {vector<int> result;
// for(int i = 0; i< arr.size();i+=2)
// { result.push_back(arr[i]);}
// return result;}

// int main()
// {
//     vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
//     vector<int> result = getalternative(arr);

//     for(int x : result)
//     cout<< x << " " ;
// }

// // using recursion 
// #include<iostream>
// #include<vector>

// using namespace std;

// void getAlternative(vector<int> arr, int index , vector<int> result)
// { if(index < arr.size())
// {
//     result.push_back(arr[index];
//     getAlternative(arr,index+2,result);)
// }  }

// vector<int> getAlternative(vector<int> arr)
// {
//     vector<int> result;
//     getAlternative(arr,0,result);
//     return result;
// }

// int main()
// {
//     vector<int> arr = {1,2,3,4,5,6,7,8,9};
//     vector<int> result = getAlternative(arr);

//     for(int x : result)
//     {
//         cout<<x<< " ";
//     }
//     return 0;
// }


