/* Appends a 14-byte message to the system queue (Hitachi SHC). */
typedef struct Entry {
    char kind;
    char unknown1;
    char data[14];
} Entry;

typedef struct System {
    int unknown0[2];
    Entry *entries;
    int count;
    int unknown10[2];
    int pending;
} System;

typedef struct Message {
    int unknown0;
    int unknown4;
    int kind;
    char data[14];
} Message;

extern System *g_system_8c3fac48;
extern void *memcpy(void *, const void *, unsigned long);
extern void report_error_8c346118(void *where, int code);

int queue_push_8c34720c(Message *m)
{
    int err = 0;
    Entry *e;
    if (g_system_8c3fac48->count >= 0x20) {
        err = 0xa000001;
        goto done;
    }
    e = &g_system_8c3fac48->entries[g_system_8c3fac48->count++];
    e->kind = m->kind;
    memcpy(e->data, m->data, 14);
    m->unknown0 = 0;
    g_system_8c3fac48->pending--;
done:
    if (err) report_error_8c346118(queue_push_8c34720c, err);
    return err;
}
