int bot=11, led=12;

void setup()
{
  // Define a porta 13 como entrada pullup
  pinMode(bot, INPUT_PULLUP);
  // Define o pino 12 como saída para o LED
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