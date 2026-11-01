/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c9cdc
 * function: operation_8c1c9cdc
 * language: c
 * reference size: 552 bytes
 * compiled size: 552 bytes (+0.0%)
 * differing lines: 6 of 253 reference instruction lines
 * differing bytes: 10
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    unsigned char tag;
    unsigned char f01;
    char f02;
    char f03;
    char f04;
    char f05;
    char f06;
    char f07;
    char f08;
    char f09;
    char f0a;
    char f0b;
    int f0c;
    int f10;
};
struct Arg1 {
    char unknown0[0x30];
    int f30;
    int f34;
    int f38;
};
struct Frame {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    unsigned char f0c;
    unsigned char f0d;
    unsigned char f0e;
    char unknownf[0x1];
};
extern int operation_8c074538(int, int);
extern void initialize_fields_8c207358(void *);
extern int operation_8c207304(void *);
void operation_8c1c9cdc(Object *o, Arg1 *a1)
{
    Frame frame;
    int i;
    int t;
    if (a1 == 0) {
        return;
    }
    o->tag = 0;
    o->f01 = 0;
    o->f02 = 0;
    o->f03 = 0;
    o->f04 = 0;
    o->f05 = 0;
    o->f10 = 0;
    for (i = 0; i != 3; i++) {
        *((char *)&o->f06 + (i << 1)) = 0;
        *((i << 1) + (char *)&o->f07) = 0;
    }
    o->f0c = -1;
    t = (char)((unsigned int)a1->f30 >> 8 >> 16) & 0xf;
    o->tag = t;
    t = (short)((unsigned int)a1->f30 >> 16) & 0xff;
    o->f01 = t;
    t = (unsigned char)o->tag;
    if (t == 0 || t == 1) {
        o->f01++;
    }
    t = a1->f30 >> 8 & 0xff;
    o->f02 = t;
    switch (o->tag) {
    case 0:
        t = a1->f34 >> 8 & 0xff;
        o->f06 = t;
        t = a1->f34 & 0xff;
        o->f07 = t;
        t = (char)((unsigned int)a1->f38 >> 8 >> 16) & 0xff;
        o->f08 = t;
        t = (short)((unsigned int)a1->f38 >> 16) & 0xff;
        o->f09 = t;
        t = a1->f38 >> 8 & 0xff;
        o->f0a = t;
        t = a1->f38 & 0xff;
        o->f0b = t;
        t = (char)((unsigned int)a1->f34 >> 8 >> 16) & 0xff;
        o->f03 = t;
        t = a1->f30 & 0xff;
        o->f04 = t;
        break;
    case 3:
        if (o->f01 == 2) {
            t = a1->f30 & 0xff;
            o->f04 = t;
        }
        if (operation_8c074538((unsigned char)o->tag, o->f01) != 0) {
            o->f05 = 1;
        } else if ((unsigned char)o->tag == 3) {
            o->f05 = 0;
        }
        break;
    case 4:
        t = (short)((unsigned int)a1->f34 >> 16);
        t = (unsigned short)t * 10;
        o->f10 = t;
        break;
    case 1:
        t = a1->f30 & 0xff;
        o->f05 = t;
        t = (char)((unsigned int)a1->f34 >> 8 >> 16) & 0xff;
        o->f03 = t;
        t = (short)((unsigned int)a1->f34 >> 16) & 0xff;
        o->f04 = t;
        break;
    case 2:
        initialize_fields_8c207358(&frame);
        o->f02 = operation_8c207304(&frame);
        o->f03 = frame.f0d;
        *(short *)((char *)o + 4) = frame.f04 & 0x7ffe | (frame.f0c & 2) << 14 | frame.f0e & 1;
        *(short *)((char *)o + 6) = frame.f06 & 0x7ffe | (frame.f0c & 4) << 13 | frame.f0e >> 1 & 1;
        *(short *)((char *)o + 8) = frame.f08 & 0xfffe | frame.f0e >> 2 & 1;
        *(short *)((char *)o + 10) = frame.f0a & 0xfffe | frame.f0e >> 3 & 1;
        o->f10 = (frame.f0c & 1) << 31 | (short)(frame.f02 & 0x7fff) << 16 | frame.f00;
        break;
    }
}
