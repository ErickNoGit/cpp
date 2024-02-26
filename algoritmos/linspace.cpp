#include <iostream>
#include <vector>

// Retorna um array-like o tipo std::vector<double> com intervalo linearmente espacado de tamanho padrao 10.
std::vector<double> linspace(double start, double stop, double num = 10) {
	std::vector<double> y;
	const double X = (double) (stop-start) / (num-1);

	y.push_back(start);
	for (int i = 1; i < num; ++i) {
		y.push_back(start + (i * X));
	}

	return y;
}

int main() {
	// Vetor linearmente espaçado de tamanho único
	std::vector<double> vet_space = linspace(3, 30);

	std::cout << '[';
	for (double v: vet_space) {
		std::cout << v << ' ';
	}
	std::cout << ']';

	return 0;
}