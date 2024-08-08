#include "MyHash.h"
#include "ResManager.h"

unsigned int MyHash_Hash(LPCTSTR _key)
{
    unsigned int result = 0;
    int i = 0;
    while (_key[i] != '\0')
    {
        result += _key[i];
        result *= 2;
        ++i;
    }
    return result %= HASHSIZE;
}
