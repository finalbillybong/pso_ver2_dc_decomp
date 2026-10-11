typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_184 S_c8c021ef8_184;
typedef struct S_g8c418248 S_g8c418248;
struct S_c8c021ef8 {
    char unknown0[0x184];
    S_c8c021ef8_184 *f184;
};
struct S_c8c021ef8_184 {
    char unknown0[0x20];
    int f20;
};
extern S_c8c021ef8 *lookup_low_id(int);
int operation_8c1bd03c(void)
{
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 == 0) {
        return 0;
    }
    return (t1->f184 == 0) ? 0 : t1->f184->f20;
}
