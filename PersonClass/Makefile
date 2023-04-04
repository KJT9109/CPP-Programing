CC = g++
CFLAGS = -g -W -Wall -O2
TARGET = test
SOURCE = $(wildcard ./*.cpp)
OBJECT = $(patsubst %.cpp, %.o, $(SOURCE))

all : $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

$(TARGET): $(OBJECT)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm  *.o $(TARGET)
