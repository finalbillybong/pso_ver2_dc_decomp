/* Stream buffer refill (Hitachi SHC). */
typedef struct Lock {
    char *data;
    int size;
} Lock;

typedef struct Buffer Buffer;
typedef struct BufferVtbl {
    char unknown0[0x18];
    void (*lock)(Buffer *b, int flags, int size, Lock *out);
    char unknown1c[4];
    void (*unlock)(Buffer *b, int flags, Lock *lk);
} BufferVtbl;
struct Buffer {
    BufferVtbl *vtbl;
};

typedef struct Stream {
    char unknown0;
    char state;
    char unknown2[2];
    int handle;
    char unknown8[4];
    int source;
    char unknown10[8];
    Buffer *buffers[12];
    int frames;
    char unknown4c[0x24];
    char flag70;
    char flag71;
    char flag72;
    char unknown73[0x29];
    int time9c;
    int timea0;
} Stream;

extern int snd_thunk_8c34e0fa(int source);
extern int snd_max_8c34e100(int source);
extern int handle_pos_8c34e89e(int handle);
extern int handle_state_8c34e368(int handle);
extern void snd_thunk_8c34e0ee(int source, int on);
extern int stream_channels_8c350772(Stream *s);
extern int d_8c3fb414;
extern void *memset(void *p, int c, int n);

void stream_refill_8c351770(Stream *s)
{
    int pos;
    int handle;
    int end;
    Lock lk;
    int source;
    int n;
    int size;
    int i;
    Buffer *b;

    handle = s->handle;
    source = s->source;
    pos = snd_thunk_8c34e0fa(source);
    end = snd_max_8c34e100(source);
    if (pos < s->frames) {
        if (end > handle_pos_8c34e89e(handle)) {
            if (handle_state_8c34e368(s->handle) != 3) goto check;
        }
    }
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto la0;
la0:
    if (s->flag70 == 0) {
        if (s->flag72 == 0) {
            snd_thunk_8c34e0ee(source, 1);
            s->time9c = 0;
            s->timea0 = d_8c3fb414;
        }
        s->state = 3;
    }
    s->flag71 = 1;
check:
    if (handle_state_8c34e368(s->handle) == 3) {
        n = stream_channels_8c350772(s);
        size = s->frames * n * 2;
        for (i = 0; i < n; i++) {
            b = s->buffers[i];
            b->vtbl->lock(b, 0, size, &lk);
            memset(lk.data, 0, lk.size);
            b->vtbl->unlock(b, 1, &lk);
        }
    }
}
