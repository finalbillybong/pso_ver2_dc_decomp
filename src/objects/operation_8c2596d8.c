typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_42c S_g8c4e2b80_42c;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
typedef struct Object Object;
typedef struct Arg0_ec Arg0_ec;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x68];
    int f88;
    int f8c;
    char unknown90[0x4c];
    int fdc;
    char unknowne0[0x4];
    float fe4;
    char unknowne8[0x4];
    Arg0_ec *fec;
    int ff0;
    float ff4;
    char unknownf8[0x8];
    int f100;
    int f104;
    char unknown108[0x4];
    short f10c;
    short f10e;
    short f110;
    short f112;
    char unknown114[0x80];
    int f194;
    int f198;
    int f19c;
};
struct S_g8c4e2b80 {
    char unknown0[0x42c];
    S_g8c4e2b80_42c *f42c;
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_42c {
    char unknown0[0x38];
    int f38;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x3c];
    int f3c;
};
struct Arg0_ec {
    char unknown0[0x4];
    short f04;
};
extern int g_8c340340;
extern S_g8c4e2b80 *g_8c4e2b80;
extern int g_8c5133e0;
extern void call_8c088f14(Object *, int, int);
extern void insert_object_by_id(void *);
extern int current_effect_mode(void);
Object *operation_8c2596d8(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v12;
    int v11;
    int t1;
    int pm2;
    (void)home;
    call_8c088f14(o, a1, a2);
    o->dispatch = (void *)0x8c281b10;
    o->tag = (int)(g_8c340340);
    o->size = 0x1b0;
    o->ff4 = 0.0f;
    o->fe4 = 19.0f;
    o->ff0 = (int)(o->f88);
    a1 = (int)(o->ff0);
    g_8c5133e0 = a1;
    o->fdc = 0;
    insert_object_by_id((void *)o);
    o->f194 = 0;
    o->f198 = 0;
    t1 = current_effect_mode();
    if (t1 == 0) {
        o->f19c = -1;
    } else {
        {
            int v1;
            Object *base = o;
            v1 = (int)base->f8c;
            if (v1 < 0 || v1 > 0xff) {
                base->f19c = -1;
                goto L_8c25976c;
            }
            base->f19c = (int)(v1);
        }
    }
L_8c25976c:
    ;
    if (o->f19c >= 0) {
        o->f10c = 4;
        o->f10e = 4;
    } else {
        pm2 = 0;
        o->f10c = pm2;
        o->f10e = 0;
    }
    o->f110 = 0;
    o->f112 = 0;
    o->f100 = (int)(g_8c4e2b80->f42c->f38);
    o->f104 = (int)(g_8c4e2b80->f430->f3c);
    if (o->fec != 0) {
        o->fec->f04 |= 1;
        o->fec = (Arg0_ec *)0;
    }
    v11 = (int)0x174;
    v12 = (int)0;
    while (v12 < 4) {
        *(int *)((v12 << 2) + (char *)((char *)((int)o + v11) + 0x0)) = 0;
        v12 += 1;
    }
    return o;
}
