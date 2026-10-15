typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern S_c8c021ef8 *lookup_low_id(int);
int operation_8c07f914(void)
{
    int v4;
    S_c8c021ef8 *t1;
    v4 = (int)0;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0 && ((t1->f350 & 0x400)) != 0) {
        v4 = (int)1;
    }
    return (int)(v4);
}
