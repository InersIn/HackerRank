#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    double m=0;
    double p=0;
    double z=0;
    for (int x=0; x<=arr.size()-1; x++){
        if (arr[x] <= -1){
            m+=1;
        } else if (arr[x] >= 1){
            p+=1;
        }else {
            z+=1;
        }
    }
    double pp=p/arr.size();
    double mm=m/arr.size();
    double zz=z/arr.size();

    cout<<setprecision(arr.size())<<fixed<<pp<<endl;
    cout<<setprecision(arr.size())<<fixed<<mm<<endl;
    cout<<setprecision(arr.size())<<fixed<<zz<<endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string arr_temp_temp;
    getline(cin, arr_temp_temp);
    vector<string> arr_temp = split_string(arr_temp_temp);
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);
        arr[i] = arr_item;
    }
    plusMinus(arr);
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