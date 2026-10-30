/* Sound stream feed through a buffer interface (Hitachi SHC). */
typedef struct Block {
    char *ptr;
    int size;
} Block;

struct IFace;
typedef struct VTable {
    char unknown0[0x18];
    void (*lock)(struct IFace *i, int a, int pos, Block *b);
    void (*unlock)(struct IFace *i, int a, Block *b);
    char unknown20[4];
    int (*position)(struct IFace *i, int a);
} VTable;

typedef struct IFace {
    VTable *vt;
} IFace;

typedef struct Slot {
    char unknown0[4];
    char name[0x28];
    int active;
    int count;
} Slot;

typedef struct Stream {
    char unknown0[2];
    char filled;
    char unknown3[5];
    IFace *iface;
    Block block;
    int limit;
    int end;
    char unknown1C[4];
    int index;
    int length;
    int handle;
    int info;
    int result;
    char unknown34[4];
    Slot slots[1];
} Stream;

typedef struct Lock {
    IFace *i;
    Block b;
} Lock;

extern int stream_decode_8c352470(int handle, int blocks, char *dst);
extern void stream_log_8c352414();
extern int stream_open_8c352464(char *name, int mode);
extern int stream_info_8c35248e(int handle, int *info);
extern char g_msg_open_8c3f4a70[];
extern char g_msg_info_8c3f4a8c[];
extern char g_msg_left_8c3f4ab0[];

void stream_feed_8c35258c(Stream *s)
{
    Block b;
    int pos;
    int blocks;
        pos = s->iface->vt->position(s->iface, 0);
    if (s->end - pos > s->limit) return;
        s->iface->vt->lock(s->iface, 0, pos, &b);
    blocks = b.size / 2048;
    if (blocks <= 0) {
                s->iface->vt->unlock(s->iface, 0, &b);
        return;
    }
    s->result = stream_decode_8c352470(s->handle, blocks, b.ptr);
    if (s->result <= 0) {
                s->iface->vt->unlock(s->iface, 0, &b);
        return;
    }
    s->block = b;
    s->filled = 1;
}

void stream_update_8c352630(Stream *s)
{
    int info;
    Slot *slot = &s->slots[s->index];
    if (s->length > 0) {
        if (s->handle == 0) {
            if ((s->handle = stream_open_8c352464(slot->name, 0)) == 0) stream_log_8c352414(g_msg_open_8c3f4a70, slot->name);
            if (stream_info_8c35248e(s->handle, &info) == 0) stream_log_8c352414(g_msg_info_8c3f4a8c, slot->name);
            s->info = info;
            slot->count = 0;
        }
        if (s->filled == 0) stream_feed_8c35258c(s);
        slot->active = 1;
    } else if (s->handle) {
        stream_log_8c352414(g_msg_left_8c3f4ab0, s->length, s->handle);
    }
}
