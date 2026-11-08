#include <iostream>

int main() {
    double saldo;
    double compra;

    std::cout << "Saldo: R$";
    std::cin >> saldo;
    if (std::cin.fail()) {
        std::cout << "Digite apenas numeros.\n";
        return 1;
    }

    std::cout << "Compra: R$";
    std::cin >> compra;
    if (std::cin.fail()) {
        std::cout << "Digite apenas numeros.\n";
        return 1;
    }

    if (saldo < 0) {
        std::cout << "Saldo invalido.\n";
        return 1;
    }

    if (compra <= 0) {
        std::cout << "Valor invalido.\n";
        return 1;
    }

    if (compra <= saldo) {
        saldo = saldo - compra;
        std::cout << "Compra aprovada!\n";
        std::cout << "Novo saldo: R$ "
            << saldo << "\n";
    }
    else {
        std::cout << "Saldo insuficiente.\n";
    }
    return 0;
}
