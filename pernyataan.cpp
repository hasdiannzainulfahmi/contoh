#include <iostream>
using namespace std;
int main(){
    int uang,harga,kembalian,waktu;
    cout<<" nominal uang : ";
    cin>> uang;
    cout<<" harga barang : ";
    cin>> harga;
    cout<<" waktu :";
    cin>> waktu;
    if (uang>harga)
    {
        kembalian = uang - harga;
        cout<<"kembalian = "<<kembalian;
    }
    else if (uang<harga)
    { 
        cout<<"uang kurang"<<endl;
    }
    else if (waktu)
        cout<<"waktu belanja";
    else 
    {
        cout<<"terima kasih sudah belanja";
    }
}