void setup()
{
  Serial.begin(9600);
  
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  
  Serial.println("Speed Test will begin momentarily.");
  Serial.println("");
 
 delay(4000);
  
  speedTest();
}

void loop()
{
}

void speedTest(void)
{
  register int i,j;
  volatile unsigned char c1,c2;
  volatile int v;
  volatile long l1,l2;
  volatile float f1,f2;
  long int r;
  unsigned long m,n;
  float d, overhead;
  char buffer[30]; // Garantindo que o buffer é grande o suficiente para armazenar a maior string

  Serial.println(F(""));
  Serial.println(F("Speed test"));
  Serial.println(F("----------"));

  Serial.print(F("F_CPU = "));
  Serial.print(F_CPU,DEC);
  Serial.println(F(" Hz"));

  delay(800);    // Allow the Serial text to be transmitted

  Serial.print(F("  digitalRead               : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<2; i++)
  {
    for (j=0; j<10000; j++)
    {
      digitalRead(10);       
      digitalRead(10);       

      digitalRead(10);       
      digitalRead(10);       

      digitalRead(10);       
      digitalRead(10);       

      digitalRead(10);       
      digitalRead(10);       

      digitalRead(10);       
      digitalRead(10);       

      digitalRead(10);       
      digitalRead(10);       

      digitalRead(10);       
      digitalRead(10);       

      digitalRead(10);       
      digitalRead(10);       

      digitalRead(10);       
      digitalRead(10);       

      digitalRead(10);       
      digitalRead(10);       
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));

  Serial.print(F("  digitalWrite              : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<2; i++)
  {
    for (j=0; j<10000; j++)
    {
      digitalWrite(12, HIGH);       
      digitalWrite(12, LOW);       

      digitalWrite(12, HIGH);       
      digitalWrite(12, LOW);       

      digitalWrite(12, HIGH);       
      digitalWrite(12, LOW);       

      digitalWrite(12, HIGH);       
      digitalWrite(12, LOW);       

      digitalWrite(12, HIGH);       
      digitalWrite(12, LOW);       

      digitalWrite(12, HIGH);       
      digitalWrite(12, LOW);       

      digitalWrite(12, HIGH);       
      digitalWrite(12, LOW);       

      digitalWrite(12, HIGH);       
      digitalWrite(12, LOW);       

      digitalWrite(12, HIGH);       
      digitalWrite(12, LOW);       

      digitalWrite(12, HIGH);       
      digitalWrite(12, LOW);       
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));

  Serial.print(F("  pinMode                   : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<2; i++)
  {
    for (j=0; j<10000; j++)
    {
      pinMode(13, INPUT);       
      pinMode(13, OUTPUT);       

      pinMode(13, INPUT);       
      pinMode(13, OUTPUT);       

      pinMode(13, INPUT);       
      pinMode(13, OUTPUT);       

      pinMode(13, INPUT);       
      pinMode(13, OUTPUT);       

      pinMode(13, INPUT);       
      pinMode(13, OUTPUT);       

      pinMode(13, INPUT);       
      pinMode(13, OUTPUT);       

      pinMode(13, INPUT);       
      pinMode(13, OUTPUT);       

      pinMode(13, INPUT);       
      pinMode(13, OUTPUT);       

      pinMode(13, INPUT);       
      pinMode(13, OUTPUT);       

      pinMode(13, INPUT);       
      pinMode(13, OUTPUT);       
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  multiply byte             : "));
  c1 = 2;
  c2 = 3;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<20; i++)
  {
    for (j=0; j<10000; j++)
    {
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
      c1 *= c2;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  divide byte               : "));
  c1 = 253;
  c2 = 3;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<2; i++)
  {
    for (j=0; j<10000; j++)
    {
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
      c1 /= c2;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  add byte                  : "));
  c1 = 1;
  c2 = 2;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<20; i++)
  {
    for (j=0; j<10000; j++)
    {
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
      c1 += c2;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  multiply integer          : "));
  volatile int x,y;
  x = 2;
  y = 3;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<10; i++)
  {
    for (j=0; j<10000; j++)
    {
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
      x *= y;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  divide integer            : "));
  x = 31415;
  y = 3;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<1; i++)
  {
    for (j=0; j<10000; j++)
    {
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
      x /= y;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  add integer               : "));
  x = 1;
  y = 3;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<10; i++)
  {
    for (j=0; j<10000; j++)
    {
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
      x += y;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  multiply long             : "));
  l1 = 2;
  l2 = 3;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<2; i++)
  {
    for (j=0; j<10000; j++)
    {
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
      l1 *= l2;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  divide long               : "));
  l1 = 2000000000L;
  l2 = 3;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<1; i++)
  {
    for (j=0; j<2000; j++)
    {
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
      l1 /= l2;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  add long                  : "));
  l1 = 500000000L;
  l2 = 123;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<4; i++)
  {
    for (j=0; j<10000; j++)
    {
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
      l1 += l2;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  multiply float            : "));
  f1 = 3.24;
  f2 = 1.25;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<2; i++)
  {
    for (j=0; j<10000; j++)
    {
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
      f1 *= f2;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  divide float              : "));
  f1 = 312645.24;
  f2 = 1.21;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<1; i++)
  {
    for (j=0; j<2000; j++)
    {
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
      f1 /= f2;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  add float                 : "));
  f1 = 9876.54;
  f2 = 1.23;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<1; i++)
  {
    for (j=0; j<10000; j++)
    {
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
      f1 += f2;
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));


  // Converte um número em string em uma variedade de bases, ex: Decimal, Binary, Int..
  Serial.print(F("  itoa()                    : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<1; i++)
  {
    for (j=0; j<10000; j++)
    {
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
      itoa(i,buffer,10);
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  


  // Converte um Float em um array de Char's para ser printado.
  Serial.print(F("  dtostrf()                 : "));
  float d3;
  d3 = 3.14159265;
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<2; i++)
  {
    for (j=0; j<1000; j++)
    {
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
      dtostrf (d3, 6, 2, buffer);
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  random()                  : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<2; i++)
  {
    for (j=0; j<1000; j++)
    {
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
      r=random(-2147483647,2147483647);
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));

  Serial.print(F("  analogRead()              : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<1; i++)
  {
    for (j=0; j<1000; j++)
    {
      analogRead (0);
      analogRead (1);
      analogRead (0);
      analogRead (1);
      analogRead (0);
      analogRead (1);
      analogRead (0);
      analogRead (1);
      analogRead (0);
      analogRead (1);
      analogRead (0);
      analogRead (1);
      analogRead (0);
      analogRead (1);
      analogRead (0);
      analogRead (1);
      analogRead (0);
      analogRead (1);
      analogRead (0);
      analogRead (1);
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  analogWrite() PWM         : "));
  // Using pin 13 (system led) for output.
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<1; i++)
  {
    for (j=0; j<10000; j++)
    {
      analogWrite (9, 100);
      analogWrite (9, 200);
      analogWrite (9, 100);
      analogWrite (9, 200);
      analogWrite (9, 100);
      analogWrite (9, 200);
      analogWrite (9, 100);
      analogWrite (9, 200);
      analogWrite (9, 100);
      analogWrite (9, 200);
      analogWrite (9, 100);
      analogWrite (9, 200);
      analogWrite (9, 100);
      analogWrite (9, 200);
      analogWrite (9, 100);
      analogWrite (9, 200);
      analogWrite (9, 100);
      analogWrite (9, 200);
      analogWrite (9, 100);
      analogWrite (9, 200);
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  delay(1)                  : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<1; i++)
  {
    for (j=0; j<100; j++)
    {
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
      delay(1);
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  delay(100)                : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<1; i++)
  {
    for (j=0; j<2; j++)
    {
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
      delay(100);
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  delayMicroseconds(2)      : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<20; i++)
  {
    for (j=0; j<10000; j++)
    {
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
      delayMicroseconds(2);
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  delayMicroseconds(5)      : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<5; i++)
  {
    for (j=0; j<10000; j++)
    {
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
      delayMicroseconds(5);
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));



  Serial.print(F("  delayMicroseconds(100)    : "));
  delay(70);     // Allow the Serial text to be transmitted
  m=millis();
  for (i=0; i<1; i++)
  {
    for (j=0; j<1000; j++)
    {
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
      delayMicroseconds(100);
    }
  }
  n=millis();
  d = ((float)n - (float)m) / ((float)i * (float)j);
  d *= 1000.0;
  d -= overhead;
  d /= 20.0;
  Serial.print (d,3);
  Serial.println (F(" us"));


  Serial.println(F("-----------"));
}