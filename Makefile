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
 xfer-id \
 read-callback \
 compress \
 url-set \
 url-set-parts


CFLAGS=-pedantic -Wall
LDFLAGS = -c

all: $(ALL)

clean:
	rm -f $(ALL)
