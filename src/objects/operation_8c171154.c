typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct S_c8c021ef8 {
    char unknown0[0x818];
    int f818;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c171154(int a0, int a1)
{
    char *v10;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2))));
    if (t1 != 0) {
        v10 = (char *)t1->f818;
        if ((((int)(v10) & 4)) != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 0;
        } else {
            if ((((int)(v10) & 8)) != 0) {
                *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 1;
            } else {
                if ((((int)(v10) & 0x10)) != 0) {
                    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 2;
                } else {
                    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 3;
                }
            }
        }
        if ((((int)(v10) & 0x20)) != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)(a1 + 1) << 2)) = 0;
            return;
        }
        if ((((int)(v10) & 0x40)) != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)(a1 + 1) << 2)) = 1;
            return;
        }
        if ((((int)(v10) & 0x80)) != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)(a1 + 1) << 2)) = 2;
            return;
        }
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)(a1 + 1) << 2)) = 3;
        return;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 3;
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)(a1 + 1) << 2)) = 3;
}
