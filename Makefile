ALL = global					\
 easy-init					\
 easy-setopt					\
 easy-perform					\
 write-callback					\
 multi

CFLAGS=-pedantic -Wall
LDFLAGS = -c

all: $(ALL)

clean:
	rm -f $(ALL)
