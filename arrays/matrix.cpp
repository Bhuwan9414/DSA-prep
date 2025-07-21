#include<iostream>
#include<vector>
using namespace std;


// zero matrix

int zeromatrix(int arr[][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << 0 << " ";
        }
        cout << endl;
    }

}

// unit or diagonal matrix

void diagonalmatrix(int arr[][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                cout << 1 << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}


// uppertraingular matrix
void lowertri(int arr[][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>j){
                cout << 0 << " ";
            }
            else{
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
}



// lowertriangular matrix
void uppertri(int arr[][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i<j){
                cout << 0 << " ";
            }
            else{
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
}


// tri-diagonal matrix

void tridiag(int arr[][5]){

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j || i==j+1 || i==j-1){
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = 0;
            }
        }

    }

}


int main(){

    int arr[5][5];

    // cout << "zero matrix" << endl;
    // zeromatrix(arr);

    //  cout << endl;

    // cout << "unit matrix" << endl;
    // diagonalmatrix(arr);

    // cout << "lower triangular matrix" << endl;
    // lowertri(arr);

    // cout << "upper triangukar matrix" << endl;
    // uppertri(arr);

    cout << "tri-diagonal matrix" << endl;
    tridiag(arr);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}