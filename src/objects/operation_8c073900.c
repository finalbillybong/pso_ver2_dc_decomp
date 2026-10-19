typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0xd4];
    unsigned short fd4;
    char unknownd6[0x12];
    int fe8;
    char unknownec[0x34];
    int f120;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    short f08;
    short f0a;
};
extern int g_8c44be04;
extern int lookup_low_id(int);
extern int forward_state_8c02300c(void *, void *);
extern void operation_8c036964(void *);
void operation_8c073900(Object *o, int a1)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    int t2;
    v1 = (int)0xffff;
    if ((unsigned short)a1 != (unsigned short)v1) {
        t1 = lookup_low_id((int)((unsigned short)a1));
        t2 = forward_state_8c02300c((void *)t1, (void *)o);
        if (t2 == 0) {
            return;
        }
        v2 = (int)((o->fd4 & 0xffff) != 0xffff);
        if (v2 != 0) {
            return;
        }
        o->fd4 = a1;
        (&frame)->f04 = -1;
        (&frame)->f08 = 0;
        (&frame)->f0a = 0;
        (&frame)->f00 = 0x5a;
        (&frame)->f01 = 3;
        (&frame)->f02 = a1;
        (&frame)->f04 = (int)(o->fe8);
        (&frame)->f08 = g_8c44be04;
        operation_8c036964((void *)(&frame));
        o->f120 = 0;
        return;
    }
    o->fd4 = v1;
}
