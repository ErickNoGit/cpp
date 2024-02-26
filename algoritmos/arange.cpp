#include <iostream>
#include <vector>
#include <cmath>

// Retorna um array-like std::vector<double> uniformimente espacado em um intervalo de n + 1 ou especificado na step.
std::vector<double> arange(double start, double stop, double step = 1) {
	std::vector<double> y;
    double max = stop;

    try {
        if (step == 0) {
            throw "Variavel _step nao pode ser false ou zero!";
        }

        if (start != stop) {
            if (start < 0) {
                stop += std::abs(start);
            }

            y.push_back(start);
            for (int i = 1; i < stop; ++i) {
                start += step;
                if (start >= max) {
                    break;
                } else {
                    y.push_back(start);
                }
            }
        } else {
            throw "Variavel _start e _stop nao podem ser iguais!";
        }
    } catch (const char* msg) {
        std::cout << "Error :: " << msg << std::endl;
    }

	return y;
}


int main() {
	std::vector<double> vet_range = arange(7, 30, 3);

    std::cout << '[';
    for (double v: vet_range) {
        std::cout << v;
        std::cout << ' ';
    }
    std::cout << ']';
            

	return 0;
}