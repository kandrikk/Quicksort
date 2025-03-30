CXX = g++ 
TARGET = quicksort

SRC = src/main.cpp src/quicksort.cpp src/helpers.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) -o $(TARGET) $(SRC)

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)




