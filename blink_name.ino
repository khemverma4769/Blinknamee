int led = 13; // the led pin
char input;   // to save the input
void setup()
{
    pinMode(led, OUTPUT); // tell that the 13 pin is an output
    Serial.begin(9600);   // for the connect with the boared
}

void loop()
{
    if (Serial.available())
    {
        input = Serial.read(); // read the input
        if (input == 'a' || input == 'A')
        {
            lA();
        } // if the input is a or A go to function lA
        if (input == 'b' || input == 'B')
        {
            lB();
        } // same but with b letter
        if (input == 'c' || input == 'C')
        {
            lC();
        }
        if (input == 'd' || input == 'D')
        {
            lD();
        }
        if (input == 'e' || input == 'E')
        {
            lE();
        }
        if (input == 'f' || input == 'F')
        {
            lF();
        }
        if (input == 'g' || input == 'G')
        {
            lG();
        }
        if (input == 'h' || input == 'H')
        {
            lH();
        }
        if (input == 'i' || input == 'I')
        {
            lI();
        }
        if (input == 'j' || input == 'J')
        {
            lJ();
        }
        if (input == 'k' || input == 'K')
        {
            lK();
        }
        if (input == 'l' || input == 'L')
        {
            lL();
        }
        if (input == 'm' || input == 'M')
        {
            lM();
        }
        if (input == 'n' || input == 'N')
        {
            lN();
        }
        if (input == 'o' || input == 'O')
        {
            lO();
        }
        if (input == 'p' || input == 'P')
        {
            lP();
        }
        if (input == 'q' || input == 'Q')
        {
            lQ();
        }
        if (input == 'r' || input == 'R')
        {
            lR();
        }
        if (input == 's' || input == 'S')
        {
            lS();
        }
        if (input == 't' || input == 'T')
        {
            lT();
        }
        if (input == 'u' || input == 'U')
        {
            lU();
        }
        if (input == 'v' || input == 'V')
        {
            lV();
        }
        if (input == 'w' || input == 'W')
        {
            lW();
        }
        if (input == 'x' || input == 'X')
        {
            lX();
        }
        if (input == 'y' || input == 'Y')
        {
            lY();
        }
        if (input == 'z' || input == 'Z')
        {
            lZ();
        }
        if (input == '1')
        {
            n1();
        } // the numbers
        if (input == '2')
        {
            n2();
        }
        if (input == '3')
        {
            n3();
        }
        if (input == '4')
        {
            n4();
        }
        if (input == '5')
        {
            n5();
        }
        if (input == '6')
        {
            n6();
        }
        if (input == '7')
        {
            n7();
        }
        if (input == '8')
        {
            n8();
        }
        if (input == '9')
        {
            n9();
        }
        if (input == '0')
        {
            n0();
        }
        if (input == ' ')
        {
            space();
        }                      // the space
        Serial.println(input); // print the latter saved in the input var
    }
}
// fonctions for the letters and the numbers
void lA()
{
    dot();
    dash();
    shortspace();
} // letter A in morse code!
void lB()
{
    dash();
    dot();
    dot();
    dot();
    shortspace();
} // same for B
void lC()
{
    dash();
    dot();
    dash();
    dot();
    shortspace();
}
void lD()
{
    dash();
    dot();
    dot();
    shortspace();
}
void lE()
{
    dot();
    shortspace();
}
void lF()
{
    dot();
    dot();
    dash();
    dot();
    shortspace();
}
void lG()
{
    dash();
    dash();
    dot();
    shortspace();
}
…
