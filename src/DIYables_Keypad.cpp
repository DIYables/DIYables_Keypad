/*
   Copyright (c) 2023, DIYables.io. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:

   - Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   - Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in the
     documentation and/or other materials provided with the distribution.

   - Neither the name of the DIYables.io nor the names of its
     contributors may be used to endorse or promote products derived from
     this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY DIYABLES.IO "AS IS" AND ANY EXPRESS OR
   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
   DISCLAIMED. IN NO EVENT SHALL DIYABLES.IO BE LIABLE FOR ANY DIRECT,
   INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
   SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
   STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
   IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
*/

#include <DIYables_Keypad.h>

DIYables_Keypad::DIYables_Keypad(char *keymap, byte *rowPins, byte *columnPins, byte numRows, byte numCols) {
  _keymap = keymap;
  _row_pins = rowPins;
  _column_pins = columnPins;
  _num_rows = numRows;
  _num_cols = numCols;
  _prev_key = 0;
  _debounce_time = 300; // default value is 300ms
  _prev_time = 0;

  for (int col = 0; col < _num_cols; col++) {
    pinMode(_column_pins[col], OUTPUT);
    digitalWrite(_column_pins[col], HIGH);
    for (int row = 0; row < _num_rows; row++) {
      pinMode(_row_pins[row], INPUT_PULLUP);
    }
  }
}



char DIYables_Keypad::getKey() {
  //char key = 0;
  for (int col = 0; col < _num_cols; col++) {
    digitalWrite(_column_pins[col], LOW);
    for (int row = 0; row < _num_rows; row++) {
      if(digitalRead(_row_pins[row]) == LOW) {
		char key = _keymap[row * _num_cols + col];
		
		if((_prev_key != key) || (_prev_key == key && (millis() - _prev_time) > _debounce_time)) {
			_prev_key  = key;
			_prev_time = millis();
			digitalWrite(_column_pins[col], HIGH);
			return key;
		}
	  }
    }
	digitalWrite(_column_pins[col], HIGH);
  }
  return 0;
}


void DIYables_Keypad::setDebounceTime(unsigned long time) {
  _debounce_time = time;
}

