// Usando Loop de Repetição:

#include <iostream>

using namespace std;

// priemiro: criei uma classe estrutura.

struct Item {
    int quantidade;
    float preco;
    float subtotal;
};

// segundo: criei uma função para que o usuário informe
// a quantidade e o valor de cada item, e calcular seus valores
// para obter o valor total.

void Conta(int quantTotal) {
    Item itens[quantTotal];
    float total = 0;

    for (int i = 1; i <= quantTotal; ++i) {
        cout << "Informe a quantidade do item " << i <<  ": ";
        cin >> itens[i].quantidade;
        cout << "Informe o preço do item " << i <<  ": ";
        cin >> itens[i].preco;
        itens[i].subtotal = itens[i].quantidade * itens[i].preco;
        total += itens[i].subtotal;
    }
    
    cout << endl;
    cout << "Itens na conta:" << endl << endl;
    for (int j = 1; j <= quantTotal; ++j) {
        cout << "Item " << j << ": Quantidade = " << itens[j].quantidade << ", Preço = " << itens[j].preco << ", Subtotal = " << itens[j].subtotal << endl;
    }
    
    cout << endl;
    cout << "Total da conta: R$" << total << endl;
}

int main() {
    
    int quantTotal;
    
    cout << "Informe o número de itens: ";
    cin >> quantTotal;
    cout << endl;
    Conta(quantTotal);

    return 0;
}