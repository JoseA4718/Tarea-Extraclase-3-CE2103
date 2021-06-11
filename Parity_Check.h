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
    cout << "Number of 1 in the number: " + count << endl;

    cout<<"Parity of number "<<" = "<<(getParity(x)? "even": "odd")<<endl;

}

#endif //TAREA_EXTRACLASE_3_CE2103_PARITY_CHECK_H
