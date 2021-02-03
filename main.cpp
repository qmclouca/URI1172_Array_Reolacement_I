#include <iostream>
using namespace std;

int main() {
    int X[10];

    for (int aux = 0; aux<10; aux++){
        std::cin >> X[aux];
    }
    for (int aux = 0; aux<10; aux++){
        if (X[aux] <= 0){
            X[aux] = 1;
        }
    }
    for (int aux = 0; aux<10; aux++){
        std::cout << "X["<< aux <<"] = " << X[aux] <<std::endl;
    }
    return 0;
}
