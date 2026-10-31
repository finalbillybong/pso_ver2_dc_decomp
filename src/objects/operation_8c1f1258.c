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
    short f04;
};
struct S_c8c021ef8 {
    char unknown0[0x360];
    short f360;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c02a6d4(S_c8c021ef8 *);
extern void operation_8c1e8e60(int, int, int);
void operation_8c1f1258(Object *o)
{
    Object *self = o;
    S_c8c021ef8 *t1;
    unsigned short id;
    int v11;
    int v7;
    int g;
    int t2;
    t1 = lookup_low_id(self->f02);
    t2 = call_8c02a6d4(t1);
    if (t2 != 0) {
        int v4;
        g = g_8c4627c8;
        v4 = v7 = v11 = 0;
        id = self->f02;
        if (g == 0 && id == g_8c418248) {
            v4 = (int)1;
        }
        if (v4 == 0 && self->f04 >= 0) {
            v7 = (int)1;
        }
        if (v7 != 0 && 0x154 > self->f04) {
            v11 = (int)1;
        }
        if (v11 != 0) {
            t1->f360 = self->f04;
            operation_8c1e8e60((int)t1, 0x17, 0);
        }
    }
}
