// implementing a 2D array :

// #include<iostream>
// using namespace std;

// int main(){

//     // initialization of the array
//     int arr[2][2];
//     int rows = 2, cols = 2;

//     // taking input of the 2d array
//     cout << "enter the values" << endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin >> arr[i][j];
//         }
//     }

//     // printing the array
//     for(int i=0;i<2;i++){
        
//         for(int j=0;j<2;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


// print the sum of all the rows in a 2d  array :

// #include<iostream>
// using namespace std;

// // we cant keep both the brackets empty when passing a 2d array
// void rowsum(int arr[][2], int rows, int cols){

//     for(int i=0;i<rows;i++){
//         int sum = 0;
//         for(int j=0;j<cols;j++){
//             sum = sum + arr[j][i];
//         }
//         cout << sum << endl;
//     }

// }

// int main(){

//     int arr[2][2] = {{1,2}, {3,4}};
//     int rows = 2, cols = 2;
   
//     rowsum(arr,rows,cols);
// }


// find target element in a 2d array :

// #include<iostream>
// using namespace std;

// bool findkey(int arr[][2], int row, int cols, int target){

//     for(int i=0;i<row;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }


// int main(){

//     int arr[2][2] = {{1,2}, {3,4}};
//     int row = 2, cols = 2;

//     int target;
//     cout << "enter target element" << endl;
//     cin >> target;

//     if(findkey(arr,row,cols,target)){
//         cout << "element is present" << endl;
//     }
//     else{
//         cout << "element not present" << endl;
//     }
   
// }

 
// find max and min element in a 2d array :

// #include<iostream>
// #include<limits.h>
// using namespace std;

// int maxi(int arr[][2], int row, int cols){

//     // int max = INT_MIN;
//     int min = INT_MAX;

//     for(int i=0;i<row;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j] < min){
//                 min = arr[i][j];
//             }
//         }
//     }
//     return min;

// }

// int main(){

//     int arr[2][2] = {{1,50}, {3,0}};
//     int row = 2, cols = 2;


//    cout << maxi(arr, row, cols);
   
// }


// #include<iostream>
// using namespace std;

// void transpose(int arr[][2], int row, int cols, int transposearr[][2]){

//     for(int i=0;i<row;i++){
//         for(int j=0;j<cols;j++){
//         transposearr[j][i] = arr[i][j];
//         }
//     }

// }

// int main(){

//     int arr[2][2] = {{1,50}, {3,0}};
//     int row = 2, cols = 2;
//     int transposearr[2][2];

//     transpose(arr, row, cols, transposearr);

//     for(int i=0;i<row;i++){
//         for(int j=0;j<cols;j++){
//             cout << transposearr[i][j] << " ";
//         }
//         cout << endl;
//     }
   
// }




// 2-D vectors :

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int row = 2, col = 2;
    vector <vector<int> > arr(row, vector <int> (col, 0));
    
}