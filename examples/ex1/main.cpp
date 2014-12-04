#include <iostream>
#include "Buffer.h"

int main(int argc, char** argv)
{

	// Example - using methods to get char and unsigned char
	{
		// Init buffer
		unsigned char *_byteBuffer = new unsigned char[5];

		// Put values in buffer
		unsigned char uShort_pos0 = 11;
		unsigned char uShort_pos1 = 3;
		unsigned char uShort_pos2 = 10;
		unsigned char uShort_pos3 = 128;
		char char_pos4 = 'x';
		
      _byteBuffer[0] = uShort_pos0;
      _byteBuffer[1] = uShort_pos1;
      _byteBuffer[2] = uShort_pos2;
      _byteBuffer[3] = uShort_pos3;
      _byteBuffer[4] = char_pos4;

		// Init Buffer class
		Buffer b(_byteBuffer, sizeof(char)*5);

		// Print values
		std::cout << "Using the class Buffer, first getChar() = " << (short)b.getChar() << std::endl;
		std::cout << "Using the class Buffer, second getChar() = " << (short)b.getChar() << std::endl;
		std::cout << "Using the class Buffer, third getChar() = " << (short)b.getChar() << std::endl;
		std::cout << "Using the class Buffer, fourth getChar() = " << (unsigned short)b.getUChar(3) << std::endl;
		std::cout << "Using the class Buffer, fith getChar() = " << (char)b.getChar(4) << std::endl;

		std::cout << std::endl;

		std::cout << "Using the class Buffer, getChar(3) = " << (unsigned short)b.getUChar(3) << std::endl;
		std::cout << "Using the class Buffer, getChar(2) = " << (short)b.getChar(2) << std::endl;
		std::cout << "Using the class Buffer, getChar(1) = " << (short)b.getChar(1) << std::endl;
		std::cout << "Using the class Buffer, getChar(0) = " << (short)b.getChar(0) << std::endl;

		std::cout << std::endl;
	}

	return 0;
}
