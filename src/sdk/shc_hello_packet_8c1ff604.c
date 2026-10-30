/* Game pool group 0x8c1ff604-0x8c1ff750 (Hitachi SHC): builds a padded name
   packet, clears two lists, and clears status bits on an object pair. */
extern unsigned long strlen(const char *);
extern char *_builtin_strcpy(char *, const char *);
#define strcpy _builtin_strcpy
extern void *memcpy(void *, const void *, unsigned long);

typedef struct Packet {
    char *buffer;
    unsigned short length;
} Packet;

typedef struct Identity {
    char *name;
    int valid;
} Identity;

typedef struct List {
    char unknown0[0x9c];
} List;

typedef struct Owner {
    char unknown0[4];
    List lists[2];
} Owner;

typedef struct Object {
    char kind;
    char unknown1;
    unsigned char status;
    char unknown3[9];
    struct Object *peer;
    char link[0x20];
    Identity *identity;
} Object;

typedef struct Holder {
    char unknown0[0xc];
    Owner *owner;
} Holder;

extern Packet *packet_alloc_8c1fc324(int);
extern void random_seed_8c1fd210(void);
extern int random_next_8c1fd248(void);
extern unsigned short g_pad_length_8c502d66;
extern char g_last_packet_8c502d68[];
extern void list_clear_8c20133c(void *);
extern void unlink_8c204188(void *);
extern void refresh_8c202ba6(Object *);

Packet *hello_packet_8c1ff604(Object *object)
{
    Identity *id = object->identity;
    Packet *packet;
    char *p;
    int i;
    int n;
    if (!id->name || !id->valid) goto fail;
    packet = packet_alloc_8c1fc324(0);
    if (packet) goto build;
fail:
    return 0;
build:
    p = packet->buffer;
    goto seed;
seed:
    random_seed_8c1fd210();
    g_pad_length_8c502d66 = (random_next_8c1fd248() & 0x1f) + 0x10;
    *p++ = g_pad_length_8c502d66;
    for (i = 0; i < g_pad_length_8c502d66; i++) *p++ = random_next_8c1fd248();
    n = strlen(id->name);
    if (n > 0) {
        strcpy(p, id->name);
        p += n;
        *p++ = 0;
        *p = 0;
    }
    packet->length += n + g_pad_length_8c502d66 + 2;
    i = packet->length;
    if ((unsigned)i > 0x80) i = 0x80;
    memcpy(g_last_packet_8c502d68, packet->buffer, i);
    return packet;
}

void clear_lists_8c1ff6b8(Holder *h)
{
    Owner *o = h->owner;
    list_clear_8c20133c(&o->lists[1]);
    list_clear_8c20133c(&o->lists[0]);
}

void clear_status_8c1ff6d6(Object *object, int mask)
{
    Object *peer = object->peer;
    unlink_8c204188(object->link);
    if (!((object->status &= ~mask) & 0x10)) object->kind = 5;
    peer->status &= ~mask;
    if (mask == 0x10) peer->status &= 0xdf;
    refresh_8c202ba6(peer);
}
