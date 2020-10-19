//
//  main.cpp
//  Fizz Buzz
//
//  Created by Vin Cain on 10/16/20.
//

#include <iostream>
using namespace std;
int main() {
    
    for (int i=0; i <= 100; i++) {
        if(i%3==0 && i%5==0){
            if(i==0){
                continue;
            }
            cout << "FizzBuzz\n";
            continue;;
        }
        if(i%3==0){
            cout << "Fizz\n";
            continue;
        }
        if(i%5==0){
            cout << "Buzz\n";
            continue;
        }
        
        cout << i << "\n";
        
    }
    return 0;
}
