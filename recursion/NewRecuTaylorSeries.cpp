#include <iostream>
using namespace std;

double newTLSeries(int, int);
double newTLSeriesIter(int, int);

int main(){
    
    double result = newTLSeries(1,4);
    cout << fixed << result << endl;
    double resultinter = newTLSeriesIter(1,4);
    cout << fixed << resultinter << endl;

    return 0;
} 


double newTLSeries(int x, int n){

    static double s = 1;

    if(n == 0 ){
        return s;
    }

    s = s * x / n + 1;
    
    return newTLSeries(x, n - 1);
}

double newTLSeriesIter(int x, int n){
    double s = 1;

    while(n > 0) {
        s = s * x / n + 1;
        n--;
    }

    return s;
} 