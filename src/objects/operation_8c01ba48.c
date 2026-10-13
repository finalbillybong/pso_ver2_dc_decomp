typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c227554(void);
int operation_8c01ba48(void)
{
    int t1;
    t1 = operation_8c227554();
    if (t1 != 0) {
        if (t1 == 1) {
            goto L_8c01ba66;
        }
        if (t1 == 2) {
            goto L_8c01ba6a;
        }
    } else {
        return (int)(*(int *)0x8c461c00);
L_8c01ba66:;
        return 0;
L_8c01ba6a:;
        return 1;
    }
    return 0;
}
