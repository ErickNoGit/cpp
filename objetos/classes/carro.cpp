#include <iostream>
#include <locale.h>
#include <string>

class Carro{
private:
    const int largura = 3;
    const int comptimento = 2;
    double pesoCarro;
public:
    // Construtor
    Carro(double pesoCar = 600){
        pesoCarro = pesoCar;
        std::cout << "Peso atual do carro: "<< pesoCar << std::endl;
    }

    int ano = 2010;

    // Acelerar o carro
    void acelerar(int metros){
        std::cout << "O carro de " << largura << "m de largura e "
        << comptimento << "m de comprimento acelerou "
        << metros << " metros." << std::endl;
    }

    // Dados padrões do carro
    void status(){
        std::cout << "O carro por padrão tem:" << std::endl;
        std::cout << largura << "m de largura" << std::endl;
        std::cout << comptimento << "m de comprimento" << std::endl;
    }

    // Insere peso no carro
    void setPesoCar(double peso){
        pesoCarro = peso;
    }

    // Pega o peso atual do carro
    void getPesoCar(){
        std::cout << "O peso o carro é de: "
        << pesoCarro << "kg" << std::endl;
    }
};

int main() {
    setlocale(0, "Portuguese_brazil");

    Carro car(300);                // instanciação
    car.acelerar(5);

    std::cout << "\n";
    car.status();

    std::cout << "\n";
    car.setPesoCar(500);
    car.getPesoCar();
    std::cout << "O ano do carro é: " << car.ano << std::endl;
    car.ano = 2014;
    std::cout << "O ano agora é: " << car.ano << std::endl;

    return 0;
}