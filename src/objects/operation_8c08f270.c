typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct S_c8c08fde8 S_c8c08fde8;
typedef struct S_c8c08fefc S_c8c08fefc;
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_5c_0 Arg0_5c_0;
typedef struct Block_c8c08fefc_4 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2];
    short f08;
    char unknowna[0x36];
} Block_c8c08fefc_4;
typedef struct Block_p0_bc {
    char unknown0[0x6];
    short f06;
    char unknown8[0x38];
} Block_p0_bc;
struct Object {
    char unknown0[0x44];
    int f44;
    int f48;
    char unknown4c[0x10];
    Arg0_5c *f5c;
    char unknown60[0x5c];
    Block_p0_bc fbc;
    char unknownfc[0x4];
    Arg0_100 *f100;
};
struct S_c8c08fefc {
    short f00;
    short f02;
    Block_c8c08fefc_4 f04;
    S_c8c08fde8 *f44;
};
struct Arg0_100 {
    short f00;
};
struct Arg0_5c {
    Arg0_5c_0 *f00;
};
struct S_c8c08fde8 {
    char unknown0[0x84];
    S_c8c08fefc *f84;
};
extern S_c8c08fefc *call_8c08fefc(void);
extern int advance_counter_8c01d5e8(int);
extern S_c8c08fde8 *call_8c08fde8(Object *, void *);
extern int call_8c09010c(Object *);
extern int call_8c090198(Object *, void *);
void operation_8c08f270(Object *o)
{
    S_c8c08fefc *t1;
    int t2;
    S_c8c08fde8 *t3;
    int t4;
    int t5;
    t1 = call_8c08fefc();
    if (t1 != 0) {
        t2 = advance_counter_8c01d5e8(0);
        o->fbc.f06 = t2;
        t3 = call_8c08fde8(o, (void *)(&o->fbc));
        if (t3 != 0) {
            t1->f00 = o->f100->f00;
            *(Block64 *)&t1->f04 = *(Block64 *)&o->fbc;
            t1->f04.f08 = (int)(o->f5c->f00);
            t1->f44 = t3;
            t1->f04.f04 = *(int *)0x8c44be04;
            t1->f02 = 0;
            t3->f84 = t1;
            t4 = call_8c09010c(o);
            o->f44 = (int)(t4);
            t5 = call_8c090198(o, (void *)(o->f5c->f00));
            o->f48 = (int)(t5);
        }
    }
}
