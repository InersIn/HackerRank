#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> solver(vector<int> n){
    vector<int> s;
    for (auto x: n){
        if (x >= 38){
            int k=5-(x%5);
            if (k<3){
                s.push_back(x+k);
            } else{
                s.push_back(x);
            }
        } else{
            s.push_back(x);
        }
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    vector<int> i;
    for (int x=0; x<=n-1;x++){
        int k;
        cin>>k;
        i.push_back(k);
    }
    vector<int> s=solver(i);
    for (auto x: s){
        cout<<x<<endl;
    }

    return 0;
}

