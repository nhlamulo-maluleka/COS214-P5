CC = g++
CFLAGS = -I -Wall -Werror
LFLAGS = -static
TARGET = Main
OBJECTS = RemoteControlCar.o RemoteControlPlane.o Command.o MoveBackward.o MoveForward.o TurnOn.o TurnOff.o \
Speed.o Fly.o Button.o RemoteControlRocket.o RocketAdapter.o Main.o

all: $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o $(TARGET) && make run

%.o: %.cpp
	$(CC) $< $(CFLAGS) -c -o $@

clean:
	rm *.o $(TARGET)

run:
	./$(TARGET) && make clean