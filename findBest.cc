//Cam Pribulsky
//Created 2 Mar 2020

bool findBest(uint16_t board[r][c], /*stack*/)
{
  //if cell empty, mark all digits valid
  for (int r = 0; r < 9; r++)
  {
    for (int c = 0; c < 9; c++)
    {

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
