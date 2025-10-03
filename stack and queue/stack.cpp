#include <iostream>
#include <stack>
using namespace std;

void push(int st[], int& top, int x)
{
    top = top + 1;
    st[top] = x;
}

void pop(int st[], int& top){

    top = top - 1;

}

int topy(int st[], int& top){

    

    return st[top];

}

int sizee(int st[], int &top){

    return top + 1;

}

// reverse a string using stack

void reverse(){

    

}

int main()
{

    int st[10];
    int top = -1;

    push(st, top, 1);
    push(st, top, 2);
    push(st, top, 3);

    pop(st, top);

    int ans = topy(st, top);
    cout << "top is " << ans << endl;


    int res = sizee(st, top);
    cout << "size is " << res << endl;

    for(int i=0;i<=top;i++){
        cout << st[i] << " ";
    }

}

//  https://plex.it/referrals/VD9A0ZNW