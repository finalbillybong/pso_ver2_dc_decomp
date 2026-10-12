typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0x60];
    short f60;
};
struct S_c8c053d84 {
    char unknown0[0x34];
    int f34;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int lookup_low_id(int);
extern int forward_state_8c02300c(void *, void *);
int operation_8c0daec4(Object *o)
{
    S_c8c053d84 *t1;
    int t2;
    int t3;
    t1 = lookup_object_by_id((unsigned short)o->f60);
    if (t1 != 0 && (t1->f34 & -0x80000000) == -0x80000000) {
        t2 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
        t3 = forward_state_8c02300c((void *)t2, (void *)t1);
        if (t3 == 0) {
            return 1;
        }
    }
    return 0;
}
