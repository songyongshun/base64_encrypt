compiling:
	g++ encrypt.cpp -o encrypt
	g++ decode.cpp -o decode
run:
	./encrypt
	./decode
the EncryptBase64.h is saved as utf-8 format, and must be. differet with the base64_decode repository for gb.
This repository is works for utf-8.

As shown by http://www.ruanyifeng.com/blog/2008/06/base64.html, utf-8 and gbk is different for base64.
