UML

Classe:
Packman

Variáveis:
Status
Direção
Velocidade
Vida
Ponto inicial

Métodos:
+ Comer ()
+ Mover ()
+ Matar () /Quando Status muda

---

Classe-Pai:
Fantasma

Variáveis:
Status
Direção
Velocidade
Cor
Ponto inicial

Métodos:
+ Matar ()
+ Fugir () /Quando Status muda
+ Retornar ao Ponto Inicial () /Quando Status muda

---

Classe-Filho:
Fantasma_1

Variáveis:
Cor: Vermelho

Métodos:
+ Perseguir ()


Classe-Filho:
Fantasma_2

Variáveis:
Cor: Azul

Métodos:
+ Emboscar ()


Classe-Filho:
Fantasma_3

Variáveis:
Cor: Amarelo

Métodos:
+ Movimento aleatório 1 ()


Classe-Filho:
Fantasma_4

Variáveis:
Cor: Rosa

Métodos:
+ Movimento aleatório 2 ()


