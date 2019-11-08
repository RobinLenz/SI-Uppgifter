ifeq ($(OS), Windows_NT)
	INCLUDES := Includes\\
	BUILD := Build\\
	BIN := Bin\\
	EXECUTABLE := $(BIN)Test.exe
	SOURCE := Source\\
	DELETE := del
else
	INCLUDES := Includes/
	BUILD := Build/
	BIN := Bin/
	EXECUTABLE := $(BIN)Test
	SOURCE := Source/
	DELETE := rm
endif

CPP := g++
CPPFLAGS := -std=c++17 -Wall -Wextra -Wpedantic -O0 

all: $(EXECUTABLE)

$(EXECUTABLE): $(BUILD)main.o  
	$(CPP) $(CPPFLAGS) -g $(BUILD)main.o -o $(EXECUTABLE)

$(BUILD)main.o: $(SOURCE)main.cpp 
	$(CPP) $(CPPFLAGS) -c -g $(SOURCE)main.cpp -I$(INCLUDES) -o $(BUILD)main.o


clean:
	-$(DELETE) $(EXECUTABLE) $(BUILD)main.o