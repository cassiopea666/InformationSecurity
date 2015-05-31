#include <cipher.h>

unsigned char VigenereEncryptSymbol(unsigned char PlainSymbol, unsigned char Key) {
  //key - row, plaintext symbol - column of Vigenere square
  int i = (int) Key, j = (int) PlainSymbol;
  if ((i + j) <= 255) {
    return (unsigned char) (i + j);
  }
  else {
    return (unsigned char) (i + j - 255);
  }
}


unsigned char VigenereDecryptSymbol(unsigned char CipherSymbol, unsigned char KeySymbol) {
  int i = KeySymbol, j = CipherSymbol;
  return (j - i);
}
