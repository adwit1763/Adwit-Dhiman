#include<iostream>
using namespace std;

// int add(int n);
int add(int n,int s);

int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    int s = add(n,0);
    cout << "Sum =  " << s;

    return 0;
}

int add(int n,int s) {
    if(n < 1){
        return s;
    }
    else {
        s= s+n%10;
        n=n/10;   

    }
     add(n,s);
}
