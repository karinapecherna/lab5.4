
#include <iostream>
#include <cmath>
using namespace std;

double S0(const int N) {
    double s = 0;
    for (int k = 1; k <= N; k++) {
        s += (1 + sqrt(1 + pow(k, 2))) / pow(k, 2);
    }
    return s;
}

double S1(const int N, int k = 1) {
    if (k > N) {
        return 0;
    }
    else {
        return (1 + sqrt(1 + pow(k, 2))) / pow(k, 2) + S1(N, k + 1);
    }
}

double S2(const int N, int k = 1) {
    if (k > N) {
        return 0;
    }
    else {
        return (1 + sqrt(1 + pow(k, 2))) / pow(k, 2) + S2(N, k + 1);
    }
}

double S3(const int N, double t = 0, int k = 1) {
    t += (1 + sqrt(1 + pow(k, 2))) / pow(k, 2);
    if (k >= N) {
        return t;
    }
    else {
        return S3(N, t, k + 1);
    }
}

double S4(const int N, double t = 0, int k = 1) {
    if (k > N) {
        return t;
    }
    else {
        return S4(N, t + (1 + sqrt(1 + pow(k, 2))) / pow(k, 2), k + 1);
    }
}

int main() {
    int  N;
  
    cout << "N = "; cin >> N;

    cout << "(iter) S0 = " << S0(N) << endl;
    cout << "(rec up ++) S1 = " << S1(N) << endl;
    cout << "(rec up --) S2 = " << S2(N) << endl;
    cout << "(rec down ++) S3 = " << S3(N) << endl;
    cout << "(rec down --) S4 = " << S4(N) << endl;

    return 0;
}

