// Abstração + Encapsulamento
public class Conta
{
    private double saldo;

    public void Depositar(double valor)
    {
        if (valor > 0) saldo += valor;
    }

    public double GetSaldo()
    {
        return saldo;
    }
}

// Herança + Polimorfismo
public class Animal
{
    public virtual void EmitirSom()
    {
        Console.WriteLine("Som genérico");
    }
}

public class Cachorro : Animal
{
    public override void EmitirSom()
    {
        Console.WriteLine("Latido");
    }
}