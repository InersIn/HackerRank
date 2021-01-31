#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> solver(vector<vector<int>> n, int a, int b, int s, int t){
    vector<int> nm;
    int j=0;
    for (auto x: n){
        int count=0;
        int l = a;
        if (j) {
            l=b;
        }
        vector<int> ab;
        for (auto i: x){
            int k=l+i;
            if (k>=s && k<=t){
                ab.push_back(k);
            }
        }
        nm.push_back(ab.size());
        j++;
    }
    return nm;
}

int main(){
    int s,t;
    cin>>s>>t;

    int a,b;
    cin>>a>>b;

    int l[2];
    cin>>l[0]>>l[1];
    vector<vector<int>> ab;
    for (auto x: l){
        vector<int> k;
        for (int _=0; _<=x-1; _++){
            int i;
            cin>>i;
            k.push_back(i);
        }
        ab.push_back(k);
    }
    vector<int> n=solver(ab, a, b, s, t);
    for (auto x: n){
        cout<<x<<endl;
    }
    return 0;
}
