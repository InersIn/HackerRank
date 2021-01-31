#include <bits/stdc++.h>
using namespace std;

int main() {
    int k1,v1,k2,v2;
    cin>>k1>>v1>>k2>>v2;
    int n1=k1;
    int n2=k2;
    string status="NO";
    for (int x=0; x<=10001; x++){
        if (n1==n2){
            status="YES";
            break;
        }
        n1+=v1;
        n2+=v2;
    }
    cout<<status<<endl;
    return 0;
}
