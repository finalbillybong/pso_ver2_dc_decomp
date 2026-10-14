typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_bc8 S_c8c021ef8_bc8;
typedef struct S_g8c418248 S_g8c418248;
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0xb88];
    S_c8c021ef8_bc8 *fbc8;
};
struct S_c8c021ef8_bc8 {
    char unknown0[0x20];
    short f20;
};
extern char g_8c339ca0[];
extern int call_8c25062c(void);
extern S_c8c021ef8 *lookup_low_id(int);
int operation_8c24997c(void)
{
    int t1;
    S_c8c021ef8 *t2;
    S_c8c021ef8 *t3;
    t1 = call_8c25062c();
    if (t1 != 3) {
        return 0;
    }
    if (*(int *)(g_8c339ca0 + 0x4c) != 0) {
        return 0;
    }
    t2 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t2 == 0) {
        return 0;
    }
    if (t2->f3c <= -100.0f || 330.0f <= t2->f3c) {
        return 0;
    }
    t3 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t3 == 0 || 0x1e > t3->fbc8->f20) {
        return 0;
    }
    return 1;
}
