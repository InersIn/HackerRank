#include <iostream>
#include <vector>
using namespace std;

vector<string> split_string(string);

int simpleArraySum(vector<int> ar) {
    int c=0;
    for (int x=0; x<= ar.size()-1; x++){
        c+=ar[x];
    }
    return c;
}

int main() {
    int t;
    cin>>t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);
    vector<string> st = split_string(s);
    vector<int> ar(t);

    for (int x=0; x<= t-1; x++){
        int n=stoi(st[x]);
        ar[x]=n;
    }
    int result = simpleArraySum(ar);
    cout << result<<endl;
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });
    input_string.erase(new_end, input_string.end());
    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }
    vector<string> splits;
    char delimiter = ' ';
    size_t i = 0;
    size_t pos = input_string.find(delimiter);
    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));
        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }
    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));
    return splits;
}