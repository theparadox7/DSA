#include <iostream>
#include <bitset>  // Include this header to use std::bitset

using namespace std;

int main() {
    // Example number to work with
    int a = 10;  // Binary representation: 1010

    // 1. Bitwise AND (&)
    int b = 12;  // Binary representation: 1100
    int and_result = a & b;
    cout << a << " & " << b << " = " << and_result << " (" << bitset<4>(and_result) << ")" << endl;

    // 2. Bitwise OR (|)
    int or_result = a | b;
    cout << a << " | " << b << " = " << or_result << " (" << bitset<4>(or_result) << ")" << endl;

    // 3. Bitwise XOR (^)
    int xor_result = a ^ b;
    cout << a << " ^ " << b << " = " << xor_result << " (" << bitset<4>(xor_result) << ")" << endl;

    // 4. Bitwise NOT (~)
    int not_result = ~a;
    cout << "~" << a << " = " << not_result << " (" << bitset<4>(not_result) << ")" << endl;

    // 5. Left Shift (<<)
    int shift_left_result = a << 2;
    cout << a << " << 2 = " << shift_left_result << " (" << bitset<6>(shift_left_result) << ")" << endl;

    // 6. Right Shift (>>)
    int shift_right_result = a >> 2;
    cout << a << " >> 2 = " << shift_right_result << " (" << bitset<2>(shift_right_result) << ")" << endl;

    return 0;
}
