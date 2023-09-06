OBJS1 = part1.o prime_func.o 
OBJS2 = part2.o prime_func.o
OBJS3 = part3.o
OBJS4 = part4.o
SRCS1 = part1.c prime_func.c
SRCS2 = part2.c prime_func.c
SRCS3 = part3.c
SRCS4 = part4.c
HEADER = shared.h
CFLAGS = -Wall -Werror -std=c11 -g3
LDFLAGS = -lm
TARGETS = part1 part2 part3 part4
CC = gcc
	
all: $(TARGETS)

.PHONY: clean

$(OBJS1): $(SRCS1) $(HEADER)
	$(CC) $(CFLAGS) -c $(@:.o=.c)

part1: $(OBJS1) 
	$(CC) $(OBJS1) -o $(@) $(LDFLAGS)

$(OBJS2): $(SRCS2) $(HEADER)
	$(CC) $(CFLAGS) -c $(@:.o=.c)

part2: $(OBJS2)
	$(CC) $(OBJS2) -o $(@) $(LDFLAGS)

$(OBJS3): $(SRCS3) 
	$(CC) $(CFLAGS) -c $(@:.o=.c)

part3: $(OBJS3)
	$(CC) $(OBJS3) -o $(@) $(LDFLAGS)

$(OBJS4): $(SRCS4) 
	$(CC) $(CFLAGS) -c $(@:.o=.c)

part4: $(OBJS4)
	$(CC) $(OBJS4) -o $(@) $(LDFLAGS)

clean:
	rm -f $(OBJS1) $(OBJS2) $(OBJS3) $(OBJS4) $(TARGETS)