#include <vector>
#include <iostream>
using namespace std;

template <typename T>
void printVector(vector<T> vec) {
    cout << "Vector->[";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i != vec.size()-1)
            cout << ", ";
    }
    cout << "]" << endl;
}