#ifndef CIPHER_H
#define CIPHER_H

unsigned char VigenereEncryptSymbol(unsigned char PlainSymbol, unsigned char Key);
int VigenereDecryptSymbol(int CipherSymbol, int KeySymbol);

#endif // CIPHER

