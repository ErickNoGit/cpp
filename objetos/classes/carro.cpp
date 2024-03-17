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

    // Dados padr�es do carro
    void status(){
        std::cout << "O carro por padr�o tem:" << std::endl;
        std::cout << largura << "m de largura" << std::endl;
        std::cout << comptimento << "m de comprimento" << std::endl;
    }

    // Insere peso no carro
    void setPesoCar(double peso){
        pesoCarro = peso;
    }

    // Pega o peso atual do carro
    void getPesoCar(){
        std::cout << "O peso o carro � de: "
        << pesoCarro << "kg" << std::endl;
    }
};

int main() {
    setlocale(0, "Portuguese_brazil");

    Carro car(300);                // instancia��o
    car.acelerar(5);

    std::cout << "\n";
    car.status();

    std::cout << "\n";
    car.setPesoCar(500);
    car.getPesoCar();
    std::cout << "O ano do carro �: " << car.ano << std::endl;
    car.ano = 2014;
    std::cout << "O ano agora �: " << car.ano << std::endl;

    return 0;
}