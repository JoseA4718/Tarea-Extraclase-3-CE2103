//
// Created by josea4718 on 6/11/21.
//

#ifndef TAREA_EXTRACLASE_3_CE2103_PARITY_CHECK_H
#define TAREA_EXTRACLASE_3_CE2103_PARITY_CHECK_H
bool getParity(unsigned int n)
{
    bool parity = 0;
    while (n)
    {
        parity = !parity;
        n     = n & (n - 1);
    }
    return parity;
}
void ParityNum(string binary)
{
    int x = 0;
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i]=='1'){
            x+=1;
        }

    }
    string count = to_string(x);
    cout << "Cantidad de 1s en el numero: " + count << endl;

    cout<<"La paridad del numero es "<<" = "<<(getParity(x)? "par": "impar")<<endl;
    cout<< "El numero de paridad para agregar al codigo de mensaje es: " << (getParity(x)? "0":"1") <<endl;

}

#endif //TAREA_EXTRACLASE_3_CE2103_PARITY_CHECK_H
