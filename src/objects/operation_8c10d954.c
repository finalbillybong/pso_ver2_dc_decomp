typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
struct Frame {
    char f00;
    char f01;
    short f02;
    char f04;
    char f05;
    char f06;
    char f07;
    short f08;
    short f0a;
    char unknownc[0x24];
};
struct Object {
    char unknown0[0x54];
    char f54;
    char f55;
    char unknown56[0x22];
    Arg0_78 *f78;
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
};
struct Arg0_7c {
    char unknown0[0x7c];
    int f7c;
    char unknown80[0x4];
    int f84;
    char unknown88[0x2];
    unsigned short f8a;
    char unknown8c[0x8];
    Arg0_7c_94 *f94;
};
struct Arg0_78 {
    char unknown0[0x8a];
    unsigned short f8a;
};
extern void call_8c18e044(void *, void *, int, int, int);
extern void operation_8c110278(void *, int);
extern int operation_8c1ecae8(void *, int);
extern int call_8c18e768(int, int);
extern void operation_8c0368a8(void *);
void operation_8c10d954(Object *o, int a1)
{
    Frame frame;
    int v1;
    int v10;
    int v15;
    int t1;
    int v2;
    int t2;
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f07 = 0;
    (&frame)->f06 = 0;
    (&frame)->f05 = 0;
    (&frame)->f04 = 0;
    call_8c18e044((void *)(&(&frame)->f08), (void *)((void *)0x8c01ef40), 0, 4, 0xa);
    (&frame)->f00 = 0x47;
    (&frame)->f01 = 0xc;
    v1 = (int)-0xf;
    if ((unsigned int)1 >= (unsigned int)(a1 + v1)) {
        operation_8c110278((void *)o, 0x16);
    } else {
        if (a1 == 0 || a1 == 3 || a1 == 6) {
            operation_8c110278((void *)o, 0x17);
            goto L_8c10d9d4;
        }
        operation_8c110278((void *)o, 2);
    }
L_8c10d9d4:;
    t1 = operation_8c1ecae8((void *)(o->f7c->f94), a1);
    if (t1 != 0) {
        (&frame)->f02 = o->f7c->f8a & 0xffff;
        (&frame)->f04 = a1;
        (&frame)->f07 = 1;
        if ((unsigned int)1 >= (unsigned int)(a1 + -0xf)) {
            if (a1 == 0xf) {
                o->f84 |= 0x10000;
            }
            (&frame)->f06 = o->f55;
            for (v10 = 0; 1 > v10; v10++) {
                *(short *)((char *)&(&frame)->f08 + (v10 << 2)) = o->f78->f8a & 0xffff;
                *(short *)((char *)&(&frame)->f0a + (v10 << 2)) = 0;
            }
        } else {
            (&frame)->f06 = o->f54;
            for (v15 = 0; 1 > v15; v15++) {
                *(short *)((char *)&(&frame)->f08 + (v15 << 2)) = o->f7c->f7c;
                *(short *)((char *)&(&frame)->f0a + (v15 << 2)) = o->f7c->f84;
            }
        }
        v2 = 0x30 - (0xa - (&frame)->f07 << 2);
        t2 = call_8c18e768((int)((unsigned char)v2), 4);
        (&frame)->f01 = t2;
        operation_8c0368a8((void *)(&frame));
    }
}
