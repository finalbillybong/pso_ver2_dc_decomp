/* Starts a stream once its channel is idle (Hitachi SHC). */
typedef struct Channel {
    int handle;
    char unknown4[0x34 - 4];
    int active;
    int unknown38;
    void (*callback)(void);
    int pending;
} Channel;

typedef struct Inner {
    char unknown0[8];
    Channel channel;
} Inner;

typedef struct Outer {
    char unknown0[0xfc0];
    Inner inner;
} Outer;

typedef struct Stream {
    int data;
    int unknown4[2];
    int start;
    int end;
} Stream;

typedef struct Player {
    char unknown0[0x2774];
    char area[0x1000];
    char unknown_rest[0x56b4 - 0x2774 - 0x1000];
    char *streams;
} Player;

extern void stream_open_8c34df6c(int handle, int start, int end, int limit);
extern void stream_play_8c350c6c(int handle, int flag);
extern void stream_done_8c35ec6a(void);

static Stream *next_stream_8c35f596(Player *p);

int stream_start_8c35f53c(Player *p)
{
    Stream *s;
    Channel *c;
    int h;
    char *q;
    if ((s = next_stream_8c35f596(p)) == 0) goto out;
    q = p->area + 0xfc0;
    c = (Channel *)(q + 8);
    h = c->handle;
    if (c->active != 0) goto out;
    if (s->data == 0) goto out;
    stream_open_8c34df6c(h, s->start, s->end, 0x7fffffff);
    stream_play_8c350c6c(h, 0);
    c->active = 1;
    c->callback = stream_done_8c35ec6a;
out:
    return 0;
}

static Stream *next_stream_8c35f596(Player *p)
{
    Channel *c;
    char *q = p->area + 0xfc0;
    c = (Channel *)(q + 8);
    if (p->streams == 0) return 0;
    if (c->pending > 0) return 0;
    return (Stream *)(p->streams + 0xcf4);
}
