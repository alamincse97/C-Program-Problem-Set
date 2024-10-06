#include<iostream>

using namespace std;

int main(){
    int number, temp, r, sum = 0;
    cin >> number;

    temp = number;

    while(temp != 0){
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;
    }
    cout << sum << endl;

    return 0;
}