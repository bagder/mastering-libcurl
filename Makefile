ALL =						\
 compress					\
 connect-to					\
 dashdash					\
 debug-callback					\
 dns-servers					\
 easy-init					\
 easy-perform					\
 easy-setopt					\
 global						\
 global-trace					\
 idn						\
 interface					\
 keepalive					\
 localport					\
 lowspeed					\
 multi						\
 proxy						\
 proxy-scheme					\
 punycode					\
 read-callback					\
 redirect					\
 resolve					\
 share-cookies					\
 url-encode					\
 url-get-parts					\
 url-set					\
 url-set-parts					\
 version					\
 write-callback					\
 xfer-id \
 getinfo \
 404 \
 follow \
 postfields \
 maxspeed \
 meter \
 progress-cb \
 auth

CFLAGS=-pedantic -Wall
LDFLAGS = -c

all: $(ALL)

clean:
	rm -f $(ALL)
