#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    string num=to_string(n);
    int c=0;
    for (int x=0; x<=num.size()-1; x++){
        int i=num[x]-48;
        if (i != 0) {
            if (n % i == 0) {
                c++;
            }
        }
    }
    return c;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        int result = findDigits(n);
        cout<<result<<endl;
    }
    return 0;
}
