#include <iostream>
#include "CRC.h"
#include "Parity_Check.h"
#include "Hamming.h"

int main(int argc, char** argv) {
    cout << "----------------------------------------------" << endl;
    cout << "CRC: " << endl;
    CRC_Run("10011101","1001");
    cout << "----------------------------------------------" << endl;
    cout << "Parity Check: " << endl;
    ParityNum("10011100");
    cout << "----------------------------------------------" << endl;
    cout << "Hamming: " << endl;
    Hamming_Run(argc,argv);

    return 0;
}
