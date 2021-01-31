#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
    string low="abcdefghijklmnopqrstuvwxyz";
    string upper="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string encrypted="";
    if (k>low.size()) k=k%low.size();
    for (int x=0; x<=s.size()-1; x++){
        if (isupper(s[x])){
            int i = upper.find(s[x]);
            if (i+k>low.size()-1){
                i=(i+k)-upper.size();
            } else{
                i+=k;
            }
            if (0<=i) {
                encrypted=encrypted+upper[i];
            } else{
                encrypted=encrypted+s[x];
            }

        } else if (islower(s[x])) {
            int i = low.find(s[x]);
            if (i+k>low.size()-1){
                i=(i+k)-upper.size();
            } else{
                i+=k;
            }
            if (0 <= i) {
                encrypted = encrypted + low[i];
            }
        } else{
            encrypted = encrypted + s[x];
        }
    }
    return encrypted;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    getline(cin, s);
    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string result = caesarCipher(s, k);
    cout<<result<<endl;
    return 0;
}
