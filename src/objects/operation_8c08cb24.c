typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block60 {
    int words[15];
} Block60;
typedef struct S_c8c08d7fc S_c8c08d7fc;
typedef struct S_c8c08d8a8 S_c8c08d8a8;
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_5c_0 Arg0_5c_0;
typedef struct Block_c8c08d8a8_4 {
    short f00;
    short f02;
    char unknown4[0x4];
    short f08;
    char unknowna[0x32];
} Block_c8c08d8a8_4;
typedef struct Block_p0_c0 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
} Block_p0_c0;
struct Object {
    char unknown0[0x44];
    int f44;
    int f48;
    char unknown4c[0x10];
    Arg0_5c *f5c;
    char unknown60[0x60];
    Block_p0_c0 fc0;
    char unknownfc[0x4];
    Arg0_100 *f100;
};
struct S_c8c08d8a8 {
    short f00;
    short f02;
    Block_c8c08d8a8_4 f04;
    S_c8c08d7fc *f40;
};
struct Arg0_100 {
    short f00;
};
struct Arg0_5c {
    Arg0_5c_0 *f00;
};
struct S_c8c08d7fc {
    char unknown0[0x84];
    S_c8c08d8a8 *f84;
};
extern S_c8c08d8a8 *call_8c08d8a8(void);
extern int advance_counter_8c01d5fc(int);
extern S_c8c08d7fc *call_8c08d7fc(Object *, void *);
extern int call_8c08db0c(Object *);
extern int call_8c08db98(Object *, void *);
void operation_8c08cb24(Object *o)
{
    char *v1;
    int v2;
    S_c8c08d8a8 *t1;
    int t2;
    S_c8c08d7fc *t3;
    int t4;
    int t5;
    t1 = call_8c08d8a8();
    if (t1 != 0) {
        t2 = advance_counter_8c01d5fc(0);
        o->fc0.f04 = t2;
        t3 = call_8c08d7fc(o, (void *)(&o->fc0));
        if (t3 != 0) {
            t1->f00 = o->f100->f00;
            t1->f40 = t3;
            *(Block60 *)&t1->f04 = *(Block60 *)&o->fc0;
            t1->f04.f08 = (int)(o->f5c->f00);
            t1->f04.f02 = *(int *)0x8c44be04;
            t1->f02 = 0;
            if ((*(int *)0x8c46ed14 + 1) > 0xb9f) {
                v2 = (int)-1;
            } else {
                v1 = (char *)*(int *)0x8c46ed14;
                *(int *)0x8c46ed14 += 1;
                v2 = (int)v1;
            }
            t1->f04.f00 = v2;
            t3->f84 = t1;
            t4 = call_8c08db0c(o);
            o->f44 = (int)(t4);
            t5 = call_8c08db98(o, (void *)(o->f5c->f00));
            o->f48 = (int)(t5);
        }
    }
}
