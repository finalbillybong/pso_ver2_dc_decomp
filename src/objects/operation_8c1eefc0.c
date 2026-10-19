typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
typedef struct Word4 {
    int w;
} Word4;
struct Object {
    char unknown0[0x2];
    short f02;
    Word4 f04;
};
struct S_c8c021ef8 {
    char unknown0[0x10];
    int f10;
    char unknown14[0x33c];
    int f350;
    char unknown354[0x48c];
    Word4 f7e0;
};
extern int g_8c418248;
extern int g_8c44be90;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern void reset_motion_8c1ef224(void *);
extern void operation_8c1e8e60(int, int, int);
void operation_8c1eefc0(Object *o)
{
    int v1;
    unsigned short v2;
    int v3;
    int v4;
    int v7;
    int v8;
    S_c8c021ef8 *t1;
    int v9;
    Object *self = o;
    v1 = (int)g_8c4627c8;
    v2 = (unsigned short)self->f02;
    v7 = (int)0;
    if (v1 == 0) {
        if ((unsigned short)v2 == g_8c418248) {
            v7 = (int)1;
        }
    }
    v8 = (int)(v7 == 0);
    if (v8 != 0) {
        t1 = lookup_low_id((int)((unsigned short)v2));
        if (t1 != 0) {
            t1->f7e0 = self->f04;
            reset_motion_8c1ef224((void *)t1);
            v9 = (int)(((t1->f350 & 4)) != 0);
            if (v9 == 0 && t1->f10 == g_8c44be90) {
                operation_8c1e8e60((int)t1, 0xf, 0);
            }
        }
    }
}
