//Cam Pribulsky
//Created 25 Feb 2020
#include <iostream>
using namespace std;

//set up uints
uint16_t
  board[9][9];
const uint16_t
  VALUE_MASK = 0x000f,
  VALID_MASK = 0x1ff0,
  IS_FILLED_IN = 0x8000,
  IS_O_VALID = 0x2000;

int main()
{
    //read data using cin
    char ch;
    for (int r = 0; r < 9; r++)
    {
      for (int c = 0; c < 9; c++)
      {
        cin >> ch;
          if(ch == '.')
            board[r][c] = '0';
          else
            board[r][c] = IS_FILLED_IN | (ch - '0');
      }
    }

    /*
    for (int r = 0; r < 9; r++)
    {
      for (int c = 0; c < 9; c++)
      {
        cout << (board[r][c]&VALUE_MASK) << " " << endl;
      }
    }
    */
}
