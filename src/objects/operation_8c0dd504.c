typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
typedef struct Arg0_74 Arg0_74;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
    char unknown354[0x870];
    int fbc4;
};
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x32];
    Arg0_54 *f54;
    char unknown58[0x1c];
    Arg0_74 *f74;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct S_vv3 {
    char unknown0[0x4];
    short f04;
};
struct S_vv4 {
    char unknown0[0x22];
    unsigned short f22;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4dbde0 *g_8c4dbde0;
extern S_L8c41cba0 g_8c41cba0;
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c18c768(void *);
extern void operation_8c1dd318(void *);
extern void operation_8c18c680(void *);
void operation_8c0dd504(Object *o)
{
    unsigned short v1;
    S_vv3 *v3;
    S_vv4 *v4;
    S_c8c021ef8 *t1;
    S_g8c4dbde0 *v5;
    if (g_8c4dbde0 != 0) {
        t1 = lookup_low_id((int)g_8c418248);
        if (t1 != 0 && t1->fbc4 == 0) {
            v1 = (unsigned short)o->f20;
            if (((v1 & 1)) != 0 || ((v1 & 2)) != 0) {
                operation_8c18c768((void *)g_8c4dbde0);
                return;
            }
            if ((((&g_8c41cba0)->f28 & 8)) != 0) {
                v5 = g_8c4dbde0;
                if (((v5->f20 & 1)) != 0) {
                    if (((v1 & 0x200)) != 0) {
                        return;
                    }
                    operation_8c18c768((void *)v5);
                    return;
                }
                if (o->f74 != 0) {
                    v3 = (S_vv3 *)o->f74;
                    v3->f04 |= 1;
                    o->f74 = (Arg0_74 *)0;
                    return;
                }
                v4 = (S_vv4 *)o->f54;
                if (v4 != 0 && ((v4->f22 & 2)) == 0) {
                    operation_8c1dd318((void *)v4);
                    return;
                }
                if (((t1->f350 & 2)) == 0) {
                    operation_8c18c680((void *)v5);
                }
            }
        }
    }
}
