typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
struct Arg0_ec {
    char unknown0[0x4];
    short f04;
};
extern int g_8c32c1a4;
extern void call_8c088f14(Object *, int, int);
extern int current_effect_mode(void);
extern void insert_object_by_id(void *);
Object *operation_8c1e7964(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v12;
    int v11;
    int v1;
    int t1;
    int t2;
    (void)home;
    call_8c088f14(o, a1, a2);
    o->dispatch = (void *)0x8c277f60;
    o->tag = (int)(g_8c32c1a4);
    o->size = 0x1b0;
    o->ff4 = 0.0f;
    o->fe4 = 19.0f;
    t1 = current_effect_mode();
    switch (t1) {
    case 1:
    case 2:
        o->ff0 = 0xb;
        break;
    case 3:
    case 4:
    case 5:
        o->ff0 = 0xc;
        break;
    case 6:
    case 7:
        o->ff0 = 0xd;
        break;
    case 8:
    case 9:
    case 10:
        o->ff0 = 0xe;
        o->fe4 = 35.0f;
        break;
    case 0:
        o->ff0 = (int)(o->f88);
        break;
    default:
        o->ff0 = 0xb;
    }
    o->fdc = 0;
    insert_object_by_id((void *)o);
    o->f194 = 0;
    o->f198 = 0;
    t2 = current_effect_mode();
    if (t2 == 0) {
        o->f19c = -1;
    } else {
        {
            Object *base = o;
            v1 = (int)base->f8c;
            if (v1 < 0 || v1 > 0xff) {
                base->f19c = -1;
                goto L_8c1e7a74;
            }
            base->f19c = (int)(v1);
        }
    }
L_8c1e7a74:;
    if (o->f19c >= 0) {
        o->f10c = 4;
        o->f10e = 4;
    } else {
        o->f10c = 0;
        o->f10e = 0;
    }
    o->f110 = 0;
    o->f112 = 0;
    o->f100 = 0;
    o->f104 = 0;
    if (o->fec != 0) {
        o->fec->f04 |= 1;
        o->fec = (Arg0_ec *)0;
    }
    v12 = (int)0;
    v11 = (int)0x174;
    while (4 > v12) {
        *(int *)((char *)((char *)((int)o + v11) + 0x0) + (v12 << 2)) = 0;
        v12 = (int)(v12 + 1);
    }
    return o;
}
