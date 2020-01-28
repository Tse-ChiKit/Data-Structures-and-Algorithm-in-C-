#include <iostream>
using namespace std;

int sum(int);


int main(){
    
    int result = sum(4);
    cout << result;
    return 0;
} 


int sum(int n){
    if (n == 1){
        return 1;
    }
    else
    {
        return sum(n - 1) + n;
    }
}