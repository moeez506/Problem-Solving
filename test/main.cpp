#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]={1, 2, 1, 3, 2};
    int m=2;
    int d=3;
    int count=0;

    for (int i = 0; i < 5-m; ++i) {
        int temp =0;
        for (int j = 0; j < m; ++j) {
            temp = temp+ arr[i+j];
        }
        if(temp==d){
            count++;
        }

//
    }
    cout << count;
    return 0;
}
