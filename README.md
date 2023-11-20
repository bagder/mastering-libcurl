# mastering-libcurl

The presentation itself will be live-streamed and recorded, starting with the
first episode on November 16, 2023. It will be done as a two part video series
where each part will be up to or around two hours long. Part two streams on
November 20.

[Video info](https://daniel.haxx.se/blog/2023/11/01/mastering-libcurl/)

## Source code

Materials related to the extensive video tutorial "mastering libcurl"

All source code snippets in the video presentation have names. They are all
provided in this repository as stand-alone source files to be able to learn
from, mimic and copy and paste from.

The examples present here might be modified slightly to make sure they
build warning free against a modern libcurl on a modern system.

## Examples

### Part one

[Video](https://youtu.be/ZQXv5v9xocU?si=mkAXM9S3reAGHAzO)
[slides](https://www.slideshare.net/bagder/mastering-libcurl-part-1)

| Slide # | link                                 |
|---------|--------------------------------------|
| 50      | [global.c](global.c)                 |
| 51      | [easy-init.c](easy-init.c)           |
| 54      | [easy-setopt.c](easy-setopt.c)       |
| 55      | [easy-perform.c](easy-perform.c)     |
| 59      | [write-callback.c](write-callback.c) |
| 65      | [multi.c](multi.c)                   |
| 69      | [errorbuffer.c](errorbuffer.c)       |
| 70      | [debug-callback.c](debug-callback.c) |
| 71      | [global-trace.c](global-trace.c)     |
| 72      | [xfer-id.c](xfer-id.c)               |
| 73      | [version.c](version.c)               |
| 78      | [resolve.c](resolve.c)               |
| 79      | [connect-to.c](connect-to.c)         |
| 80      | [dns-servers.c](dns-servers.c)       |
| 81      | [interface.c](interface.c)           |
| 82      | [localport.c](localport.c)           |
| 83      | [keepalive.c](keepalive.c)           |
| 84      | [ipv6only.c](ipv6only.c)             |
| 85      | [auth.c](auth.c)                     |
| 86      | [netrc.c](netrc.c)                   |

### Part two

| Slide # | link                                 |
|---------|--------------------------------------|
| 9       | [write-callback.c](write-callback.c) |
| 11      | [compress.c](compress.c)             |
| 14      | [range.c](range.c)                   |
| 16      | [read-callback.c](read-callback.c)   |
| 24      | [lowspeed.c](lowspeed.c)             |
| 25      | [maxspeed.c](maxspeed.c)             |
| 26      | [meter.c](meter.c)                   |
| 27      | [progress-cb.c](progress-cb.c)       |
| 29      | [getinfo.c](getinfo.c)               |
| 32      | [dashdash.c](dashdash.c)             |
| 37      | [share-cookies.c](share-cookies.c)   |
| 53      | [proxy.c](proxy.c)                   |
| 53      | [proxy-scheme.c](proxy-scheme.c)     |
| 58      | [404.c](404.c)                       |
| 59      | [follow.c](follow.c)                 |
| 62      | [postfields.c](postfields.c)         |
| 66      | [mod-headers.c](mod-headers.c)       |
| 67      | [ifmodified.c](ifmodified.c)         |
| 68      | [range.c](range.c)                   |
| 69      | [put.c](put.c)                       |
| 73      | [altsvc.c](altsvc.c)                 |
| 75      | [hsts.c](hsts.c)                     |
| 80      | [content-type.c](content-type.c)     |
| 81      | [list-headers.c](list-headers.c)     |
| 86      | [url-set.c](url-set.c)               |
| 87      | [url-set-parts.c](url-set-parts.c)   |
| 88      | [url-get-parts.c](url-get-parts.c)   |
| 89      | [redirect.c](redirect.c)             |
| 90      | [url-encode.c](url-encode.c)         |
| 91      | [idn.c](idn.c)                       |
| 91      | [punycode.c](punycode.c)             |

## License

All examples are (C) Daniel Stenberg, licensed to use under [MIT](LICENSE).
