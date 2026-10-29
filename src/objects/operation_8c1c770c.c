typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1583d4 S_c8c1583d4;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_0 S_g8c467180_0;
typedef struct S_g8c467180_0_0 S_g8c467180_0_0;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct S_g8c467180_c S_g8c467180_c;
typedef struct S_g8c467180_c_4e0 S_g8c467180_c_4e0;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    unsigned char f04;
    char unknown5[0xb];
    Arg0_10 *f10;
};
struct S_g8c467180 {
    S_g8c467180_0 *f00;
    char unknown4[0x8];
    S_g8c467180_c *f0c;
    char unknown10[0x1c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    S_g8c467180_2c_0 *f00;
};
struct S_c8c1c7658 {
    int f00;
    char unknown4[0x4];
    short f08;
};
struct S_g8c467180_c {
    char unknown0[0x4e0];
    S_g8c467180_c_4e0 *f4e0;
    char unknown4e4[0xa0];
    int f584;
};
struct Frame {
    char f00;
    char f01;
    char unknown2[0x1];
    char f03;
    int f04;
    char unknown8[0x8];
};
struct S_c8c1583d4 {
    char f00;
};
extern S_g8c467180 *g_8c467180;
extern int g_8c467188;
extern char g_8c328ef4[];
extern void call_8c12b048(int, void *, ...);
extern S_c8c1c7658 *operation_8c1c7658(void *);
extern int call_8c1c9978(Object *);
extern void call_8c12b880(void *, int, int);
extern void call_8c1c99ac(Object *, void *);
extern S_c8c1583d4 *operation_8c1583d4(char);
extern int call_8c1c7ffc(Object *);
extern int operation_8c1c9354(void *);
void operation_8c1c770c(Object *o, int a1)
{
    Frame frame;
    S_c8c1583d4 *t4;
    unsigned char v5;
    unsigned char v6;
    unsigned char v7;
    int v1;
    int v9;
    unsigned char v11;
    unsigned char v12;
    unsigned char v13;
    int v14;
    int v15;
    unsigned char v18;
    char c;
    int v25;
    int v20;
    int v22;
    int v4;
    S_c8c1c7658 *t1;
    int t2;
    int t3;
    short v23;
    S_c8c1c7658 *t5;
    int t6;
    if (a1 == 0) {
        return;
    }
    if (o->tag == 4) {
        call_8c12b048(a1, (void *)((void *)g_8c328ef4), o->f10, g_8c467180->f2c->f00);
        return;
    }
    t1 = operation_8c1c7658((void *)o);
    if (t1 != 0) {
        v4 = (int)*(int *)((char *)((char *)g_8c467180->f0c + 0x0) + (t1->f00 << 2));
    } else {
        v1 = (int)g_8c467180->f0c->f584;
        v4 = (int)v1;
    }
    v5 = (unsigned char)o->tag;
    if (v5 == 0) {
        t2 = call_8c1c9978(o);
        if (t2 != 0) {
            call_8c12b880((void *)(&(&frame)->f03), 0, 0xa);
            call_8c1c99ac(o, (void *)(&(&frame)->f03));
            if (((&frame)->f03 + -0x41) == 1) {
                v6 = (unsigned char)o->f03;
                if (v6 != 0) {
                    call_8c12b048(a1, (void *)((g_8c328ef4 + 0x5)), &(&frame)->f04, v6);
                    return;
                }
                call_8c12b048(a1, (void *)((g_8c328ef4 + 0xc)), &(&frame)->f04);
                return;
            }
            v7 = (unsigned char)o->f03;
            if (v7 != 0) {
                call_8c12b048(a1, (void *)((g_8c328ef4 + 0xf)), &(&frame)->f04, v4, v7);
                return;
            }
            call_8c12b048(a1, (void *)((g_8c328ef4 + 0x19)), &(&frame)->f04, v4);
            return;
        }
        t4 = operation_8c1583d4(o->f04);
        t3 = call_8c1c7ffc(o);
        if (t3 != 0) {
            if ((o->tag) == 0 && ((o->f04 & 0x80)) != 0) {
                v9 = (int)0;
            } else {
                v9 = (int)1;
            }
            if (v9 == 1) {
                v11 = (unsigned char)o->f03;
                if (v11 != 0) {
                    call_8c12b048(a1, (void *)((g_8c328ef4 + 0x5)), v4, v11);
                    return;
                }
                call_8c12b048(a1, (void *)((g_8c328ef4 + 0xc)), v4);
                return;
            }
            call_8c12b048(a1, (void *)((g_8c328ef4 + 0xc)), g_8c467180->f0c->f4e0);
            return;
        }
        if (t4->f00 != 0) {
            v12 = (unsigned char)o->f03;
            if (v12 != 0) {
                call_8c12b048(a1, (void *)((g_8c328ef4 + 0xf)), t4, v4, v12);
                return;
            }
            call_8c12b048(a1, (void *)((g_8c328ef4 + 0x19)), t4, v4);
            return;
        }
        v13 = (unsigned char)o->f03;
        if (v13 != 0) {
            call_8c12b048(a1, (void *)((g_8c328ef4 + 0x5)), v4, v13);
            return;
        }
        call_8c12b048(a1, (void *)((g_8c328ef4 + 0xc)), v4);
        return;
    }
    if (v5 == 3 && o->f01 == 2) {
            c = o->f04;
        v18 = (unsigned char)c;
        if ((unsigned int)0x13 > v18) {
            switch (v18) {
            case 0xe:
            case 0x11:
                if (g_8c467188 == 0) {
                    call_8c12b048(a1, (void *)((g_8c328ef4 + 0x1f)), *(S_g8c467180_0_0 **)((char *)((char *)g_8c467180->f00 + 0x0) + ((unsigned char)c << 2)), v4);
                    return;
                }
                call_8c12b048(a1, (void *)((g_8c328ef4 + 0x1f)), v4, *(S_g8c467180_0_0 **)((char *)((char *)g_8c467180->f00 + 0x0) + ((unsigned char)c << 2)));
                return;
            }
            if (g_8c467188 == 0) {
                call_8c12b048(a1, (void *)((g_8c328ef4 + 0x24)), *(S_g8c467180_0_0 **)((char *)((char *)g_8c467180->f00 + 0x0) + (v18 << 2)), o->f02 + 1, v4);
                return;
            }
            call_8c12b048(a1, (void *)((g_8c328ef4 + 0x2d)), v4, *(S_g8c467180_0_0 **)((char *)((char *)g_8c467180->f00 + 0x0) + (v18 << 2)), o->f02 + 1);
            return;
        }
        call_8c12b048(a1, (void *)v4);
        return;
    }
    if (v5 == 1 && o->f01 == 3) {
        call_8c12b880((void *)(&frame), 0, 3);
        t5 = operation_8c1c7658((void *)o);
        if (t5 != 0) {
            v23 = (short)t5->f08;
            t6 = operation_8c1c9354((void *)o);
            v25 = (short)t6;
            if (-v23 > v25) {
                (&frame)->f00 = 0x2d;
                (&frame)->f01 = 0x2d;
            } else {
                if (!(v25 >= 0)) {
                    (&frame)->f00 = 0x2d;
                } else {
                    if (v25 == 0) {
                        (&frame)->f00 = 0;
                    } else {
                        if (v23 >= v25) {
                            (&frame)->f00 = 0x2b;
                        } else {
                            if (v25 > v23) {
                                (&frame)->f00 = 0x2b;
                                (&frame)->f01 = 0x2b;
                            }
                        }
                    }
                }
            }
        }
        call_8c12b048(a1, (void *)((g_8c328ef4 + 0x1f)), v4, (&frame));
        return;
    }
    call_8c12b048(a1, (void *)v4);
}
