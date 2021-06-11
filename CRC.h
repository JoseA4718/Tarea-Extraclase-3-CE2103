//
// Created by josea4718 on 6/11/21.
//

#ifndef TAREA_EXTRACLASE_3_CE2103_CRC_H
#define TAREA_EXTRACLASE_3_CE2103_CRC_H


#include <stdio.h>
#include <iostream>
#include <math.h>



using namespace std;


// Convierte un valor de entero a un string binario
string toBin(long long int num){
    string bin = "";
    while (num){
        if (num & 1)
            bin = "1" + bin;
        else
            bin = "0" + bin;
        num = num>>1;
    }
    return bin;
}

// Convierte string binario a numero decimal
long long int toDec(string bin){
    long long int num = 0;
    for (int i=0; i<bin.length(); i++){
        if (bin.at(i)=='1')
            num += 1 << (bin.length() - i - 1);
    }
    return num;
}

// Calcula el CRC y el valor que se debe agregar al mensaje
void CRC_Calc(string dataword, string generator){
    int l_gen = generator.length();
    long long int gen = toDec(generator);

    long long int dword = toDec(dataword);

    // agrega ceros al dividendo
    long long int dividend = dword << (l_gen-1);

    int shft = (int) ceill(log2l(dividend+1)) - l_gen;
    long long int rem;

    while ((dividend >= gen) || (shft >= 0)){

        //Aplica al XOR y agrega la "trama" al mensaje
        rem = (dividend >> shft) ^ gen;
        dividend = (dividend & ((1 << shft) - 1)) | (rem << shft);

        shft = (int) ceill(log2l(dividend + 1)) - l_gen;
    }

    // Agrega la trama al valor y ofrece el valor de los datos.
    long long int codeword = (dword << (l_gen - 1)) | dividend;
    cout << "Trama : " << toBin(dividend) << endl;
    cout << "Mensaje enviado : " << toBin(codeword) << endl;
}
void CRC_Run(string data, string polynomial)
{
    string dataword = data;
    string generator = polynomial;
    CRC_Calc(dataword, generator);

}



#endif //TAREA_EXTRACLASE_3_CE2103_CRC_H
