typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4dc4a0 S_g8c4dc4a0;
typedef struct S_g8c4dc4a0_0 S_g8c4dc4a0_0;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
struct Frame {
    unsigned char items[100];
    int count;
};
struct S_g8c4dc4a0 {
    S_g8c4dc4a0_0 *f00;
};
struct S_g8c4dc4a0_0 {
    int f00;
    int f04;
};
struct S_vv4 {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
};
struct Object {
    char unknown0[0x4];
    char f04;
};
extern S_g8c4dc4a0 *g_8c4dc4a0;
extern int g_8c4dc4a4;
extern int g_8c4dc4a8;
extern int g_8c4dc5a0;
extern int call_8c12b944(void);
extern int operation_8c163900(char);
extern int operation_8c1638a8(char);
extern int operation_8c19cedc(int);
static inline void bag_push_8c19cae8(Frame *b, unsigned char v)
{
    if (b->count < 100) {
        b->items[b->count++] = v;
    }
}
static inline void bag_shuffle_8c19cae8(Frame *b, int times)
{
    int n;
    int t;
    int j;
    unsigned char c;
    while (times-- > 0) {
        for (j = 0; j < (n = b->count);) {
            t = (int)((float)n * ((float)call_8c12b944() / 32768.0f));
            c = b->items[j];
            b->items[j++] = b->items[t];
            b->items[t] = c;
        }
    }
}
static inline int bag_pop_8c19cae8(Frame *b)
{
    if (b->count > 0) {
        return (unsigned char)b->items[--b->count];
    }
    return -1;
}
void operation_8c19cae8(Object *o)
{
    Frame frame;
    int n;
    S_vv4 *row;
    int flag;
    int k;
    int v;
    frame.count = 0;
    n = g_8c4dc4a0->f00->f04;
    row = (S_vv4 *)(n * g_8c4dc5a0 * 3 + g_8c4dc4a0->f00->f00);
    flag = g_8c4dc4a4;
    while (n-- > 0) {
        if (flag != 0) {
            k = row->f02;
        } else {
            k = row->f01;
        }
        while (k-- != 0) {
            bag_push_8c19cae8(&frame, row->f00);
        }
        row = (S_vv4 *)((char *)row + 3);
    }
    bag_shuffle_8c19cae8(&frame, 4);
    v = bag_pop_8c19cae8(&frame);
    if (v != -1) {
        switch (*(char *)(0x8c2879f0 + v)) {
        case -1:
            o->f04 = operation_8c163900(o->f04);
            break;
        case 0:
            break;
        case 1:
            o->f04 = operation_8c1638a8(o->f04);
            break;
        }
    }
    g_8c4dc4a8 += (char)operation_8c19cedc(v);
}
