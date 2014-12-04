#include "Buffer.h" 

Buffer::Buffer(uint8_t* buffer, uint32_t size): position_(0),
												size_(size)
{
	buffer_ = std::vector<uint8_t>(buffer, buffer + size);
}

Buffer::~Buffer()
{

}

uint32_t Buffer::size()
{
	return buffer_.size();
}

int8_t Buffer::getChar()
{
	return read<int8_t>();
}
int8_t Buffer::getChar(uint32_t index)
{
	return read<int8_t>(index);
}

uint8_t Buffer::getUChar()
{
	return read<uint8_t>();
}

uint8_t Buffer::getUChar(uint32_t index)
{
	return read<uint8_t>(index);
}

int16_t Buffer::getShort()
{
	return read<int16_t>();
}

int16_t Buffer::getShort(uint32_t index)
{
	return read<int16_t>(index);
}

uint16_t Buffer::getUShort()
{
	return read<uint16_t>();
}

uint16_t Buffer::getUShort(uint32_t index)
{
	return read<uint16_t>(index);
}

int32_t Buffer::getInt()
{
	return read<int32_t>();
}

int32_t Buffer::getInt(uint32_t index)
{
	return read<int32_t>(index);
}

uint32_t Buffer::getUInt()
{
	return read<uint32_t>();
}

uint32_t Buffer::getUInt(uint32_t index)
{
	return read<uint32_t>(index);
}

float Buffer::getFloat()
{
	return read<float>();
}

float Buffer::getFloat(uint32_t index)
{
	return read<float>(index);
}

double Buffer::getDouble()
{
	return read<double>();
}

double Buffer::getDouble(uint32_t index)
{
	return read<double>(index);
}

long Buffer::getLong()
{
	return read<long>();
}

long Buffer::getLong(uint32_t index)
{
	return read<long>(index);
}

unsigned long Buffer::getULong()
{
	return read<unsigned long>();
}

unsigned long Buffer::getULong(uint32_t index)
{
	return read<unsigned long>(index);
}

int64_t Buffer::getLongLong()
{
	return read<int64_t>();
}

int64_t Buffer::getLongLong(uint32_t index)
{
	return read<int64_t>(index);
}

uint64_t Buffer::getULongLong()
{
	return read<uint64_t>();
}

uint64_t Buffer::getULongLong(uint32_t index)
{
	return read<uint64_t>(index);
}

