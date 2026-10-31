typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
    Vector3 f08;
    Vector3 f14;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2c8];
    int f310;
    char unknown314[0x2c8];
    int f5dc;
    Vector3 f5e0;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c02a6d4(S_c8c021ef8 *);
extern int call_8c0c4f08(void *);
extern void operation_8c1e8e60(int, int, int);
static inline int is_local_owner(Object *o)
{
    int r;
    unsigned short id;
    r = 0;
    id = o->f02;
    if (g_8c4627c8 == 0 && id == g_8c418248) {
        r = 1;
    }
    return r;
}
void handle_6x55_intra_map_warp_8c1f05d4(Object *o)
{
    Object *base;
    S_c8c021ef8 *t1;
    int v1;
    int v2;
    int v10;
    int t2;
    int t3;
    int t4;
    base = o;
    t1 = lookup_low_id((int)(base->f02));
    t2 = call_8c02a6d4(t1);
    if (t2 != 0) {
        v1 = (int)0;
        v2 = (int)0;
        if (is_local_owner(base) == 0) {
            t3 = call_8c0c4f08((void *)(&base->f08));
            if (t3 == 0) {
                v2 = (int)1;
            }
        }
        if (v2 != 0) {
            t4 = call_8c0c4f08((void *)(&base->f14));
            if (t4 == 0) {
                v1 = (int)1;
            }
        }
        if (v1 != 0) {
            v10 = (int)(((t1->f310 & 0x8200)) != 0);
            if (v10 == 0) {
                t1->f5dc = (int)(base->f04);
                *(Vector3 *)&t1->f3c = *(Vector3 *)&base->f08;
                *(Vector3 *)&t1->f5e0 = *(Vector3 *)&base->f14;
                operation_8c1e8e60((int)t1, 0x14, 0);
            }
        }
    }
}
