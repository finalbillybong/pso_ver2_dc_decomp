typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4daac0 S_g8c4daac0;
typedef struct S_g8c4dbc28 S_g8c4dbc28;
typedef struct S_g8c4dbc28_0 S_g8c4dbc28_0;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x10];
    Arg0_38 *f38;
    int f3c;
    char unknown40[0xc];
    int f4c;
};
struct S_g8c4dbc28 {
    S_g8c4dbc28_0 *f00;
};
struct S_g8c4dbc28_0 {
    int f00;
};
struct S_g8c4daac0 {
    int f00;
    int f04;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern Block8 g_8c316424;
extern Block8 g_8c31642c;
extern S_g8c4daac0 *g_8c4daac0;
extern S_g8c4dbc28 *g_8c4dbc28;
extern int operation_8c220ce0(void);
extern void refresh_follow_effect_8c22ed9c(void *);
extern int operation_8c19fb18(int);
extern int operation_8c22efcc(void);
extern void operation_8c19fbe0(void *, int, int, int);
extern int operation_8c17796c(int);
extern void operation_8c1cdc30(void *);
extern int call_8c1196d4(void *, Frame *, int);
extern void operation_8c119764(int, int, int);
void operation_8c158d24(Object *o)
{
    Frame frame;
    char *v1;
    int v3;
    int v2;
    int v5;
    int v4;
    int v9;
    int v11;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int pm10;
    int pm8;
    t1 = operation_8c220ce0();
    if (t1 == 0) {
        return;
    }
    refresh_follow_effect_8c22ed9c((void *)g_8c4daac0);
    if (o->f38 != 0) {
    } else {
        if (g_8c4daac0 == 0) {
            o->f24 = 5;
            return;
        }
        pm10 = operation_8c19fb18((int)((char *)g_8c4dbc28->f00->f00));
        t2 = pm10;
        o->f38 = (Arg0_38 *)t2;
        v1 = (char *)g_8c4daac0->f00;
        pm8 = operation_8c22efcc();
        t3 = pm8;
        if (t3 != 0) {
            v3 = (int)0;
            v2 = (int)0x1d2;
            t2 = (int)0x1d0;
            v4 = t2;
            for (v5 = (int)-1; g_8c4daac0->f04 > v3; v3 = (int)(v3 + 1)) {
                if ((short)v5 == *(short *)((v2) + (char *)((char *)v1 + 0x0))) {
                    operation_8c19fbe0((void *)(o->f38), 0x2c, (int)(v1), v3);
                } else {
                    t4 = operation_8c17796c((int)(*(short *)((char *)((char *)v1 + 0x0) + (v4))));
                    if (t4 != 0) {
                        operation_8c19fbe0((void *)(o->f38), 0x16, (int)(v1), v3);
                    }
                }
                v1 = (char *)(v1 + 0x1d8);
            }
        } else {
            v9 = (int)0x1d2;
            v3 = (int)0;
            v11 = (int)0x1d0;
            for (v5 = (int)-1; v3 < g_8c4daac0->f04; v1 = (char *)(v1 + 0x1d8)) {
                if (!(*(short *)((char *)(0x0 + (char *)v1) + (v9)) != (short)v5)) {
                    operation_8c19fbe0((void *)(o->f38), 0x2c, (int)(v1), v3);
                } else {
                    t5 = operation_8c17796c((int)(*(short *)((char *)((char *)v1 + 0x0) + (v11))));
                    if (t5 != 0) {
                        t6 = operation_8c17796c((int)(*(short *)((char *)((char *)v1 + 0x0) + (v9))));
                        if (t6 != 0) {
                            operation_8c19fbe0((void *)(o->f38), 0x18, (int)(v1), v3);
                        } else {
                            operation_8c19fbe0((void *)(o->f38), 0x17, (int)(v1), v3);
                        }
                    }
                }
                v3 += 1;
            }
        }
        operation_8c1cdc30((void *)(o->f38));
        if (o->f3c == 0) {
            int pm9;
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c316424;
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c31642c;
            t7 = call_8c1196d4((void *)(&(&frame)->f08), (Frame *)((&frame)), 1);
            o->f3c = (int)(t7);
            pm9 = 0x80;
            operation_8c119764((int)(o->f3c), (int)(g_8c4daac0->f00 + 0x20), pm9);
            o->f4c = 0;
        } else {
            operation_8c119764((int)(o->f3c), (int)(g_8c4daac0->f00 + 0x20), 0x80);
            o->f4c = 0;
        }
    }
    o->f24 = 1;
}
