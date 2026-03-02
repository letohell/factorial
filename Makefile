CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=factorial
SRC=factorial.c

all: check_compiler $(TARGET)

check_compiler:
	@which $(CC) > /dev/null || (echo "Ошибка: gcc не установлен"; exit 1)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
