/* Positions a stream window and seeks to it (Hitachi SHC). */
typedef struct Stream {
    int unknown0;
    int base;
    char unknown8[0x24 - 8];
    int position;
    char unknown28[0x44 - 0x28];
    int offset;
} Stream;

extern void *g_system_8c3fac48;
extern void stream_locate_8c346468(int position, int base, int mode, int *offset);
extern int stream_seek_8c346e1c(Stream *s, int sector);
extern void report_error_8c346118(void *where, int code);

int set_window_8c345864(Stream *s, char page, int mode)
{
    int err;
    Stream *t = s;
    if (g_system_8c3fac48 != 0) goto ready;
    err = 0xd000001;
    goto done;
ready:
    if (s == 0) {
        err = 0x7000103;
        goto done;
    }
    t->base = page << 8;
    if (mode == 0) {
        t->position = t->base;
        t->offset = 0;
    } else {
        if (mode >= 0) goto locate;
        err = 0x3000001;
        goto done;
locate:
        stream_locate_8c346468(t->position, t->base, mode, &t->offset);
        if (t->offset != 0) t->position += t->offset;
        else t->position = t->base;
    }
    err = stream_seek_8c346e1c(s, t->position / 256);
    if (err) {
    }
done:
    if (err == 0) goto out;
    report_error_8c346118(set_window_8c345864, err);
out:
    return err;
}
