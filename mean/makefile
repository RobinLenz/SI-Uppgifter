ifeq ($(OS), Windows_NT)
	INCLUDES := Includes\\
	BUILD := Build\\
	BIN := Bin\\
	EXECUTABLE := $(BIN)mean.exe
	SOURCE := Source\\
	DELETE := del
else
	INCLUDES := Includes/
	BUILD := Build/
	BIN := Bin/
	EXECUTABLE := $(BIN)mean
	SOURCE := Source/
	DELETE := rm
endif

CPP := g++
CPPFLAGS := -std=c++17 -Wall -Wextra -Wpedantic -O0 

all: $(BUILD) $(BIN) $(EXECUTABLE)

$(EXECUTABLE): $(BUILD)main.o  
	$(CPP) $(CPPFLAGS) -g $(BUILD)main.o -o $(EXECUTABLE)


$(BUILD):
ifeq ($(OS), Windows_NT)
	-@ if NOT EXIST $(BUILD) mkdir $(BUILD)
else
	if [ ! -d $(BUILD) ]; then mkdir $(BUILD); fi
endif
$(BIN):
ifeq ($(OS), Windows_NT)
	-@ if NOT EXIST $(BIN) mkdir $(BIN)
else
	if [ ! -d $(BIN) ]; then mkdir $(BIN); fi
endif



$(BUILD)main.o: $(SOURCE)main.cpp 
	$(CPP) $(CPPFLAGS) -c -g $(SOURCE)main.cpp -I$(INCLUDES) -o $(BUILD)main.o


clean:
	-$(DELETE) $(EXECUTABLE) $(BUILD)main.o 