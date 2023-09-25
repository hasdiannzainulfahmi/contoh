#include <iostream>
using namespace std;
int main(){
    char hari;
    cout<<" hari ( senin - minggu ): ";
    cin>>hari;

    switch (hari)
    {
    case 'A':
    cout<<" senin!"<<endl;
    break;
    case 'B':
    cout<<" selasa "<<endl;
    break;
    case 'C':
    cout<<" rabu "<<endl;
    break;
    case 'D':
    cout<<" kamis "<<endl;
    break;
    case 'E':
    cout<<" jumat"<<endl;
    break;
    case 'F':
    cout<<" sabtu "<<endl;
    break;
    default:
    cout<<" minggu "<<endl;
    }

}