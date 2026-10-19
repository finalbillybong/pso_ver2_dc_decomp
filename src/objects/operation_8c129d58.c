typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9984 S_g8c4d9984;
typedef struct S_g8c4d9984_0 S_g8c4d9984_0;
typedef struct S_g8c4d9984_4 S_g8c4d9984_4;
typedef struct S_g8c4d9984_8 S_g8c4d9984_8;
typedef struct S_g8c4d9988 S_g8c4d9988;
typedef struct S_g8c4d998c S_g8c4d998c;
typedef struct S_g8c4d998c_2c S_g8c4d998c_2c;
typedef struct S_g8c4d998c_2c_2c S_g8c4d998c_2c_2c;
typedef struct S_g8c4d998c_2c_2c_2c S_g8c4d998c_2c_2c_2c;
typedef struct S_g8c4d998c_2c_2c_2c_4 S_g8c4d998c_2c_2c_2c_4;
typedef struct S_g8c4d998c_2c_2c_4 S_g8c4d998c_2c_2c_4;
typedef struct S_g8c4d998c_2c_4 S_g8c4d998c_2c_4;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_378 Arg0_378;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x34];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x34];
    Arg0_130 *f130;
    char unknown134[0x238];
    float f36c;
    float f370;
    int f374;
    Arg0_378 *f378;
};
struct S_g8c4d9984 {
    S_g8c4d9984_0 *f00;
    S_g8c4d9984_4 *f04;
    S_g8c4d9984_8 *f08;
};
struct S_g8c4d998c {
    char unknown0[0x2c];
    S_g8c4d998c_2c *f2c;
};
struct S_g8c4d998c_2c {
    char unknown0[0x4];
    S_g8c4d998c_2c_4 *f04;
    char unknown8[0x24];
    S_g8c4d998c_2c_2c *f2c;
};
struct S_g8c4d998c_2c_2c {
    char unknown0[0x4];
    S_g8c4d998c_2c_2c_4 *f04;
    char unknown8[0x24];
    S_g8c4d998c_2c_2c_2c *f2c;
};
struct S_g8c4d998c_2c_2c_2c {
    char unknown0[0x4];
    S_g8c4d998c_2c_2c_2c_4 *f04;
};
extern S_g8c4d9984 *g_8c4d9984;
extern S_g8c4d9988 *g_8c4d9988;
extern S_g8c4d998c *g_8c4d998c;
extern int operation_8c03d338(void);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void call_8c3ac53a(void *, void *, float);
extern void call_8c3a944a(void *);
extern void call_8c391c94(void);
extern void call_8c3aa702(void *);
extern int operation_03d080(unsigned short);
extern void call_8c3aa716(S_g8c4d998c *);
extern void call_8c391cc4(void);
extern void call_8c38ad10(void);
void operation_8c129d58(Object *o)
{
    int v10;
    int v11;
    int v12;
    int t1;
    int t2;
    if (((o->f34 & 0x8000000)) != 0) {
        t1 = operation_8c03d338();
        if (t1 != 1) {
            return;
        }
    }
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(o->f64));
    if (o->f38 != 0 && o->f130 != 0) {
        call_8c3827d8((void *)(g_8c4d9984->f08));
        call_8c3ac53a((void *)(o->f38), (void *)(o->f130), o->ff8);
    }
    if (g_8c4d9988 != 0) {
        call_8c3a944a(g_8c4d9988);
    }
    call_8c391c94();
    if (o->f374 == 0) {
        v10 = (int)(o->f370 <= o->f36c);
        v11 = (int)(o->f370 <= (o->f36c * 2.0f));
        v12 = (int)(o->f370 <= (o->f36c * 3.0f));
        call_8c3827d8((void *)(g_8c4d9984->f04));
        if (v10 == 1) {
            call_8c3aa702((void *)(g_8c4d998c->f2c->f04));
        }
        if (v11 == 1) {
            call_8c3aa702((void *)(g_8c4d998c->f2c->f2c->f04));
        }
        if (v12 == 1) {
            call_8c3aa702((void *)(g_8c4d998c->f2c->f2c->f2c->f04));
        }
        call_8c3827d8((void *)(g_8c4d9984->f00));
        if (v10 == 0) {
            call_8c3aa702((void *)(g_8c4d998c->f2c->f04));
        }
        if (v11 == 0) {
            call_8c3aa702((void *)(g_8c4d998c->f2c->f2c->f04));
        }
        if (v12 != 0) {
            goto L_8c129ec6;
        }
        call_8c3aa702((void *)(g_8c4d998c->f2c->f2c->f2c->f04));
    } else {
        t2 = operation_03d080((unsigned short)(o->f378));
        if ((unsigned char)t2 == 1) {
            call_8c3827d8((void *)(g_8c4d9984->f00));
        } else {
            call_8c3827d8((void *)(g_8c4d9984->f04));
        }
        call_8c3aa716(g_8c4d998c);
    }
L_8c129ec6:;
    call_8c391cc4();
    call_8c38ad10();
}
