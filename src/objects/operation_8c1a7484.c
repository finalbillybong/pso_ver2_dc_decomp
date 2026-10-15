typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
extern int operation_8c02c320(void *);
int operation_8c1a7484(int a0)
{
    int t1;
    int t2;
    t2 = current_effect_mode();
    t1 = operation_8c02c320((void *)a0);
    if ((char)t1 != 2) {
        if ((char)t1 != 4) {
            if ((char)t1 == 5) {
                goto L_8c1a74b0;
            }
            goto L_8c1a74b4;
        }
        return 8;
    }
L_8c1a74b0:;
    return 0x15;
L_8c1a74b4:;
    if (t2 == 0xe && *(int *)0x8c4e22d0 != 0) {
        return 4;
    }
    return *(short *)((char *)0x8c2885b6 + (t2 << 3));
}
