//
// Created by 강경완 on 2017. 1. 2..
//

#include <iostream>

using namespace std;

int main() {

    int N;
    int min = 99999;
    cin >> N;


    for (int b5 = 0; N - 2 * b5 > 0; b5++) {
        if (min > (N - 2 * b5) / 3 && (N - 2 * b5)%3 == 0) {
            int check = (N - 2 * b5) / 3;
            if(check >= b5)
                min = check;
        }
    }

    if (min == 99999)
        cout << -1 << endl;
    else
        cout << min << endl;
}