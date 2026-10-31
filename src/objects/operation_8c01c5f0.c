typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_110 Arg0_110;
typedef struct S_x4640 S_x4640;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    short ff2;
    char unknownf4[0x4];
    float ff8;
    float ffc;
    float f100;
    char unknown104[0x4];
    float f108;
    char unknown10c[0x4];
    Arg0_110 *f110;
    char unknown114[0x18];
    short f12c;
    short f12e;
};
struct S_x4640 {
    float f00;
};
extern void call_8c01c9e8(Object *, short);
extern int operation_8c01d158(void *, short);
void operation_8c01c5f0(Object *o)
{
    float v1;
    int v9;
    float v17;
    int v10;
    int t1;
    switch (o->fe8 & 0x40) {
    case 0:
        o->ff8 = o->f100 + o->ff8;
        v17 = o->ffc - 1.0f;
        o->fe8 &= -0x2b;
        if (o->ff0 != o->ff2) {
            v1 = (float)o->ff8;
            if (!(o->ffc > v1)) {
                o->ff8 = v1 - o->f100;
            }
            call_8c01c9e8(o, o->ff0);
        }
        switch (o->f12c) {
        case 1:
            if (o->ffc > o->ff8) {
                return;
            }
            o->ff8 -= o->ffc;
            v9 = (int)(((o->fe8 & 0x100)) != 0);
            if (v9 == 0) {
                return;
            }
            o->f100 = o->f108;
            return;
        case 2:
            if (o->ff8 < v17) {
                return;
            }
            t1 = operation_8c01d158((void *)o, *(short *)((char *)((char *)o->f110 + 0x2) + (o->ff0 << 4)));
            if (t1 == 0) {
                o->ff8 -= o->ffc;
                return;
            }
            o->ff0 = *(short *)((char *)((char *)o->f110 + 0x2) + (o->ff0 << 4));
            call_8c01c9e8(o, o->ff0);
            return;
        case 3:
            if (o->ff8 < v17) {
                return;
            }
            o->f12c = 5;
            o->ff8 -= o->f100;
            o->f100 = 0.0f;
            o->fe8 |= 0x30;
            return;
        case 4:
            if (1.0f > o->ff8) {
                return;
            }
            o->ff8 = 0.0f;
            v10 = (int)(((o->fe8 & 0x100)) != 0);
            if (v10 != 0) {
                o->fe8 &= -0x101;
                o->f100 = o->f108;
            } else {
                o->f100 = ((S_x4640 *)((int)o->f110 + 8 + (o->ff0 << 4)))->f00;
            }
            o->f12c = o->f12e;
            o->fe8 &= -5;
            o->fe8 |= 8;
            return;
        case 5:
            o->ff8 -= o->f100;
            return;
        }
    }
}
