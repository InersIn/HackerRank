#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    string result;
    string format="hackerrank";
    int n=0;
    for (int x=0; x<=s.size()-1; x++){
        if (s[x] == format[n]){
            n++;
        }
    }
    if (n==(format.size())){
        result="YES";
    } else{
        result="NO";
    }
    return result;
}

int main(){
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);
        string result = hackerrankInString(s);
        cout<<result<<endl;
    }
    return 0;
}