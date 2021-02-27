#include "assert.h"
#include "EncryptBase64.h" 
#include <iostream>
#include <string>

using namespace std;

int length(const unsigned char *s)  
{  
    int i=0;
    while(*s!='\0')
    {  
        i++;   
        s++;  
    }  
    return i;  
}

int main()
{   
    const unsigned char* pSrc = (const unsigned char*)"严";
    char* pDst=(char*)malloc(sizeof(char));
    int nSrcLen;
    nSrcLen = length(pSrc);
    int nMaxLineLen = 500;
    //this output is needed, otherwise will be malloc error. still don't know why.
    cout << "the number of char: "<< nSrcLen << endl;

    CEncryptBase64 s1;

    s1.Encode(pSrc, pDst, nSrcLen, nMaxLineLen);
    cout << pDst << endl;
}

    //int CEncryptBase64::Decode(const char* pSrc, unsigned char* pDst, int nSrcLen)
 
