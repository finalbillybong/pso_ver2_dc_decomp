typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_74 Arg0_74;
typedef struct S_vv18 S_vv18;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x22];
    Arg0_44 *f44;
    char unknown48[0x2c];
    Arg0_74 *f74;
};
struct Arg0_44 {
    char unknown0[0x4];
    unsigned short f04;
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct S_vv18 {
    char unknown0[0x4];
    short f04;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbde0 *g_8c4dbde0;
extern S_L8c41cba0 g_8c41cba0;
extern int hierarchy_is_active(void *);
extern int lookup_low_id(int);
extern int operation_8c184c80(void *, void *);
extern int operation_8c2097a8(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c234cb8(int, void *);
void operation_8c0dd70c(Object *o)
{
    int t3;
    int t5;
    int v9;
    int v19;
    S_vv7 *v7;
    int t2;
    char *v156;
    int t4;
    int v8;
    v156 = (char *)o->f74;
    if (v156 != 0) {
        int t1;
        t1 = hierarchy_is_active((void *)v156);
        if (t1 == 0) {
            o->f74 = (Arg0_74 *)0;
        }
    }
    if (o->f44 != 0 && ((o->f44->f04 & 4)) == 0) {
        t2 = lookup_low_id((int)g_8c418248);
        if (t2 == 0) {
            v7 = (S_vv7 *)o->f74;
            if (!(0 == v7)) {
                v7->f04 = v7->f04 | 1;
                o->f74 = (Arg0_74 *)0;
            } else {
            }
            return;
        }
        t3 = operation_8c184c80((void *)(t2 + 0x418), (void *)t2);
        if (g_8c4dbde0 == 0) {
            v8 = (int)0;
        } else {
            v8 = (int)(g_8c4dbde0->f20 & 1);
        }
        if (v8 == 0) {
            v9 = (unsigned short)o->f20;
            if (((v9 & 1)) == 0) {
                if ((unsigned short)t3 != 0xffff && (unsigned short)t3 != (int)(g_8c418248)) {
                    goto L_8c0dd7be;
                }
                if (((v9 & 2)) == 0 && ((v9 & 0x10)) == 0) {
                    goto L_8c0dd7d6;
                }
            }
        }
    L_8c0dd7be:
        ;
        if (0 != o->f74) {
            ((S_vv18 *)o->f74)->f04 |= 1;
            o->f74 = (Arg0_74 *)0;
            return;
        L_8c0dd7d6:
            ;
            if (o->f74 == 0 && ((v9 & 0x20)) == 0) {
                t4 = operation_8c2097a8(2);
                if (t4 != 0) {
                    v19 = (int)0x20000;
                } else {
                    v19 = (int)0x10000;
                }
                if ((((&g_8c41cba0)->f20 & v19)) != 0 && (((&g_8c41cba0)->f28 & 0x200)) != 0) {
                    t5 = allocate_block(g_8c4d97e0, (unsigned int)0x34);
                    if (t5 != 0) {
                        call_8c234cb8(t5, g_8c44bea0);
                    }
                    o->f74 = (Arg0_74 *)t5;
                }
            }
        }
    }
}
