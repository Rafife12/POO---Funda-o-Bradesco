// Abstração + Encapsulamento
public class Conta {
    private double saldo;

    public void depositar(double valor) {
        if (valor > 0) saldo += valor;
    }

    public double getSaldo() {
        return saldo;
    }
}

// Herança + Polimorfismo
class Animal {
    public void emitirSom() {
        System.out.println("Som genérico");
    }
}

class Cachorro extends Animal {
    @Override
    public void emitirSom() {
        System.out.println("Latido");
    }
}