typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_98 Arg0_98;
typedef struct Arg0_9c Arg0_9c;
typedef struct Arg0_a0 Arg0_a0;
typedef struct S_vv21 S_vv21;
typedef struct S_vv22 S_vv22;
typedef struct S_vv23 S_vv23;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    Arg0_10 *f10;
    char unknown14[0x14];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    unsigned char f34;
    char unknown35[0x63];
    Arg0_98 *f98;
    Arg0_9c *f9c;
    Arg0_a0 *fa0;
    int fa4;
};
struct Arg0_10 {
    char unknown0[0x4];
    short f04;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv21 {
    char unknown0[0x4];
    short f04;
};
struct S_vv22 {
    char unknown0[0x4];
    short f04;
};
struct S_vv23 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c4db658;
extern S_g8c4dbde0 *g_8c4dbde0;
extern S_L8c41cba0 g_8c41cba0;
extern int call_8c16c27c(void *);
extern int lookup_low_id(int);
extern int player_flag9_8c026508(void);
extern int call_8c0dddcc(void);
extern int operation_8c0ddc88(int);
extern void operation_8c0ddcfc(int);
extern void release_scene_8c16c1e4(void);
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
extern int query_fade_active(void);
extern int operation_8c174184(void *);
extern int operation_8c174444(void *);
extern int operation_8c17478c(void *);
extern int operation_8c1747b0(void *);
void operation_8c173c54(Object *o)
{
    int v3;
    int v11;
    S_vv21 *v21;
    S_vv22 *v22;
    S_vv23 *v23;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    Arg0_10 *v10 = o->f10;
    switch (o->fa4) {
    case 0:
    case 1:
        t1 = call_8c16c27c((void *)(((char *)o + 0x20)));
        o->fa4 = (int)(t1);
        return;
    case 2:
        o->f04 |= 1;
        return;
    case 3:
        v10->f04 |= 1;
        return;
    case 4:
        t2 = lookup_low_id((int)g_8c418248);
        if (t2 == 0) {
            return;
        }
        t3 = player_flag9_8c026508();
        if (t3 != 0) {
            return;
        }
        if ((((&g_8c41cba0)->f28 & 4)) == 0) {
            return;
        }
        t4 = call_8c0dddcc();
        t5 = operation_8c0ddc88(t4);
        if (t5 == 0) {
            operation_8c0ddcfc(t4);
            return;
        }
        o->fa4 = 0;
        return;
    case 5:
        t6 = lookup_low_id((int)g_8c418248);
        if (t6 != 0) {
            if ((((&g_8c41cba0)->f28 & 4)) != 0) {
                o->fa4 = 0;
            }
        }
        if ((((&g_8c41cba0)->f28 & 8)) == 0) {
            if (g_8c4dbde0 == 0) {
                v3 = (int)0;
            } else {
                v3 = (int)(g_8c4dbde0->f20 & 1);
            }
            if (v3 != 0) {
                return;
            }
        }
        release_scene_8c16c1e4();
        o->f04 |= 1;
        return;
    case 7:
        if (((o->f30->f80 & 0xffff & 2)) != 0) {
            t7 = operation_8c1571f4((void *)(o->f30));
            *(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)) = (int)(t7);
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
            o->fa4 = 0;
        }
        if ((((&g_8c41cba0)->f28 & 8)) == 0) {
            if (g_8c4dbde0 == 0) {
                v11 = (int)0;
            } else {
                v11 = (int)(g_8c4dbde0->f20 & 1);
            }
            if (v11 != 0) {
                return;
            }
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        release_scene_8c16c1e4();
        o->f04 |= 1;
        return;
    case 8:
        t8 = query_fade_active();
        if (t8 != 0) {
            return;
        }
        o->fa4 = 0;
        return;
    case 9:
        t9 = operation_8c174184((void *)(o->f98));
        if (t9 == 0) {
            return;
        }
        v21 = (S_vv21 *)o->f98;
        v21->f04 |= 1;
        o->f98 = (Arg0_98 *)0;
        o->fa4 = 0;
        return;
    case 10:
        t10 = operation_8c174444((void *)(o->f9c));
        if (!(t10 >= 0)) {
            return;
        }
        g_8c4db658 = (int)(t10);
        v22 = (S_vv22 *)o->f9c;
        v22->f04 |= 1;
        o->f9c = (Arg0_9c *)0;
        o->fa4 = 0;
        return;
    case 11:
        t11 = operation_8c17478c((void *)(o->fa0));
        if (t11 != 0) {
            t12 = operation_8c1747b0((void *)(o->fa0));
            *(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)) = (int)(t12);
            v23 = (S_vv23 *)o->fa0;
            v23->f04 |= 1;
            o->fa0 = (Arg0_a0 *)0;
            o->fa4 = 0;
        }
        return;
    case 6:
        break;
    }
}
