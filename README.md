# Arduino Básico
Repositório de experimentos para o curso de Arduino Básico

## Exemplo Botão

Nesse exemplo vamos utilizar:

1. um botão (chave táctil);
2. um LED;
3. um resistor de $330 \Omega$
4. fios de conexão (jumpers)

O circuito:

![Exemplo com botão](ex_botao\ex_botao.jpg)

O código:

```cpp
int bot=11;
int led=12;

void setup()
{
  // Define a porta do botão como entrada pullup
  pinMode(bot, INPUT_PULLUP);
  // Define o pino do LED como saída
  pinMode(led, OUTPUT);
}
void loop()
{
  // caso o botão seja pressionado
  if (!digitalRead(bot))
  {
    // espera um pouquinho para evitar leitura errada
    delay(50);
    // verifica novamente se o botão continua pressionado
    if (!digitalRead(bot))
    {
      while (!digitalRead(11))
      {
      }
      // inverte o pino 12// aprisiona o código enquanto o botão estiver pressionado
      digitalWrite(12, !digitalRead(12));
    }
  }
}
```