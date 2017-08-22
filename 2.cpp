#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int palpite,x;
    srand(time(0));
    //x = rand()%100;
    x = (rand()%100)+1;

    while(palpite!=x)
    {
        cout<<"Adivinhe o numero entre 1 e 100"<<endl;
        cin>>palpite;

         if(palpite>x){
        cout<<"numero muito alto \n Tente Novamente:\n"<<endl;
    }else{
        cout<<"numero muito baixo\n Tente Novamente:\n"<<endl;
    }

     if(palpite == x)
     {
         cout<<"acertou o palpite"<<x<<endl;
         break;
     }
         cin>>palpite;
     }


    return 0;
}
