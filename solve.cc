void markInvalid (uint16_t &cell, uint16_t i)
{
  cell = cell & ~(IS_O_VALID >> i);
}

bool isValid(unit16_t cell, uint16_t i)
{
  return ((cell & (IS_O_VALID >> i)!=0);
}
