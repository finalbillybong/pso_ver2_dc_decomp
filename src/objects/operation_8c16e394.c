typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4db408 S_g8c4db408;
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d0];
    short f308;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c0298b0(void *);
void operation_8c16e394(int a0, int a1)
{
    int v1;
    int v2;
    S_c8c021ef8 *t1;
    int t2;
    t1 = lookup_low_id(a1);
    if (t1 != 0) {
        v1 = (int)(t1->f308 == 6);
        if (v1 == 0) {
            v2 = (int)(t1->f308 == 3);
            if (v2 != 0) {
                if (((t1->f34 & 0x800)) == 0) {
                    goto L_8c16e3ec;
                }
                *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 << 2)) = 1;
                return;
            }
            t2 = operation_8c0298b0((void *)t1);
            if (t2 != 0) {
                *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 << 2)) = 1;
                return;
            }
        }
    }
L_8c16e3ec:;
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 << 2)) = 0;
}
