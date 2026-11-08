#include <iostream>

int main() {
    double saldo;
    double compra;

    std::cout << "Saldo: R$";
    std::cin >> saldo;

    while (std::cin.fail() || saldo < 0) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Saldo invalido. Digite de novo: R$";
        std::cin >> saldo;
    }

    std::cout << "Compra: R$";
    std::cin >> compra;

    while (std::cin.fail() || compra <= 0) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Compra invalida. Digite de novo: R$";
        std::cin >> compra;
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
