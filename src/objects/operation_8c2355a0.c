typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c021ef8_s7e4 S_c8c021ef8_s7e4;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x20];
    char f20;
};
struct S_c8c021ef8_s7e4 {
    char unknown0[0x34];
    int f34;
};
extern S_g8c418248 *g_8c418248;
extern S_L8c41cba0 g_8c41cba0;
extern int operation_8c2097a8(int);
extern int lookup_low_id(int);
extern int operation_8c2357f4(Object *);
extern void operation_8c20978c(int, int);
extern void operation_8c2356cc(void *);
extern void operation_8c2356b0(void *);
void operation_8c2355a0(Object *o)
{
    int v1;
    char v2;
    int v97;
    char *pc;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c2097a8(2);
    if (t1 != 0) {
        v1 = (int)0x20000;
    } else {
        v1 = (int)0x10000;
    }
    if ((((&g_8c41cba0)->f28 & v1)) != 0) {
        v2 = (char)o->f20;
        t2 = lookup_low_id((int)g_8c418248);
        if (t2 != 0 && (pc = (char *)t2 + 0x7e4) != 0) {
            o->f20 += 1;
            if (o->f20 >= 4) {
                o->f20 -= 4;
            }
            if (o->f20 == 2) {
                t3 = operation_8c2357f4(o);
                if (t3 == 0) {
                    o->f20 += 1;
                    if (o->f20 >= 4) {
                        o->f20 -= 4;
                    }
                }
            }
            if (((((S_c8c021ef8_s7e4 *)pc)->f34 & 0x10)) != 0 && o->f20 == 3) {
                o->f20 += 1;
                if (o->f20 >= 4) {
                    o->f20 -= 4;
                }
            }
            v97 = (int)o->f20;
            if ((char)v2 != v97) {
                operation_8c20978c((int)(v97 << 0x10), -0x30001);
                operation_8c2356cc((void *)o);
                operation_8c2356b0((void *)o);
            }
        }
    }
}
