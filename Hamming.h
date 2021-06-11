//
// Created by josea4718 on 6/11/21.
//

#ifndef TAREA_EXTRACLASE_3_CE2103_HAMMING_H
#define TAREA_EXTRACLASE_3_CE2103_HAMMING_H


#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
void Hamming_Run(int argc, char** argv) {
    int data_bits[20],m,r = 0,parity;    //m = numero de bits, r = numero de bits redundantes

    cout<<"Ingrese la cantidad de bits para el mensaje: ";
    cin>>m;

    //encuentra la cantidad de bits redundantes
    while(pow (2,r) < m + r + 1){
        r++;
    }

    cout<<"Ingrese los bits del mensaje: ";
    for(int i = 1; i <= m; i++)
        cin>>data_bits[i];

    int hamming[m + r],j = 0,k = 1;

    //encuentra la posicion de los bits redundantes
    for(int i = 1; i <= m + r; i++){

        if( i == pow( 2, j )){
            hamming[i] = -1;    //inicializa los bits redudantes en -1
            j++;
        }
        else{
            hamming[i] = data_bits[k];
            k++;
        }
    }

    k = 0;
    int x, min, max = 0;
    //busca el bit de paridad
    for (int i = 1; i <= m + r; i = pow (2, k)){
        k++;
        parity = 0;
        j = i;
        x = i;
        min = 1;
        max = i;
        while ( j <= m + r){
            for (x = j; max >= min && x <= m + r; min++, x++){
                if (hamming[x] == 1)
                    parity = parity + 1;;
            }
            j = x + i;
            min = 1;
        }

        //revisa paridad par
        if (parity % 2 == 0){
            hamming[i] = 0;
        }
        else{
            hamming[i] = 1;
        }
    }

    cout<<"\nEl codigo de Hamming es: ";
    for(int i = 1; i <= m + r; i++)
        cout<<hamming[i]<<" ";

}


#endif //TAREA_EXTRACLASE_3_CE2103_HAMMING_H
