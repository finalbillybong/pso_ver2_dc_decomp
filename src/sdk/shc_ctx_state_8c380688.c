/* SDK pool group 0x8c380688 (Hitachi SHC): handler and render-state helpers. */
typedef struct Entry {
    int a;
    int b;
} Entry;

typedef struct Elem {
    int type;
    float x;
    float y;
    float z;
    int unknown10[2];
    int value;
    int unknown1c;
} Elem;

typedef struct Vec {
    float x;
    float y;
    float z;
    float w;
} Vec;

typedef struct State {
    int flags;
    char unknown4[0x10];
    int mode;
    char unknown18[0x44];
    int param;
    char unknown60[0x10];
    Vec v0;
    Vec v1;
    int r0;
    int r1;
    int r2;
} State;

extern int g_handler_8c56d510;
extern void release_pending_8c36becc(int);
extern int create_handler_8c36bbc4(int, int, int, int);
extern void call_8c3b6502(void);
typedef struct Table {
    char unknown0[0x234];
    Entry ent[1];
} Table;

extern Table * volatile g_table_8c3fffa0;
extern float g_x_8c57552c;
extern float g_y_8c575530;
extern void call_8c3b7500(Elem **, int, int);
extern int g_value_8c3fc020;
extern void call_8c3bcaf2(void *);
extern char obj_8c575c5c[];
extern int g_flag_8c3fc1a8;
extern int g_handle_8c575d60;
extern void free_handle_8c36cde4(int);
extern int *g_cur_8c575c58;
extern State *g_state_8c575c3c;
extern void finish_8c3bb920(State *);
extern void update_8c3bb160(State *);

set_handler_8c380688(a)
int a;
{
    if (g_handler_8c56d510) {
        release_pending_8c36becc(g_handler_8c56d510);
        g_handler_8c56d510 = 0;
    }
    if (a) g_handler_8c56d510 = create_handler_8c36bbc4(0x900, a, 0x58, 0);
}

void stub_8c3806be(void)
{
    call_8c3b6502();
}

void get_entry_8c3806c4(int i, int *a, int *b)
{
    *a = g_table_8c3fffa0->ent[i].a;
    *b = g_table_8c3fffa0->ent[i].b;
}

get_entry7_8c3806e6(a, b)
int *a, *b;
{
    get_entry_8c3806c4(7, a, b);
}

void set_elems_8c3806f6(int a, int b, int c)
{
    Elem e[3];
    Elem *p[3];
    e[0].type = 0xe0000000;
    e[0].x = 0.0f;
    e[0].y = 0.0f;
    e[0].z = 1e-05f;
    e[0].value = a;
    e[1].type = 0xe0000000;
    e[1].x = g_x_8c57552c;
    e[1].y = 0.0f;
    e[1].z = 1e-05f;
    e[1].value = b;
    e[2].type = 0xf0000000;
    e[2].x = 0.0f;
    e[2].y = g_y_8c575530;
    e[2].z = 1e-05f;
    e[2].value = c;
    p[0] = &e[0];
    p[1] = &e[1];
    p[2] = &e[2];
    call_8c3b7500(p, 0, 0x20);
}

int get_value_8c380766(void)
{
    return g_value_8c3fc020;
}

void close_8c38076c(void)
{
    call_8c3bcaf2(obj_8c575c5c);
    if (g_flag_8c3fc1a8 == 0) free_handle_8c36cde4(g_handle_8c575d60 & 0x8fffffff);
}

void set_regs_8c3807e0(int x)
{
    int a, b, c;
    if (*g_cur_8c575c58 == x) return;
    a = g_state_8c575c3c->r0 & 0xfdffff00;
    b = g_state_8c575c3c->r1;
    c = g_state_8c575c3c->r2 & 0xffe7ffff;
    a |= x & 0x20000ff;
    c |= x & 0x180000;
    g_state_8c575c3c->r0 = a;
    g_state_8c575c3c->r1 = b;
    g_state_8c575c3c->r2 = c;
    finish_8c3bb920(g_state_8c575c3c);
    *g_cur_8c575c58 = x;
}

int get_cur_8c380840(void)
{
    return *g_cur_8c575c58;
}

void set_vectors_8c380848(Vec *a, Vec *b)
{
    g_state_8c575c3c->v0.x = a->x;
    g_state_8c575c3c->v0.y = a->y;
    g_state_8c575c3c->v0.z = a->z;
    g_state_8c575c3c->v0.w = a->w;
    g_state_8c575c3c->v1.x = b->x;
    g_state_8c575c3c->v1.y = b->y;
    g_state_8c575c3c->v1.z = b->z;
    g_state_8c575c3c->v1.w = b->w;
    finish_8c3bb920(g_state_8c575c3c);
}

void set_mode_8c3808a0(int m)
{
    g_state_8c575c3c->flags = 1;
    switch (m) {
    case 1:
        g_state_8c575c3c->mode = 6;
        break;
    case 0:
        g_state_8c575c3c->mode = 7;
        break;
    }
    update_8c3bb160(g_state_8c575c3c);
    finish_8c3bb920(g_state_8c575c3c);
}

void set_param_8c3808d6(int v)
{
    g_state_8c575c3c->flags = 0x10000;
    g_state_8c575c3c->param = v;
    update_8c3bb160(g_state_8c575c3c);
    finish_8c3bb920(g_state_8c575c3c);
}
