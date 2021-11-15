#include <iostream>
#include <string>

using namespace std;

int main() {
    int ntg = rand();

    int number;
    while (number != ntg) {
        cout << "Guess the number:" << endl;
        cin >> number;

        if (number != ntg) {
            std::string s = std::to_string(std::abs (ntg - number));
            cout << "Your number is " + s + " away from the number. ";
        }
    }

    cout << "Congratulations! You guessed the correct number!";
}