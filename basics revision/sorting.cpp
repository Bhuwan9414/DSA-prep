#include <iostream>
// #include<vector>
using namespace std;

// selection sort :

// int selectionsort(int arr[], int n){

//     for(int i=0 ; i<=n-2 ; i++){
//         int min = i;
//         for(int j=i ; j<=n-1 ; j++){
//             if(arr[j] < arr[min]){
//                 min = j;
//             }
//         }
//         int temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }

// }

// int bubblesort(int arr[], int n)
// {

//     for (int i = n - 1; i >= 0; i--)
//     {
//         int didswap = 0;
//         for (int j = 0; j <= i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] =  temp;
//                 didswap = 1;
//             }
//         }
//         if(didswap == 0){
//             break;
//         }
//         cout << "runs" << endl;
//     }
// }


// love babbar :
// int insertionsort(int arr[], int n){

//     for(int i=1;i<n;i++){
//         int temp = arr[i];
//         int j=i-1;
//         for(;j>=0;j--){
//             if(arr[j] > temp){
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }

// }

int insertionsort(int arr[], int n){

    for(int i=0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

}

int main()
{
    int arr[5] = {5,4,3,2,1};
    int n = 5;

    //    selectionsort(arr,n);

    // bubblesort(arr, n);

    insertionsort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}