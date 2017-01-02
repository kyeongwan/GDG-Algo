//
// Created by 강경완 on 2016. 11. 10..
//

#include <iostream>
#include <math.h>

using namespace std;

bool palindrom(int s, int e);
bool sosu[1000000];
int data[1000];
int main(){



    int n;
    scanf("%d", &n);

    int k = 0;
    for(int i=2; i<1000000; i++){
        for(int j = 2; j<1000000; j++){
            if(i*j> 1000000)
                break;
            sosu[k] = true;
        }
    }

    while(true){
        n++;
        if(sosu[n] == true)
            continue;
        int j = n;
        int i = 0;
        while( j > 0 )
        {
            data[i++] = j % 10;
            j /= 10;
        }

        if(palindrom(0, i-1)) {
            printf("%d", n);
            break;
        }

    }
}

bool palindrom(int s, int e) {
    if (s >= e)
        return true;
    if (data[s] == data[e])
        return palindrom(s + 1, e - 1);
    return false;
}