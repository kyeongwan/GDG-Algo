//
// Created by 강경완 on 2017. 1. 25..
//

#include "iostream"
#include "cstring"

using namespace std;

int main(){

    char num[1001];
    int calc = 0;
    while(true) {
        scanf("%s", num);
        if(num[0] == '0')
            break;
    
        int size = strlen(num);

        while(size > 1){
            calc = 0;
            int i;
            for(i=0; i< strlen(num); i++)
                calc += num[i] - '0';
            num[i] = 0;
            i=0;
            while(calc){
                num[i] = (calc % 10) + '0';
                calc /= 10;
                i++;
            }
            num[i] = 0;

            size = strlen(num);
        }
        printf("%d\n", num[0] - '0');
    }

}