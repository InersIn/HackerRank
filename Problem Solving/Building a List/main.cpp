#include <iostream>
#include <limits>
#include <vector>

using namespace std;

// Complete the solve function below.
void solve(int c,string s){

}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int x=0; x<=t-1; x++){
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string s;
        getline(cin,s);
        solve(n,s);
    }
    return 0;
}