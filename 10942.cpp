#include <iostream>
#include <string.h>

using namespace std;

int palindrom(int s, int e);

int dp[2001][2001];
int aryInt[2001];
int main() {

    int len;
    int n;

    scanf("%d", &len);



    for(int i=0; i<len; i++){
        dp[i][i] = 2;
    }

    for (int i = 0; i < len; i++) {
        scanf("%d", &aryInt[i]);
    }

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int s, e;
        scanf("%d %d", &s, &e);
        if(s>e && dp[e][s] == 0){
            dp[e][s] = palindrom(s - 1, e - 1);
        }else if(dp[s][e] == 0){
            dp[s][e] = palindrom(s - 1, e - 1);
        }
        printf("%d\n", dp[s][e] -1);
    }

    return 0;
}

int palindrom(int s, int e) {
    if (s >= e)
        return 2;
    if (aryInt[s] == aryInt[e])
        return palindrom(s + 1, e - 1);
    return 1;
}


int Palindrome(char* pArr, int n) {
    int i;
    int result;
    int last;
    last=n-1;
    for(i=0; i<n/2; i++) {
        if(pArr[i]==pArr[last-i]) {
            result=1;
        }
        else {
            result=2;
            break;
        }
    }
    return result;
}
