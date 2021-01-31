#include <iostream>
#include <vector>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> c(2);
    for (int i=0; i<=3; i++){
        if (a[i] < b[i]){
//            cout <<"a < b: "<<a[i]<<" < "<<b[i]<<endl;
            c[1]+=1;
        } else if (b[i] < a[i]){
//            cout <<"b < a: "<<b[i]<<" < "<<a[i]<<endl;
            c[0]+=1;
        }
    }
    return c;
}

int main()
{
    string a_temp_temp;
    getline(cin, a_temp_temp);
    vector<string> a_temp = split(rtrim(a_temp_temp));
    vector<int> a(3);
    for (int i = 0; i < 3; i++) {
        int a_item = stoi(a_temp[i]);
        a[i] = a_item;
    }
    string b_temp_temp;
    getline(cin, b_temp_temp);
    vector<string> b_temp = split(rtrim(b_temp_temp));
    vector<int> b(3);
    for (int i = 0; i < 3; i++) {
        int b_item = stoi(b_temp[i]);
        b[i] = b_item;
    }

    vector<int> result = compareTriplets(a, b);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << " ";
        }
    }
    return 0;
}

string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(),find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),s.end());
    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;
    string::size_type start = 0;
    string::size_type end = 0;
    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    tokens.push_back(str.substr(start));
    return tokens;
}