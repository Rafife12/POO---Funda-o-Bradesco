# Abstração + Encapsulamento
class Conta:
    def __init__(self):
        self.__saldo = 0  # atributo privado

    def depositar(self, valor):
        if valor > 0:
            self.__saldo += valor

    def get_saldo(self):
        return self.__saldo

# Herança + Polimorfismo
class Animal:
    def emitir_som(self):
        print("Som genérico")

class Cachorro(Animal):
    def emitir_som(self):
        print("Latido")