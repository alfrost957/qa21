#include <iostream>

using namespace std;

void print_mass(int mass[], int count) {
    for (int i=0; i < count; i++) {
        cout << mass[i] << " ";
    }
}


int main() {

    int mass1[5]{ 10,2,3,4,1 };

    print_mass(mass1, 5);

    return 0;
}