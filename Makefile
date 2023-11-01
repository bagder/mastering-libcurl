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
 xfer-id					\
 read-callback					\
 compress					\
 url-set					\
 url-set-parts					\
 url-get-parts					\
 redirect					\
 url-encode					\
 idn						\
 punycode \
 dashdash \
 dns-servers \
 resolve \
 connect-to \
 interface \
 localport \
 keepalive \
 lowspeed

CFLAGS=-pedantic -Wall
LDFLAGS = -c

all: $(ALL)

clean:
	rm -f $(ALL)
