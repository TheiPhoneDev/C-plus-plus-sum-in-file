#include <iostream>
#include <fstream>

using namespace std;

//prototipi
void sommaDaFile(float &somma);

int main() {
    
    float somma=0.00;
    
    sommaDaFile(somma);
    cout<<"Il valore della somma dei numeri contenuti in ogni riga del file numeri.txt e' pari a "<<somma<<endl;
    
}

void sommaDaFile(float &somma) {
    
    fstream file1;
    float num;
    file1.open("numeri.txt",ios::in);
    
    while(!file1.eof()) {
        file1>>num;
        somma=somma+num;
    }
    
    file1.close();
    
}