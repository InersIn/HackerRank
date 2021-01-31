#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int alpha=97;
    int n=0;
    while (alpha<=122){
        for (int x=0; x<=s.size()-1; x++){
            if (+s[x] == alpha){
                n++;
                break;
            }
        }
        alpha++;
    }
    string result;
    if (n==26){
        result="pangram";
    } else{
        result="not pangram";
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);
    string result = pangrams(s);
    cout<<result<<endl;
    return 0;
}