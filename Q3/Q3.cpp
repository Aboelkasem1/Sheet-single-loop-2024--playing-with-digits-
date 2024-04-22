//========================================================\|
//===============   Create by Aboelkasem   ===============\|
//========================================================\|

#include <bits/stdc++.h>
using namespace std;

int main () {
    int sum = 0, x, cx;

    cin >> x;
    cx = x;

    while (cx != 0){
        sum += pow((cx % 10), 2);
        cx /= 10;
    }

    cout << "sum square = " << sum << endl;
}