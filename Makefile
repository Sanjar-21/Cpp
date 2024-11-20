# Compiler va flaglar
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Yaratiladigan dasturlar
TARGETS = hello uzgaruvchilar w3-1

all: $(TARGETS)

# Har bir fayl uchun maqsadlar
hello: hello.cpp
	$(CXX) $(CXXFLAGS) -o hello hello.cpp

uzgaruvchilar: uzgaruvchilar.cpp
	$(CXX) $(CXXFLAGS) -o uzgaruvchilar uzgaruvchilar.cpp

w3-1: w3-1.cpp
	$(CXX) $(CXXFLAGS) -o w3-1 w3-1.cpp

# Tozalash uchun maqsad
clean:
	rm -f $(TARGETS)
