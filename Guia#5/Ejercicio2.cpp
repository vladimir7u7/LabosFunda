#include "iostream"
#include "conio.h"
using namespace std;

int main(){
    int h, m, s;
    char c;
    cout <<endl;
    cout <<"Digite las horas en formato horas/minutos/segundos.Separado por dos puntos"<<endl;
    cin>> h >> c >> m >> c >> s;
    s = s+1;
    if (s >= 60){
        s = 0;
        m = m + 1;
        if (m >= 60){
            m = 0;
            h = h + 1;
            if (h >= 24){
                h = 0;
            }
        }
    }
    if (h<10) cout << 0;
    cout<< h;
    cout<<':';
    if (m <10) cout <<0;
    cout <<m;
    cout<<':';
    if (s <10) cout <<0;
    cout <<s;
    cout<<':' <<endl;

}
