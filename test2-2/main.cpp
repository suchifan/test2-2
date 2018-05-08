//
//  main.cpp
//  test2-2
//
//  Created by suchao on 5/8/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;
int f(int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input n:\n";
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

int f(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    if(n > 2){
        return (n-1)*(f(n-1) + f(n-2));
    }
    
    return 0;
}
