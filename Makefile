ALL =						\
 404						\
 auth						\
 compress					\
 connect-to					\
 dashdash					\
 debug-callback					\
 dns-servers					\
 easy-init					\
 easy-perform					\
 easy-setopt					\
 follow						\
 getinfo					\
 global						\
 global-trace					\
 idn						\
 interface					\
 keepalive					\
 localport					\
 lowspeed					\
 maxspeed					\
 meter						\
 mod-headers					\
 multi						\
 netrc						\
 postfields					\
 progress-cb					\
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
 ifmodified \
 content-type \
 list-headers \
 range \
 put \
 altsvc \
 hsts \
 ipv6only \
 errorbuffer

CFLAGS=-pedantic -Wall
LDFLAGS = -c

all: $(ALL)

clean:
	rm -f $(ALL) *~ a.out
