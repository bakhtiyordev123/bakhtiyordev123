#include <iostream>
using namespace std;

int main() {
    int password=1111,counter;
    int userPass;
    counter = 0;
    while (counter < 3) {
        cout << "Password\n";
        cin >> userPass;
        if (userPass == password) {
            cout << "Welcome to system!\n";
            break;
        } else{
            cout << "Password is not valid,please try again!\n\n";
            counter++;
        }
        if (counter == 3){
            cout << "System blocked!" << endl;
        }
    }


}
