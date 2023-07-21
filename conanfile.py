from conan import ConanFile

class BufferConan(ConanFile):
   settings = "os", "compiler", "build_type", "arch"
   requires = "gtest/1.12.1"
   generators = "CMakeDeps", "CMakeToolchain"

   def build(self):
      cmake = CMake(self)
      cmake.configure()
      cmake.build()
