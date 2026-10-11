typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c41c610 S_g8c41c610;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_4c4 S_g8c467180_2c_4c4;
typedef struct S_g8c467180_2c_4d0 S_g8c467180_2c_4d0;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct S_g8c467180_44_34 S_g8c467180_44_34;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x8c];
    int f8c;
    int f90;
    int f94;
    int f98;
};
struct S_g8c41c610 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
    char unknown30[0x14];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_44 {
    char unknown0[0x34];
    S_g8c467180_44_34 *f34;
};
struct S_g8c467180_2c {
    char unknown0[0x4c4];
    S_g8c467180_2c_4c4 *f4c4;
    char unknown4c8[0x8];
    S_g8c467180_2c_4d0 *f4d0;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_g8c41c610 *g_8c41c610;
extern char g_8c44be18;
extern S_g8c467180 *g_8c467180;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c41cba0 g_8c41cba0;
extern int call_8c220ce0(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c22f1bc(int, Object *);
extern void call_8c199688(int, Object *, int);
extern void call_8c198294(int, Object *);
extern void call_8c22e8e4(Object *, void *, int);
extern void set_global_8c22ffe4(void);
void operation_8c22db2c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f8c != 0) {
        t1 = call_8c220ce0();
        if (t1 == 0) {
            return;
        }
    }
    if (o->f90 == 0) {
        g_8c44be18 = 0;
        if (g_8c41c610 != 0) {
            g_8c41c610->f04 |= 0x10;
        }
        t2 = allocate_block(g_8c4d97e0, (unsigned int)0x108);
        if (t2 != 0) {
            call_8c22f1bc(t2, o);
        }
        o->f90 = t2;
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0xac);
        if (t3 != 0) {
            call_8c199688(t3, o, 2);
        }
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x40);
        if (t4 != 0) {
            call_8c198294(t4, o);
        }
    }
    if (o->f8c == 0) {
        if (o->f98 != 0) {
            if (o->f98 == 1) {
                goto L_8c22dbde;
            }
        } else {
            call_8c22e8e4(o, g_8c467180->f44->f34, 1);
            goto L_8c22dbf0;
L_8c22dbde:;
            call_8c22e8e4(o, g_8c467180->f2c->f4d0, 1);
        }
    }
L_8c22dbf0:;
    if ((((&g_8c41cba0)->f28 & 2)) != 0) {
        set_global_8c22ffe4();
        call_8c22e8e4(o, g_8c467180->f2c->f4c4, 1);
        o->f94 = 0x14;
    }
}
