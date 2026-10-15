typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4daae0 S_L8c4daae0;
typedef struct S_L8c4daae0_4 S_L8c4daae0_4;
typedef struct S_g8c4daae0 S_g8c4daae0;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    int f30;
    char unknown34[0x8];
    int f3c;
    int f40;
};
struct S_L8c4daae0 {
    S_g8c4daae0 *f00;
    S_L8c4daae0_4 *f04;
};
extern S_g8c4db520 *g_8c4db520;
extern int g_8c4dc800;
extern S_L8c4daae0 g_8c4daae0;
extern int operation_8c220ce0(void);
extern int operation_8c106760(Object *);
extern int call_8c250918(void);
extern void call_8c220c40(int, int);
extern int operation_8c106798(Object *);
extern int operation_8c173460(void *, int);
extern int create_loader_8c1735f8(int);
void operation_8c208704(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    t1 = operation_8c220ce0();
    if (t1 == 0) {
        return;
    }
    t2 = operation_8c106760(o);
    if (t2 != 0) {
        o->f40 = 0;
    }
    if (o->f40 != 0) {
        return;
    }
    if (o->f30 != 0) {
        if (o->f30 == 1) {
            goto L_8c208792;
        }
        if (o->f30 == 2) {
            goto L_8c2087b8;
        }
        if (o->f30 == 3) {
            return;
        }
        return;
    }
    if (g_8c4dc800 != 0) {
        o->f30 = 2;
        return;
    }
    t3 = call_8c250918();
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                goto L_8c208784;
            }
            return;
        }
        o->f30 = 2;
        return;
    }
    call_8c220c40(0x11, 1);
    o->f30 = 1;
    return;
L_8c208784:;
    call_8c220c40(0xd, 1);
    o->f30 = 1;
    return;
L_8c208792:;
    t4 = call_8c250918();
    if (t4 == 1) {
        o->f30 = 2;
    }
    t5 = operation_8c106798(o);
    if (t5 != 0) {
        call_8c220c40(0x10, 1);
        o->f24 = 0xd;
        return;
L_8c2087b8:;
        if (g_8c4dc800 != 0) {
            t6 = operation_8c173460(g_8c4db520, 0xff);
            if (t6 != 0) {
                call_8c220c40(0xb, 1);
                if ((int)((&g_8c4daae0)->f04) != -1) {
                    t7 = create_loader_8c1735f8((int)((&g_8c4daae0)->f04));
                    o->f3c = (int)(t7);
                }
                o->f24 = 4;
                return;
            }
            t8 = operation_8c173460(g_8c4db520, 0xfd);
            if (t8 != 0) {
                call_8c220c40(0x12, 1);
                if ((int)((&g_8c4daae0)->f00) != -1) {
                    t9 = create_loader_8c1735f8((int)((&g_8c4daae0)->f00));
                    o->f3c = (int)(t9);
                }
                o->f24 = 5;
                return;
            }
            call_8c220c40(2, 1);
            o->f24 = 6;
            return;
        }
        call_8c220c40(4, 1);
        o->f30 = 0;
        o->f24 = 8;
    }
}
