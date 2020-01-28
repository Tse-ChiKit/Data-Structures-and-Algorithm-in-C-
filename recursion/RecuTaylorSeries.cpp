#include <iostream>
using namespace std;

double tlSeries(int, int);


int main(){
    
    double result = tlSeries(1,3);
    cout << fixed << result<< endl;
    return 0;
} 


double tlSeries(int x, int n){

    static double p = 1 , f = 1;
    double r;
    if (n == 0){
        return 1;
    }
    else
    {
        r = tlSeries(x, n - 1);
        p = p * x;
        f = f * n;

        return r + p/f;
    }
}