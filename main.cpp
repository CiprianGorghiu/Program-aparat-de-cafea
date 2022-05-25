#include <iostream>
#include <fstream>
using namespace std;

//functii
int meniu_principal();

//variabile globale
int pret = 2;
int money = 0, rest = 0;

int main()
{

    meniu_principal();
    int meniucafea;
    cout << "=====Meniu Cafea=====\n"<<"(0)Expresso scurt "<<pret<<"lei\n"<<"(1)Expresso lung "<<pret<<"lei\n"<<"(2)Cafea cu lapte "<<pret<<"lei\n"<<endl;
    cin>>meniucafea;

    switch(meniucafea)
    {
        case 0 : cout << "Expresso scurt"<<endl;
            if(money<pret)
            {
                cout <<"Nu ai suficienti bani!"<<endl;
            }
            else
            {
                cout << "Expresso scurt se prepara ..."<<endl;
            }
            if(money > pret)
            {
                rest = money-pret;
                cout<<"Ai primit rest "<<rest<<"lei"<<endl;
            }
            break;

            case 1: cout <<"Expresso lung" <<endl;
            if(money<pret)
            {
                cout <<"Nu ai suficienti bani!\n"<<"Mai trebuie sa introduci "<<pret-money <<"lei"<<endl;
            }
            else
            {
                cout << "Expresso lung se prepara ..."<<endl;
            }
            if(money > pret)
            {
                rest = money-pret;
                cout<<"Ai primit rest "<<rest<<"lei"<<endl;
            }
            break;

        case 2: cout<<"Cafea cu lapte 2 lei"<<endl;
            if(money<pret)
            {
                cout <<"Nu ai suficienti bani!\n"<<"Mai trebuie sa introduci "<<pret-money <<"lei"<<endl;
            }
            else
            {
                cout << "Cafea cu lapte se prepara ..."<<endl;
            }
            if(money > pret)
            {
                rest = money-pret;
                cout<<"Ai primit rest "<<rest<<"lei"<<endl;
            }
            break;

        default: cout<<"Nu ai selectat o bautura din meniu!"<<endl;

            return 1;
    }

    return 0;
}


int meniu_principal()
{

int meniu;

    cout<<"(0)Introdu bani in automatul de cafea\n(1)Exit menu"<<endl;
    cin>>meniu;
    switch(meniu)
    {
        case 0: cout<<"Introduceti suma dorita: "<<endl;
            cin>>money;
            cout<<"Balance: "<<money<<" lei."<<endl;
            break;
        case 1: cout<<"Ati iesit din meniu"<<endl;
                return 1;
                break;
        default: cout <<"Pentru a naviga in meniu introduceti un numar cuprins intre 0-1"<<endl;
    }
return 0;
}
