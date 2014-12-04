/* Copyright (C) 
 * 2014 - Fran Tena
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */

/**
 * @file Buffer.h
 * @brief Class to read data from a byte buffer (usually a char array)
 * @author Fran Tena
 * @version 0.1
 * @date 2014-11-28
 */


#ifndef _BUFFER_H_
#define _BUFFER_H_

#include <stdint.h>
#include <vector>

class Buffer
{
public:

	/**
	 * @brief Constructor.
	 *
	 * @param buffer
	 * @param size
	 */
	Buffer(uint8_t* buffer, uint32_t size);

	/**
	 * @brief Destructor.
	 */
	virtual ~Buffer();

	/**
	 * @brief Method to get the buffer size.
	 *
	 * @return Buffer size.
	 */
	uint32_t size();

	/*
	 * Methods to read values from buffer. Each method increases the position
	 * according to the data size.
	 *
	 * If you pass an index, from that moment the new position for the buffer
	 * will be that index.
	 */

	/**
	 * @brief Method to get a char from the buffer. After calling this
	 * method, the position in the buffer is increased by one byte.
	 *
	 * @return Data with a size of int8 (equivalent to char)
	 */
	int8_t getChar();
	/**
	 * @brief Method to get a char from the the position passed to the
	 * function. After calling this method, the position in the buffer
	 * is increased by one byte.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of int8 (equivalent to char)
	 */
	int8_t getChar(uint32_t index);

	/**
	 * @brief Method to get an unsigned char from the buffer. After calling
	 * this method, the position in the buffer is increased by one byte.
	 *
	 * @return Data with a size of unsigned int8 (equivalent to unsigned char)
	 */
	uint8_t getUChar();
	/**
	 * @brief Method to get an unsigned char from the the position passed to
	 * the function. After calling this method, the position in the buffer
	 * is increased by one byte.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of unsigned int8 (equivalent to unsigned char)
	 */
	uint8_t getUChar(uint32_t index);

	/**
	 * @brief Method to get a short from the buffer. After calling
	 * this method, the position in the buffer is increased by two bytes.
	 *
	 * @return Data with a size of int16 (equivalent to short)
	 */
	int16_t getShort();
	/**
	 * @brief Method to get a short from the the position passed to
	 * the function. After calling this method, the position in the buffer
	 * is increased by two bytes.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of int16 (equivalent to short)
	 */
	int16_t getShort(uint32_t index);

	/**
	 * @brief Method to get an unsigned short from the buffer. After calling
	 * this method, the position in the buffer is increased by two bytes.
	 *
	 * @return Data with a size of unsigned int16 (equivalent to unsigned short)
	 */
	uint16_t getUShort();
	/**
	 * @brief Method to get an unsigned short from the the position passed to
	 * the function. After calling this method, the position in the buffer
	 * is increased by two bytes.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of unsigned int16 (equivalent to unsigned short)
	 */
	uint16_t getUShort(uint32_t index);

	/**
	 * @brief Method to get an integer from the buffer. After calling
	 * this method, the position in the buffer is increased by four bytes.
	 *
	 * @return Data with a size of int32 (equivalent to int)
	 */
	int32_t getInt();
	/**
	 * @brief Method to get an integer from the the position passed to
	 * the function. After calling this method, the position in the buffer
	 * is increased by four bytes.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of int32 (equivalent to int)
	 */
	int32_t getInt(uint32_t index);

	/**
	 * @brief Method to get an unsigned integer from the buffer. After calling
	 * this method, the position in the buffer is increased by four bytes.
	 *
	 * @return Data with a size of unsigned int32 (equivalent to unsigned int)
	 */
	uint32_t getUInt();
	/**
	 * @brief Method to get an unsigned integer from the the position passed to
	 * the function. After calling this method, the position in the buffer
	 * is increased by four bytes.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of unsigned int32 (equivalent to unsigned int)
	 */
	uint32_t getUInt(uint32_t index);

	/**
	 * @brief Method to get a float from the buffer. After calling
	 * this method, the position in the buffer is increased by four bytes.
	 *
	 * @return Data with a size of float.
	 */
	float getFloat();
	/**
	 * @brief Method to get a float from the the position passed to
	 * the function. After calling this method, the position in the buffer
	 * is increased by four bytes.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of float.
	 */
	float getFloat(uint32_t index);

	/**
	 * @brief Method to get a double from the buffer. After calling
	 * this method, the position in the buffer is increased by eight bytes.
	 *
	 * @return Data with a size of double.
	 */
	double getDouble();
	/**
	 * @brief Method to get a double from the the position passed to
	 * the function. After calling this method, the position in the buffer
	 * is increased by eight bytes.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of double.
	 */
	double getDouble(uint32_t index);

	/**
	 * @brief Method to get a long from the buffer. After calling
	 * this method, the position in the buffer is increased by four bytes.
	 *
	 * @return Data with a size of long.
	 */
	long getLong();
	/**
	 * @brief Method to get a long from the the position passed to
	 * the function. After calling this method, the position in the buffer
	 * is increased by four bytes.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of long.
	 */
	long getLong(uint32_t index);

	/**
	 * @brief Method to get an unsigned long from the buffer. After calling
	 * this method, the position in the buffer is increased by four bytes.
	 *
	 * @return Data with a size of unsigned long.
	 */
	unsigned long getULong();
	/**
	 * @brief Method to get an unsigned long from the the position passed to
	 * the function. After calling this method, the position in the buffer
	 * is increased by four bytes.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of unsigned long.
	 */
	unsigned long getULong(uint32_t index);

	/**
	 * @brief Method to get a long long from the buffer. After calling
	 * this method, the position in the buffer is increased by eight bytes.
	 *
	 * @return Data with a size of long long.
	 */
	int64_t getLongLong();

	/**
	 * @brief Method to get a long long from the the position passed
	 * to the function. After calling this method, the position in the buffer
	 * is increased by eight bytes.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of long long.
	 */
	int64_t getLongLong(uint32_t index);

	/**
	 * @brief Method to get an unsigned long long from the buffer. After
	 * calling this method, the position in the buffer is increased by eight
	 * bytes.
	 *
	 * @return Data with a size of long long.
	 */
	uint64_t getULongLong();
	/**
	 * @brief Method to get an unsigned long long from the the position passed
	 * to the function. After calling this method, the position in the buffer
	 * is increased by eight bytes.
	 *
	 * @param index position from which the data will be read.
	 *
	 * @return Data with a size of long long.
	 */
	uint64_t getULongLong(uint32_t index);


private:
	template <typename T> T read()
	{
		return read<T>(position_);
	}

	template <typename T> T read(uint32_t pos)
	{
		if ( ( pos + sizeof(T) ) <= buffer_.size() )
		{
			T data = *reinterpret_cast<T*>(&buffer_[pos]);
			position_ = pos + sizeof(T);
			return data;
		}

		return 0;
	}

	/**
	 * @brief Buffer data.
	 */
	std::vector<uint8_t> buffer_;

	/**
	 * @brief Current index in the buffer.
	 */
	uint32_t position_;


	/**
	 * @brief Buffer size.
	 */
	uint32_t size_;
};

#endif // _BUFFER_H_
