/* File stream helpers: seek, position, refresh, stop and sizing (Hitachi SHC). */
typedef struct Stream {
    char unknown0;
    char state;
    char open;
    char eof;
    int unknown4;
    int handle;
    int position;
    int base;
    int length;
    char unknown18[0x30 - 0x18];
    int sectors;
    int pending;
    int arg_a;
    int arg_b;
} Stream;

extern void file_seek_8c357ff4(int handle, int offset, int whence);
extern int file_tell_8c357fba(int handle);
extern void lock_8c34bbfc(void);
extern void file_close_8c3580a2(int handle);
extern void unlock_8c34bc24(void);
extern int g_counter_8c3facb0;

int stream_seek_8c349930(Stream *s, int offset)
{
    Stream *p = s;
    file_seek_8c357ff4(p->handle, p->base + offset, 0);
    s = p;
    return file_tell_8c357fba(s->handle) - s->base;
}

int stream_position_8c34995a(Stream *s)
{
    if (s->handle != 0) return file_tell_8c357fba(s->handle) - s->base;
    return 0;
}

int stream_refresh_8c34997e(Stream *s)
{
    if (s->length == 0) {
        s->pending = 0;
        s->position = 0;
        s->state = 3;
    } else {
        s->state = 2;
        s->pending = 0;
        s->position = stream_position_8c34995a(s);
        s->eof = 0;
    }
    return 1;
}

void stream_stop_8c3499b2(Stream *s)
{
    lock_8c34bbfc();
    if (s->open == 1 && s->handle != 0) {
        file_close_8c3580a2(s->handle);
        s->open = 0;
    }
    unlock_8c34bc24();
    s->state = 1;
}

void stream_set_args_8c3499e2(Stream *s, int a, int b)
{
    s->arg_a = a;
    s->arg_b = b;
}

void stream_set_sectors_8c3499e8(Stream *s, int sectors)
{
    if (sectors >= 0) s->sectors = sectors;
    else s->sectors = (s->length + 0x7ff) / 2048;
}

void counter_increment_8c349a08(void)
{
    g_counter_8c3facb0++;
}
