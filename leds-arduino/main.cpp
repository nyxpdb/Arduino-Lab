byte ledPin[] = {2, 3, 4, 5, 6, 7, 8, 9};

int ledDelay = 100;   
int direction;          
int currentLED;         

void setup() 
{
    for (int i = 0; i < 8; i++) 
    {
        pinMode(ledPin[i], OUTPUT);
    }
}

void loop()
{
    vaiEVolta();
    //piscarTodos();
    //crescente();
    //decrescente();
    //duploSentido();
    //cavalgar();
    //cavalgarInvertido();
    //aleatorio();
}


void cavalgarInvertido() {
    for (int i = 7; i >= 0; i--) {
        digitalWrite(ledPin[i], HIGH);
        delay(ledDelay);
        digitalWrite(ledPin[i], LOW);
    }
}


void piscarTodos() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 8; j++) {
            digitalWrite(ledPin[j], HIGH);
        }
        delay(ledDelay);
        for (int j = 0; j < 8; j++) {
            digitalWrite(ledPin[j], LOW);
        }
        delay(ledDelay);
    }
}


void vaiEVolta() 
{
    currentLED = 0;
    direction = 1;

    for (int i = 0; i < 72; i++) 
    {
        digitalWrite(ledPin[currentLED], HIGH);
        delay(ledDelay);

        for (int j = 0; j < 8; j++)
        {
            digitalWrite(ledPin[j], LOW);
        }

        currentLED += direction;

        if (currentLED == 8) 
        {
            direction = -1;
            currentLED = 6;
        } else if (currentLED == -1) 
        {
            direction = 1;
            currentLED = 1;
        }
    }
}

void crescente() {
    for (int i = 0; i < 8; i++) {
        digitalWrite(ledPin[i], HIGH);
        delay(ledDelay);
    }
    delay(ledDelay);
    for (int i = 0; i < 8; i++) {
        digitalWrite(ledPin[i], LOW);
    }
}

void decrescente() {
    for (int i = 7; i >= 0; i--) {
        digitalWrite(ledPin[i], HIGH);
        delay(ledDelay);
    }
    delay(ledDelay);
    for (int i = 7; i >= 0; i--) {
        digitalWrite(ledPin[i], LOW);
    }
}

void duploSentido() {
    for (int i = 0; i < 4; i++) {
        digitalWrite(ledPin[i], HIGH);
        digitalWrite(ledPin[7 - i], HIGH);
        delay(ledDelay);
    }
    delay(ledDelay);
    for (int i = 0; i < 4; i++) {
        digitalWrite(ledPin[i], LOW);
        digitalWrite(ledPin[7 - i], LOW);
        delay(ledDelay);
    }
}

void cavalgar() {
    for (int i = 0; i < 8; i++) {
        digitalWrite(ledPin[i], HIGH);
        delay(ledDelay);
        digitalWrite(ledPin[i], LOW);
    }
}

void aleatorio() {
    for (int i = 0; i < 20; i++) {
        int randLed = random(0, 8);
        digitalWrite(ledPin[randLed], HIGH);
        delay(ledDelay);
        digitalWrite(ledPin[randLed], LOW);
    }
}

