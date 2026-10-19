typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_11c Arg0_11c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0xa0];
    float fe8;
    float fec;
    char unknownf0[0x4];
    float ff4;
    float ff8;
    float ffc;
    float f100;
    char unknown104[0xc];
    Arg0_110 *f110;
    int f114;
    float f118;
    Arg0_11c *f11c;
};
struct Frame {
    Block_frame_0 f00;
};
extern float g_8c28629c;
extern float g_8c2862a0;
extern Block8 g_8c286558;
extern int create_effect_7708(void *, int, int);
extern void call_8c0a7608(void *, void *);
extern int call_8c18e8a0(void *, int);
extern int operation_8c051ff4(void *, void *, void *);
extern float operation_8c14490c(void);
extern int operation_8c0f3630(int, int, int);
void operation_8c1673dc(Object *o)
{
    Frame frame;
    float v15;
    int t1;
    int t2;
    int t3;
    float t4;
    int t5;
    if (o->ffc > 8.7f) {
        o->f118 += 0.05f;
        if (!(3.0f > o->f118)) {
            o->f118 = 3.0f;
        }
        o->ffc -= o->f118;
        o->ff8 += o->fec * 2.0f;
        o->f100 += o->ff4 * 2.0f;
    } else {
        o->ffc = 8.7f;
        o->ff8 = o->fec * o->fe8 + o->ff8;
        o->f100 = o->ff4 * o->fe8 + o->f100;
    }
    o->f3c = o->ff8;
    o->f44 = o->f100;
    if (o->f11c == 0) {
        t1 = create_effect_7708((void *)(&o->ff8), 0xdf, 0x40);
        o->f11c = (Arg0_11c *)t1;
    } else {
        call_8c0a7608((void *)(o->f11c), (void *)(&o->ff8));
    }
    t2 = call_8c18e8a0((void *)(o->f110), 0xf);
    if (t2 == 0) {
        t3 = operation_8c051ff4((void *)o, (void *)(&o->f3c), (void *)(((char *)o + 0x104)));
        if (t3 != 0) {
            o->f114 |= 1;
        } else {
            o->f114 = (unsigned int)o->f114 >> 1 << 1;
        }
    }
    v15 = (float)o->f3c;
    if (!(v15 > g_8c28629c) && !(g_8c2862a0 > v15)) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c286558;
        t4 = operation_8c14490c();
        (&frame)->f00.f04 = t4;
        t5 = operation_8c0f3630((int)o, (int)((void *)0x8c286560), (int)(&frame));
        if (t5 != 0) {
            o->f04 |= 1;
            return;
        }
    }
    o->f110 = (Arg0_110 *)((int)o->f110 + 1);
    if ((int)(o->f110) >= 0x78) {
        o->f04 |= 1;
    }
}
