#include <iostream>
using namespace std;
int main(){
    char nilai;

    cout<<"input nilai anda ( A - E ): ";
    cin>>nilai;

    switch (nilai)
    {
    case 'A':
    cout<<" kerja bagus!"<<endl;
    break;
    case 'B':
    cout<<" lebih baik lagi y dek"<<endl;
    break;
    case 'C':
    cout<<" belajar lagi dek"<<endl;
    break;
    case 'D':
    cout<<" dont play play bosku"<<endl;
    break;
    case 'E':
    cout<<" nice try"<<endl;
    break;
    default:
    cout<<" sorry ndrk nilaim bro"<<endl;
    }

}