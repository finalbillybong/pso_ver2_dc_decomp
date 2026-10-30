/* Pool group 0x8c3740d0-0x8c374218 (Hitachi SHC): opens a stream slot over a
   caller buffer split into tagged regions, and resets all slots. */
typedef struct Port {
    char unknown0[0x1c];
    int start;
    char unknown20[0x10];
    int current;
    char unknown34[0x4c - 0x34];
} Port;

typedef struct Slot {
    short index;
    char open;
    char unknown3;
    int type;
    char ready;
    char active;
    char flag_a;
    char flag_b;
    char flag_c;
    char unknownd;
    short one;
    short blocks_a;
    short blocks_b;
    short header;
    char unknown16[6];
    Port *port;
    char *region_s;
    char *region_f;
    char *region_d;
    char *region_g;
    char unknown30[8];
    char state[0x10];
    char table[0x100];
} Slot;

typedef struct System {
    char unknown0[8];
    int enabled;
} System;

extern System *g_system_8c566d9c;
extern Slot g_slots_8c566da0[];
extern int g_blocks_a_8c3fbe34[];
extern int g_blocks_b_8c3fbe44[];
extern Port g_ports_8c56b800[];
extern void *memset(void *, int, unsigned long);
extern void reset_streams_8c3737d8(void);

int stream_open_8c3740d0(int index, char *buffer, int size)
{
    Slot *s;
    int trace;
    int need;
    int a, b;
    (void)&trace;
    if (!g_system_8c566d9c->enabled || !buffer) return -0x100;
    s = &g_slots_8c566da0[index];
    trace = s->type;
    switch (trace) {
    case 0:
        a = g_blocks_a_8c3fbe34[0];
        b = g_blocks_b_8c3fbe44[0];
        break;
    case 1:
        a = g_blocks_a_8c3fbe34[1];
        b = g_blocks_b_8c3fbe44[1];
        break;
    case 2:
        a = g_blocks_a_8c3fbe34[2];
        b = g_blocks_b_8c3fbe44[2];
        break;
    case 3:
        a = g_blocks_a_8c3fbe34[3];
        b = g_blocks_b_8c3fbe44[3];
        break;
    default:
        return -0x100;
    }
    goto calc;
calc:
    trace = ((a + b + 1) << 9) + 0x20;
    if (trace > size) return -0x100;
    s->open = 1;
    s->index = index;
    s->port = &g_ports_8c56b800[index];
    s->flag_a = 0;
    s->flag_b = 0;
    s->flag_c = 0;
    s->region_g = buffer;
    s->region_s = buffer + 0x20;
    s->region_f = buffer + 0x220;
    s->region_d = buffer + ((a + 1) << 9) + 0x20;
    s->one = 1;
    s->blocks_a = a;
    s->blocks_b = b;
    s->header = 0x20;
    memset(s->state, 0, 0x10);
    memset(s->table, 0, 0x100);
    memset(s->region_g, 'G', 0x20);
    memset(s->region_s, 'S', 0x20);
    memset(s->region_f, 'F', 0x20);
    memset(s->region_d, 'D', 0x20);
    s->port->current = s->port->start;
    s->ready = 1;
    s->active = 1;
    return 0;
}

int stream_reset_8c3741d8(void)
{
    memset(g_slots_8c566da0, 0, 0xa40);
    reset_streams_8c3737d8();
    return 0;
}
