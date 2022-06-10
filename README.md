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
void setup()
{
  // Define a porta 13 como entrada pullup
  pinMode(13, INPUT_PULLUP);
  // Define o pino 12 como saída para o LED
  pinMode(12, OUTPUT);
}
void loop()
{
  // caso o botão seja pressionado
  if (!digitalRead(13))
  {
    // espera um pouquinho para evitar leitura errada
    delay(50);
    // verifica novamente se o botão continua pressionado
    if (if (!digitalRead(13)))
    {
      // aprisiona o código enquanto o botão estiver pressionado
      while (!digitalRead(13))
      {
      }
    }
    // inverte o pino 12
    digitalWrite(12, !digitalRead(12));
  }
}
```