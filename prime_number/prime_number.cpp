#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Enter an Integer: ";
    int n;
    cin >> n;

    int count = 0;

    for(int i=2; i<n; i++){
        if(n%i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        cout << "Prime Number" << endl;
    }
    else
        cout << "Not a Prime Number" << endl;
    
    return 0;
}