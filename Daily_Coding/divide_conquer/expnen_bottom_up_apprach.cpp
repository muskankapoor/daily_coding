// compute x^11
// for x^11. First, compute x^2 then x^4 then x^8 x^9 x^10 x^11

int exponentBU(int base, int power){

  if (power == 0){
    return 1;
  }

  int product = base;
  int currentpow = 1;

  while (currentpow * 2 <= power){

    product *= product;
    currentpow *= 2;
  }

  for (; currentpow < power; currentpow++){
    product *= base;
  }

  return product;
}
