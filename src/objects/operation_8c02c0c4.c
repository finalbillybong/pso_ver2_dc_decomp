typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
int operation_8c02c0c4(void)
{
    int v1;
    int t1;
    if (*(int *)0x8c2e2ad8 != 0) {
        v1 = (int)(*(int *)0x8c510ba0 != 0);
        if (v1 != 0) {
            return *(int *)0x8c44be04;
        }
    }
    t1 = current_effect_mode();
    return t1;
}
