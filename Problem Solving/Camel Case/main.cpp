#include <bits/stdc++.h>
using namespace std;

int camelcase(string s){
    int n=1;
    for (auto x: s){
        if (+x >= 65 && +x <= 90){
            n++;
        }
    }
    return n;
}

int main() {
    string s;
    getline(cin, s);

    int result = camelcase(s);
    cout<<result<<endl;
    return 0;
}
