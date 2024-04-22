//========================================================\|
//===============   Create by Aboelkasem   ===============\|
//========================================================\|

#include <bits/stdc++.h>
using namespace std;

int main () {
    int sum1 = 0, sum2 = 0, x, y;

    cin >> x >> y;
 
    while (x != 0){
        sum1 += x % 10;
        x /= 10;
    }
    while (y != 0){
        sum2 += y % 10;
        y /= 10;
    }

    if (sum1 > sum2) {
        cout << "x greater y\n";
    }
    else if (sum1 < sum2) {
        cout << "x less than y\n";
    }
    else{
        cout << "x equal y\n";
    }
}