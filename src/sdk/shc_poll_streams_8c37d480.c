/* SDK pool group 0x8c37d480 (Hitachi SHC): two stubs returning 1 and a poll of
   all 0x44-byte stream entries, finishing or releasing them. */
typedef struct Stream {
    int handle;
    int unknown4[3];
    unsigned int flags;
    int buffer;
    unsigned int format;
    char unknown1c[0x44 - 0x1c];
} Stream;

extern Stream *g_streams_8c3fc180;
extern unsigned int g_stream_count_8c3fc184;
extern int convert_format_8c38189e(unsigned int);
extern void free_buffer_8c3844a6(int);
extern void restart_8c381d24(int, int, int);
extern void release_stream_8c381b4e(Stream *);

int stub_a_8c37d480(void)
{
    return 1;
}

int stub_b_8c37d484(void)
{
    return 1;
}

void poll_streams_8c37d488(void)
{
    unsigned int i;
    Stream *stream;
    int result;
    for (i = 0; i < g_stream_count_8c3fc184; i++) {
        stream = &g_streams_8c3fc180[i];
        if (stream->flags & 1) {
            result = convert_format_8c38189e((stream->format >> 16) & 0xff00);
            free_buffer_8c3844a6(stream->buffer);
            if (result != 1) {
                stream->flags &= ~1;
                if (stream->flags == 0) release_stream_8c381b4e(stream);
            } else {
                { int h = stream->handle; restart_8c381d24(h, 1, 0); }
            }
        }
        if (stream->handle != -1 && !(stream->flags & 3)) release_stream_8c381b4e(stream);
    }
}
