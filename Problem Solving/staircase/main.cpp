#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int c=0;
    for (int i=0; i<=n-1; i++){
        for (int _=1; _<=n-(c+1);_++){
            cout<<" ";
        }
        for (int _=0; _<=c;_++){
            cout<<"#";
        }
        cout<<endl;
        c++;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    staircase(n);
    return 0;
}