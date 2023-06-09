CC = g++
CFLAGS = -g -W -Wall -O2 -Qunused-arguments
TARGET = libqueue.a
SOURCE = $(wildcard ./*.cpp)
OBJECT = $(patsubst %.cpp, %.o, $(SOURCE))

all : $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(TARGET): $(OBJECT)
	$(AR) rcv $@ $<
	ranlib $@
	cp $@ ../Lib/

clean : 
	rm  *.o *.a
	rm ../Lib/*.a
