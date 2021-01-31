#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
void timeConversion(string s) {
    string code=s.substr(s.size()-2, s.size());
    int hour=stoi(s.substr(0, 2));
    int minute=stoi(s.substr(3, 2));
    int second=stoi(s.substr(6, 2));
    if (code == "PM"){
        if (hour==12){
        }else {
            hour = hour + 12;
        }
        cout<<std::setw(2) << std::setfill('0')<<hour<<":"<<std::setw(2) << std::setfill('0')<<minute<<":"<<std::setw(2) << std::setfill('0')<<second<<endl;
    } else{
        if (hour==12){
            if (minute >= 1){
                hour-=12;
            } else if (second >= 1){
                hour-=12;
            } else{
                hour-=12;
            }
        }else {
        }
        cout<<std::setw(2) << std::setfill('0')<<hour<<":"<<std::setw(2) << std::setfill('0')<<minute<<":"<<std::setw(2) << std::setfill('0')<<second<<endl;
    }
}

int main() {
    string s;
    getline(cin, s);
    timeConversion(s);
    return 0;
}
