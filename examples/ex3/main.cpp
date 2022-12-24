#include <iostream>
#include <bitset>
#include <cstring>
#include "Buffer.h"

/*
		// Int
		int32_t getInt();
		int32_t getInt(uint32_t index);
		
		// Unsigned int
		uint32_t getUInt();
		uint32_t getUInt(uint32_t index);
		
		// Float
		float getFloat();
		float getFloat(uint32_t index);
		
		// Double
		double getDouble();
		double getDouble(uint32_t index);
		
		// Long
		int64_t getLong();
		int64_t getLong(uint32_t index);
		
		// Unsigned long
		uint64_t getULong();
		uint64_t getULong(uint32_t index);
*/

int main(int argc, char** argv)
{
	// Example - get int, float, double and long values
	{
		// Values
		int int_value = 1024;
		unsigned int unsigned_int_value = 4800;
		float float_value = 17.901;
		double double_value = -0.1;
		long long_value = -2147483000;
		unsigned long unsigned_long_value = 4194967195;
		int64_t long_long_value = 2147483000;
		uint64_t unsigned_long_long_value = 123456780;

		// Init buffer
		int size = sizeof(int) +
						sizeof(unsigned int) +
						sizeof(float) +
						sizeof(double) +
						sizeof(long) +
						sizeof(unsigned long) +
						sizeof(int64_t) +
						sizeof(uint64_t);

		unsigned char *_byteBuffer = new unsigned char[size];

		// Put values in buffer
		int pos = 0;

		std::memcpy(&_byteBuffer[pos], (uint8_t*)&int_value, sizeof(int));
		pos += sizeof(int);
		std::memcpy(&_byteBuffer[pos], (uint8_t*)&unsigned_int_value, sizeof(unsigned int));
		pos += sizeof(unsigned int);
		std::memcpy(&_byteBuffer[pos], (uint8_t*)&float_value, sizeof(float));
		pos += sizeof(float);
		std::memcpy(&_byteBuffer[pos], (uint8_t*)&double_value, sizeof(double));
		pos += sizeof(double);
		std::memcpy(&_byteBuffer[pos], (uint8_t*)&long_value, sizeof(long));
		pos += sizeof(long);
		std::memcpy(&_byteBuffer[pos], (uint8_t*)&unsigned_long_value, sizeof(unsigned long));
		pos += sizeof(unsigned long);
		std::memcpy(&_byteBuffer[pos], (uint8_t*)&long_long_value, sizeof(int64_t));
		pos += sizeof(int64_t);
		std::memcpy(&_byteBuffer[pos], (uint8_t*)&unsigned_long_long_value, sizeof(uint64_t));

		// Init Buffer class
		Buffer b(_byteBuffer, size);

		// Print values
		std::cout << "Using the class Buffer, getInt() = " << b.getInt() << std::endl;
		std::cout << "Using the class Buffer, getUInt() = " << b.getUInt() << std::endl;
		std::cout << "Using the class Buffer, getFloat() = " << b.getFloat() << std::endl;
		std::cout << "Using the class Buffer, getDouble() = " << b.getDouble() << std::endl;
		std::cout << "Using the class Buffer, getLong() = " << b.getLong() << std::endl;
		std::cout << "Using the class Buffer, getULong() = " << b.getULong() << std::endl;
		std::cout << "Using the class Buffer, getLongLong() = " << b.getLongLong() << std::endl;
		std::cout << "Using the class Buffer, getULongLong() = " << b.getULongLong() << std::endl;

		std::cout << std::endl;		

		// Print values
		std::cout << "Using the class Buffer, getInt() = " << b.getInt(0) << std::endl;
		std::cout << "Using the class Buffer, getUInt() = " << b.getUInt(4) << std::endl;
		std::cout << "Using the class Buffer, getFloat() = " << b.getFloat() << std::endl;
		std::cout << "Using the class Buffer, getDouble() = " << b.getDouble() << std::endl;
		std::cout << "Using the class Buffer, getLong() = " << b.getLong(20) << std::endl;
		std::cout << "Using the class Buffer, getULong() = " << b.getULong() << std::endl;
		std::cout << "Using the class Buffer, getLongLong() = " << b.getLongLong() << std::endl;
		std::cout << "Using the class Buffer, getULongLong() = " << b.getULongLong() << std::endl;

		std::cout << std::endl;
	}

	return 0;
}
