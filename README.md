# mastering-libcurl

The presentation itself will be live-streamed and recorded, starting
with the first episode on November 16, 2023. It will most likely be
done as a two part video series where each part will be up to or around
two hours long.

[Video info](https://daniel.haxx.se/blog/2023/11/01/mastering-libcurl/)

## Examples

Materials related to the extensive video tutorial "mastering libcurl"

All source code snippets in the video presentation have names. They are all
provided in this repository as stand-alone source files to be able to learn
from, mimic and copy and paste from.

The examples present here might be modified slightly to make sure they
build warning free against a modern libcurl on a modern system.

## Index

| Slide # | link                                 |
|---------|--------------------------------------|
| 50      | [global.c](global.c)                 |
| 51      | [easy-init.c](easy-init.c)           |
| 54      | [easy-setopt.c](easy-setopt.c)       |
| 55      | [easy-perform.c](easy-perform.c)     |
| 58      | [write-callback.c](write-callback.c) |
| 64      | [multi.c](multi.c)                   |
| 68      | [debug-callback.c](debug-callback.c) |
| 69      | [global-trace.c](global-trace.c)     |
| 70      | [xfer-id.c](xfer-id.c)               |
| 71      | [version.c](version.c)               |
| 77      | [write-callback.c](write-callback.c) |
| 79      | [compress.c](compress.c)             |
| 84      | [read-callback.c](read-callback.c)   |
| 91      | [resolve.c](resolve.c)               |
| 92      | [connect-to.c](connect-to.c)         |
| 93      | [dns-servers.c](dns-servers.c)       |
| 94      | [interface.c](interface.c)           |
| 95      | [localport.c](localport.c)           |
| 96      | [keepalive.c](keepalive.c)           |
| 98      | [lowspeed.c](lowspeed.c)             |
| 99      | [maxspeed.c](maxspeed.c)             |
| 100     | [meter.c](meter.c)                   |
| 101     | [progress-cb.c](progress-cb.c)       |
| 103     | [auth.c](auth.c)                     |
| 104     | [netrc.c](netrc.c)                   |
| 106     | [getinfo.c](getinfo.c)               |
| 109     | [dashdash.c](dashdash.c)             |
| 114     | [share-cookies.c](share-cookies.c)   |
| 127     | [proxy.c](proxy.c)                   |
| 127     | [proxy-scheme.c](proxy-scheme.c)     |
| 132     | [404.c](404.c)                       |
| 133     | [follow.c](follow.c)                 |
| 136     | [postfields.c](postfields.c)         |
| 140     | [mod-headers.c](mod-headers.c)       |
| 142     | [ifmodified.c](ifmodified.c)         |
| 144     | [range.c](range.c)                   |
| 145     | [put.c](put.c)                       |
| 151     | [content-type.c](content-type.c)     |
| 152     | [list-headers.c](list-headers.c)     |
| 155     | [url-set.c](url-set.c)               |
| 156     | [url-set-parts.c](url-set-parts.c)   |
| 157     | [url-get-parts.c](url-get-parts.c)   |
| 158     | [redirect.c](redirect.c)             |
| 159     | [url-encode.c](url-encode.c)         |
| 160     | [idn.c](idn.c)                       |
| 160     | [punycode.c](punycode.c)             |

## License

All examples are (C) Daniel Stenberg, licensed to use under [MIT](LICENSE).
