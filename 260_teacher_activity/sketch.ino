#include <Keypad.h>

const int row_num = 4;
const int col_num = 4;

//  add all the variables

char keys[row_num][col_num] = {
  {'1' , '2' , '3' , 'A'},
  {'4' , '5' , '6' , 'B'},
  {'7' , '8' , '9' , 'C'},
  {'*' , '0' , '#' , 'D'}
};

byte row_pins[] = {19,18,5,17};
byte col_pins[] = {16,4,2,15};

//  making keypad object
Keypad k = Keypad(makeKeymap(keys), row_pins, col_pins, row_num, col_num );

void setup(){
  Serial.begin(115200);
}

void loop(){

  //  picking a random element from 2D array
  

  //  Creating hints
  

  //  picking up a hint
  

}
