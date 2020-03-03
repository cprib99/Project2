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

bool findBest(uint16_t puzzle);

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

bool findBest(uint16_t puzzle, /*stack*/)
{
  //if cell empty, mark all digits valid
  for (int r = 0; r < 9; r++)
  {
    for (int c = 0; c < 9; c++)
    {
      if (puzzle[r][c] = '0')//cell empty
        ;  //mark all digits as valid choices
    }
  }

  //if cell filled in, mak digit as invalid for row/column/3x3
  for (int r = 0; r < 9; r++)
  {
    for (int c = 0; c < 9; c++)
    {

    }
  }

  int low = 10;
  for (int r = 0; r < 9; r++)
  {
    for (int c = 0; c < 9; c++)
    {
      if (puzzle[r][c] = '0')
        //count 1-bits in valid choices for board[i][j]???
        //for (int count )
        if (count < low)
        {
          low = count;
          int iBest = i;
          int jBest = j;
        }
    }
  }
  if low = 10
    return false;

  //Mark board[iBest][jBest] as filled in
  //push(iBest,jBest onto stack)
  return true;
}
