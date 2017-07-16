#include <Keypad.h>// Подключаем библиотеку клавиатуры

const byte ROWS = 4; // 4 строки
const byte COLS = 4; // 4 столбца

char keys[ROWS][COLS] = {
  {'D','C','B','A'},
  {'#','9','6','3'},
  {'0','8','5','2'},
  {'*','7','4','1'}
};

// Цифровые пины клавиатуры
byte rowPins[ROWS] = {12, 10, 9, 8};
byte colPins[COLS] = {7, 6, 5, 4};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );



void setup()
{
    Serial.begin(9600);

  
}
void loop()
{
    char key = keypad.getKey();
    if (key)
    {
        Serial.println(key); // Передаем название нажатой клавиши в сериал порт
    }
}
