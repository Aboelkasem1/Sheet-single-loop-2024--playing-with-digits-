//========================================================\|
//===============   Create by Aboelkasem   ===============\|
//========================================================\|

#include <bits/stdc++.h>
using namespace std;

int main () {
    int x, cx, y = 0;

    cin >> x;
    cx = x;

    while (cx != 0)
    {
        y *= 10;
        y += cx % 10;
        cx /= 10;
    }

    if (x == y){
        cout << "palindrome" <<endl;
    }
    else{
        cout << "not palindrome" <<endl;
    }
}