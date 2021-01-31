#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    string format="SOS";
    int miss=0;
    if (s.size()%format.size()==2){
        miss++;
    } else if (s.size()%format.size()==1){
        miss+=2;
    }
    int n=0;
    for (int x=0; x<=s.size()-1; x++){
        if (n==3) n=0;
        if (s[x] != format[n]){
            miss++;
        }
        n++;
    }
    return miss;
}
int main() {
    string s;
    getline(cin, s);
    int result = marsExploration(s);
    cout<<result<<endl;
    return 0;
}