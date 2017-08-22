#include <iostream>

using namespace std;

int main()
{
    int maior = -7;
    int numero;

    while(numero!=0)
{
    cout << "Insira numeros" << endl;
    cin>>numero;

    if(numero>maior)
    {
        maior=numero;
    }
}
    cout<< "maior numero eh: \n"<<maior<<endl;

    return 0;
}
