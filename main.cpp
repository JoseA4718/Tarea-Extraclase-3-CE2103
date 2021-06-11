#include <iostream>
#include "CRC.h"
#include "Parity_Check.h"

int main() {
    cout << "----------------------------------------------" << endl;
    cout << "CRC: " << endl;
    CRC_Run("10011101","1001");
    cout << "----------------------------------------------" << endl;
    cout << "Parity Check: " << endl;
    ParityNum("10011100");
    cout << "----------------------------------------------" << endl;
    cout << "Hamming: " << endl;
    return 0;
}
