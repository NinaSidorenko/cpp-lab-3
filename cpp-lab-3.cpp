#include <iostream>

using namespace std;

double min (double a, double b){
    if (a < b){
        return a;
    }
    return b;
}

double combination (double cups [], int i, int n, double masha, double petya){
    if (i == n){
        return abs (masha - petya);
    }
    double var1 = combination (cups, i + 1, n, masha + cups[i], petya);
    double var2 = combination (cups,  i + 1, n, masha, petya + cups[i]);
    return min (var1, var2);
}

int main (){
    int n, i;
    cin >> n;
    double cups [n];
    for (i = 0; i < n; i++ ){
        cin >> cups[i];
    }
    cout << combination (cups, 0, n, 0, 0);
}