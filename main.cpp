#include <iostream>

using namespace std;

const int Maximo = 1000;

int main() {
    int inf=0, supp=Maximo;
    int n=0;
    bool achou = false;
    int tentativa;

    while (! achou) {
        tentativa = (inf+supp)/2;
        char op;

        cout << "Tentativa: " << tentativa << endl;
        cout << "Digite: = (se seu número for igual), < (se seu número for menor, > (se for maior): " << endl;
        cin >> op;
        switch (op) {
            case '=':
                achou = true;
                break;
            case '<':
                supp = tentativa-1;
                break;
            case '>':
                inf = tentativa + 1;
                break;
            default:
                cout << op << " NÃO é uma opção válida !!!" << endl;
                break;
        }
        n++;
    }

    cout << "Descobriu seu número (" << tentativa << ") em " << n << " tentativas" << endl;
    return 0;
}