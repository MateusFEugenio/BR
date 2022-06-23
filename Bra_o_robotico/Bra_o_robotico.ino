/***BLUETOOTH CONTROLLED ROBOTIC ARM
Código desenvolvinedo para o controle de um braço robótico
utilizando Arduino e pontes H L293D, o mesmo não utilizade funções
para o fácil compreeção****/

//Declare the arduino pins

int Fm = 2;
int Bm = 3;
int Lm = 4;
int Rm = 5;
int Gm = 6;
int Im = 7;
int Hm = 8;
int Jm = 9;
int Wm = 10;
int Um = 11;

char bt = 'S';

void setup()
{
  //initlize the mode of the pins
  pinMode(Fm, OUTPUT);
  pinMode(Bm, OUTPUT);
  pinMode(Lm, OUTPUT);
  pinMode(Rm, OUTPUT);
  pinMode(Hm, OUTPUT);
  pinMode(Im, OUTPUT);
  pinMode(Gm, OUTPUT);
  pinMode(Jm, OUTPUT);
  pinMode(Wm, OUTPUT);
  pinMode(Um, OUTPUT);


  //set the serial communication rate
  Serial.begin(9600);
}

void loop()
{
  //check whether arduino is reciving signal or not
  while (Serial.available() == 0);
  bt = Serial.read() ;//reads the signal
  Serial.print(bt);

  if (bt == 'F')
  {
    digitalWrite(Fm, HIGH);
    digitalWrite(Bm, LOW);
    digitalWrite(Lm, LOW);
    digitalWrite(Rm, LOW);
    digitalWrite(Gm, LOW);
    digitalWrite(Im, LOW);
    digitalWrite(Hm, LOW);
    digitalWrite(Jm, LOW);
    digitalWrite(Wm, LOW);
    digitalWrite(Um, LOW);

  }


  else if (bt == 'B')
  {
    digitalWrite(Fm, LOW);
    digitalWrite(Bm, HIGH);
    digitalWrite(Lm, LOW);
    digitalWrite(Rm, LOW);
    digitalWrite(Gm, LOW);
    digitalWrite(Im, LOW);
    digitalWrite(Hm, LOW);
    digitalWrite(Jm, LOW);
    digitalWrite(Wm, LOW);
    digitalWrite(Um, LOW);

  }
 
  else if (bt == 'R')
  {
    digitalWrite(Fm, LOW);
    digitalWrite(Bm, LOW);
    digitalWrite(Lm, LOW);
    digitalWrite(Rm, HIGH);
    digitalWrite(Gm, LOW);
    digitalWrite(Im, LOW);
    digitalWrite(Hm, LOW);
    digitalWrite(Jm, LOW);
    digitalWrite(Wm, LOW);
    digitalWrite(Um, LOW);
  }
  
  else if (bt == 'L')
  {
    digitalWrite(Fm, LOW);
    digitalWrite(Bm, LOW);
    digitalWrite(Lm, HIGH);
    digitalWrite(Rm, LOW);
    digitalWrite(Gm, LOW);
    digitalWrite(Im, LOW);
    digitalWrite(Hm, LOW);
    digitalWrite(Jm, LOW);
    digitalWrite(Wm, LOW);
    digitalWrite(Um, LOW);

  }

  else if (bt == 'G')
  {
    digitalWrite(Fm, LOW);
    digitalWrite(Bm, LOW);
    digitalWrite(Lm, LOW);
    digitalWrite(Rm, LOW);
    digitalWrite(Gm, HIGH);
    digitalWrite(Im, LOW);
    digitalWrite(Hm, LOW);
    digitalWrite(Jm, LOW);
    digitalWrite(Wm, LOW);
    digitalWrite(Um, LOW);

  }

  else if (bt == 'I')
  {
    digitalWrite(Fm, LOW);
    digitalWrite(Bm, LOW);
    digitalWrite(Lm, LOW);
    digitalWrite(Rm, LOW);
    digitalWrite(Gm, LOW);
    digitalWrite(Im, HIGH);
    digitalWrite(Hm, LOW);
    digitalWrite(Jm, LOW);
    digitalWrite(Wm, LOW);
    digitalWrite(Um, LOW);

  }

  else if (bt == 'H')
  {
    digitalWrite(Fm, LOW);
    digitalWrite(Bm, LOW);
    digitalWrite(Lm, LOW);
    digitalWrite(Rm, LOW);
    digitalWrite(Gm, LOW);
    digitalWrite(Im, LOW);
    digitalWrite(Hm, HIGH);
    digitalWrite(Jm, LOW);
    digitalWrite(Wm, LOW);
    digitalWrite(Um, LOW);

  }

  else if (bt == 'J')
  {
    digitalWrite(Fm, LOW);
    digitalWrite(Bm, LOW);
    digitalWrite(Lm, LOW);
    digitalWrite(Rm, LOW);
    digitalWrite(Gm, LOW);
    digitalWrite(Im, LOW);
    digitalWrite(Hm, LOW);
    digitalWrite(Jm, HIGH);
    digitalWrite(Wm, LOW);
    digitalWrite(Um, LOW);

  }

  else if (bt == 'W')
  {
    digitalWrite(Fm, LOW);
    digitalWrite(Bm, LOW);
    digitalWrite(Lm, LOW);
    digitalWrite(Rm, LOW);
    digitalWrite(Gm, LOW);
    digitalWrite(Im, LOW);
    digitalWrite(Hm, LOW);
    digitalWrite(Jm, LOW);
    digitalWrite(Wm, HIGH);
    digitalWrite(Um, LOW);

  }

  else if (bt == 'U')
  {
    digitalWrite(Fm, LOW);
    digitalWrite(Bm, LOW);
    digitalWrite(Lm, LOW);
    digitalWrite(Rm, LOW);
    digitalWrite(Gm, LOW);
    digitalWrite(Im, LOW);
    digitalWrite(Hm, LOW);
    digitalWrite(Jm, LOW);
    digitalWrite(Wm, LOW);
    digitalWrite(Um, HIGH);

  }

  else if (bt == 'S')
  {
    digitalWrite(Fm, LOW);
    digitalWrite(Bm, LOW);
    digitalWrite(Lm, LOW);
    digitalWrite(Rm, LOW);
    digitalWrite(Gm, LOW);
    digitalWrite(Im, LOW);
    digitalWrite(Hm, LOW);
    digitalWrite(Jm, LOW);
    digitalWrite(Wm, LOW);
    digitalWrite(Um, LOW);

  }

}
