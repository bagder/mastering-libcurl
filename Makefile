ALL =						\
 debug-callback					\
 easy-init					\
 easy-perform					\
 easy-setopt					\
 global						\
 global-trace					\
 multi						\
 version					\
 write-callback					\
 xfer-id

CFLAGS=-pedantic -Wall
LDFLAGS = -c

all: $(ALL)

clean:
	rm -f $(ALL)
