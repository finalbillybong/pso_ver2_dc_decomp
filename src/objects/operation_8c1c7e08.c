typedef struct Item {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    unsigned char f04;
    unsigned char f05;
    struct {
        unsigned char kind;
        signed char value;
    } attr[3];
    char unknown0c[0x4];
    int f10;
} Item;
typedef struct Def {
    char unknown0[0x4];
    short f04;
    short f06;
    unsigned short f08;
} Def;
typedef struct Def2 {
    char unknown0[0x8];
    int f08;
} Def2;
extern Def *operation_8c1c7658(void *);
extern float call_8c158450(unsigned char, char);
extern int operation_8c158794(char);
extern int operation_8c1c933c(void *);
extern int operation_8c1c9348(void *);
extern int operation_8c1c7548(void *);
int operation_8c1c7e08(Item *o)
{
    int v;
    unsigned char tag;
    Def *p;
    float f;
    float a;
    int i;
    unsigned char c;
    int x;
    int y;
    Def2 *q;
    v = 0;
    tag = o->tag;
    switch (tag) {
    case 0:
        if (o->f04 & 0x80) {
            v = 1;
            break;
        }
        p = operation_8c1c7658(o);
        f = call_8c158450(o->tag, o->f01);
        if (f == 0.0f) {
            break;
        }
        if (p == 0) {
            break;
        }
        a = (float)p->f08 + (float)o->f03;
        a = a * a / f;
        v = 0;
        for (i = 0; i != 3; i++) {
            c = *(unsigned char *)((char *)((char *)o + 0x6) + (i << 1));
            if (c != 0 && 5 >= c) {
                v += *(signed char *)((char *)((char *)o + 0x7) + (i << 1)) + 0x64;
            } else {
                v += 0x64;
            }
        }
        f = (unsigned char)operation_8c158794(o->f04);
        v = a * (float)v / 100.0f + f * f * 1000.0f;
        break;
    case 1:
        if (o->f01 != 3) {
            f = call_8c158450(tag, o->f01);
            p = operation_8c1c7658(o);
            if (f == 0.0f) {
                break;
            }
            if (p == 0) {
                break;
            }
            x = operation_8c1c933c(o);
            y = operation_8c1c9348(o);
            i = p->f04 + p->f06 + (short)x + (short)y;
            v = (float)i * (float)i / f * (float)(o->f05 + 1);
            break;
        }
        f = call_8c158450(tag, o->f01);
        a = (unsigned char)operation_8c1c7548(o);
        v = a * f;
        break;
    case 4:
        v = o->f10;
        break;
    case 3:
        q = (Def2 *)operation_8c1c7658(o);
        if (q == 0) {
            break;
        }
        if (o->f01 != 2) {
            v = q->f08;
            break;
        }
        i = o->f02 + 1;
        v = q->f08 * i * i + 0x1f4;
        break;
    case 2:
        f = call_8c158450(tag, o->f01);
        v = (float)(o->f02 + 1) * f;
        break;
    }
    if (v < 0) {
        v = 0;
    }
    return v;
}
