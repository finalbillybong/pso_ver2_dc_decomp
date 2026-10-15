typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9e4_s11c4 S_g8c4db9e4_s11c4;
struct S_g8c4db9e4_s11c4 {
    char unknown0[0x2];
    unsigned short f02;
};
extern int get_field_8c247ea4(int);
int operation_8c247dac(void)
{
    int t1;
    if (*(int *)0x8c4db9e4 == 0) {
        return -1;
    }
    if ((*(int *)0x8c4db9e4 + 0x11c4) == 0) {
        return -1;
    }
    t1 = get_field_8c247ea4((int)(((S_g8c4db9e4_s11c4 *)((char *)*(S_g8c4db9e4 **)0x8c4db9e4 + 0x11c4))->f02));
    return (int)(t1);
}
