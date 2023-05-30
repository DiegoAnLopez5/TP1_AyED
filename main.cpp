#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int dadoLanzar();

int main()
{
    int opcion;

    //cout<<"Presione una opcion: [1] Lanzar dado [2] Salir: "<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Presiones una opcion: "<<endl;
    cout<<"[1] Lanzar daddo"<<endl;
    cout<<"[2] Salir"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1:
            //cout<<"Usted elijio la opcion 1"<<endl;
            dadoLanzar();
            break;
        case 2:
            exit(EXIT_SUCCESS);
            break;
        }
    return 0;
}



int dadoLanzar(){

    srand(time(NULL));

    int numAL;
    int Linf = 1;
    int Lsup = 6;

    numAL = Linf +rand() % (Lsup +1 - Linf);

    switch(numAL){
    case 1:
        cout<<"Velocidad";
        break;
    case 2:
        cout<<"Tiro";
        break;
    case 3:
        cout<<"Regate";
        break;
    case 4:
        cout<<"Defensa";
        break;
    case 5:
        cout<<"Pase";
        break;
    case 6:
        cout<<"Fisico";
        break;

    }
    return 0;
}



