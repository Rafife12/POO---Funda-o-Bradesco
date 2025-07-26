#include <iostream>
using namespace std;

// Abstração + Encapsulamento
class Conta {
private:
    double saldo;
public:
    Conta() : saldo(0) {}

    void depositar(double valor) {
        if (valor > 0)
            saldo += valor;
    }

    double getSaldo() {
        return saldo;
    }
};

// Herança + Polimorfismo
class Animal {
public:
    virtual void emitirSom() {
        cout << "Som genérico" << endl;
    }
};

class Cachorro : public Animal {
public:
    void emitirSom() override {
        cout << "Latido" << endl;
    }
};