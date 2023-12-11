#include <iostream>
#include <bitset>
#include <cstring>
#include "Buffer.h"

int main(int argc, char** argv)
{

	// Example - get short
	{
		// Init buffer
		unsigned char *_byteBuffer = new unsigned char[2];
		short value = 1234;

      _byteBuffer[0] = value & 0xff;
      _byteBuffer[1] = value >> 8 & 0xff;

		// Init Buffer class
		Buffer b(_byteBuffer, sizeof(short));

		// Print values
		std::cout << "Using the class Buffer, getShort() = " << b.getShort() << std::endl;

		std::cout << std::endl;
	}

	// Example - get signed and unsigned short
	{
		// Init buffer
		unsigned char *_byteBuffer = new unsigned char[8];
		short value1 = 32767;
		unsigned short value2 = 65534;
		short value3 = -32767;
		unsigned short value4 = 65535;

		int pos = 0;

		std::memcpy(&_byteBuffer[pos], (uint8_t*)&value1, sizeof(short));
		pos += 2;
		std::memcpy(&_byteBuffer[pos], (uint8_t*)&value2, sizeof(short));
		pos += 2;
		std::memcpy(&_byteBuffer[pos], (uint8_t*)&value3, sizeof(short));
		pos += 2;
		std::memcpy(&_byteBuffer[pos], (uint8_t*)&value4, sizeof(short));

		// Init Buffer class
		Buffer b(_byteBuffer, sizeof(short)*4);

		// Print values
		std::cout << "Using the class Buffer, getShort() = " << b.getShort() << std::endl;
		std::cout << "Using the class Buffer, getUnsignedShort() = " << b.getUShort() << std::endl;
		std::cout << "Using the class Buffer, getShort() = " << b.getShort() << std::endl;
		std::cout << "Using the class Buffer, getUnsignedShort() = " << b.getUShort() << std::endl;

		std::cout << std::endl;
	}

	return 0;
}
