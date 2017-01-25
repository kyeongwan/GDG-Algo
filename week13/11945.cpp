//
// Created by 강경완 on 2017. 1. 25..
//

#include "iostream"

using namespace std;

int main(){

    int n, m;
    scanf("%d %d\n", &n, &m);

    for(int i=0; i<n; i++){
        char data[m];
        for(int j=0; j<m; j++){
            scanf("%c", &data[j]);
        }
        getchar();
        for(int j=m-1; j>=0; j--){
            printf("%c", data[j]);
        }
        printf("\n");
    }

}