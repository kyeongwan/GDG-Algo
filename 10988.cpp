#include <iostream>
#include <string.h>

using namespace std;

bool palindrom(char *str, int s, int e);
int main() {

    char str[101];
    scanf("%s", &str);

    cout << palindrom(str, 0, strlen(str) - 1) << endl;
    return 0;
}

bool palindrom(char *str, int s, int e){
    if(s >= e)
        return true;
    if(str[s] == str[e])
        return palindrom(str, s + 1, e - 1);
    return false;
}