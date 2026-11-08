#include <iostream>

int main() {
	double saldo;
	double compra;

	std::cout << "Saldo: R$";
	std::cin >> saldo;
	std::cout << "Compra: R$";
	std::cin >> compra;

	if (compra <= saldo) {
		saldo = saldo - compra;
		std::cout << "Compra aprovada!\n";
		std::cout << "Novo saldo: R$ "
			<< saldo << "\n";
	} else {
		std::cout << "Saldo insuficiente.\n";
	}
	return 0;
}