typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_x70256 S_x70256;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
struct S_x70256 {
    char unknown0[0x48];
    int f48;
};
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern int current_mode_active(void);
void operation_8c1850c0(Object *o)
{
    S_c8c021ef8 *t1;
    int t2;
    S_c8c021ef8 *t3;
    Object *self = o;
    t1 = lookup_low_id((int)g_8c418248);
    t3 = lookup_low_id((int)(self->f02));
    if (t1 != 0) {
        t2 = current_mode_active();
        if (t2 != 0 && t1->f37c == t3->f37c) {
            ((S_x70256 *)((char *)(int *)((char *)t1 + 0x418) + (self->f02 << 2)))->f48 |= 1;
        }
    }
}
