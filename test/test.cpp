#include "Buffer.h"
#include <gtest/gtest.h>

TEST(Buffer, Size)
{
  // Expect size to be equal.
  unsigned char *_byteBuffer = new unsigned char[5];
  Buffer b(_byteBuffer, sizeof(char) * 5);
  // Expect equality.
  EXPECT_EQ(5, b.size());
}
