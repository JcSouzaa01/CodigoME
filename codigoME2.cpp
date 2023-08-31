// Usando Recursiva
#include <iostream>

using namespace std;

struct Item {
    int quantidade;
    float preco;
    float subtotal;
};

void calcularContaRecursiva(int n, Item itens[], float total, int i = 0) {
    
    if (i == n) {
        cout << endl;
        cout << "Itens na conta:" << endl;
        for (int j = 0; j < n; ++j) {
            cout << "Item " << j + 1 << ": Quantidade = " << itens[j].quantidade << ", Preço = " << itens[j].preco << ", Subtotal = " << itens[j].subtotal << endl;
        }

        cout << endl;
        cout << "Total da conta: R$" << total << endl;
        return;
    }

    cout << "Informe a quantidade do item " << i + 1 <<  ": ";
    cin >> itens[i].quantidade;
    cout << "Informe o preço do item " << i + 1 <<  ": ";
    cin >> itens[i].preco;
    itens[i].subtotal = itens[i].quantidade * itens[i].preco;
    total += itens[i].subtotal;

    calcularContaRecursiva(n, itens, total, i + 1);
}

int main() {
    
    int n;
    
    cout << "Informe o número de itens: ";
    cin >> n;
    cout << endl;
    
    Item itens[n];
    float total = 0;
    calcularContaRecursiva(n, itens, total);
    
    return 0;
}