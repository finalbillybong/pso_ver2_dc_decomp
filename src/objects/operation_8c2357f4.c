typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x34];
    int f34;
};
extern int lookup_low_id(int);
extern int operation_8c02b2a4(void);
int operation_8c2357f4(void)
{
    S_vv1 *v1;
    int t1;
    int t2;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 == 0) {
        return 0;
    }
    v1 = (S_vv1 *)(t1 + 0x7e4);
    if (v1 == 0) {
        return 0;
    }
    t2 = operation_8c02b2a4();
    if (t2 != 0) {
        return 1;
    }
    if (((v1->f34 & 0x10)) != 0 && *(int *)0x8c4703c0 == 3) {
        return 1;
    }
    return 0;
}
