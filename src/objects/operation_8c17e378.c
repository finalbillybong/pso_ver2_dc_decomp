typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c011e9c(int);
extern void call_8c12b880(int, int, int);
int operation_8c17e378(void)
{
    int v1;
    int t1;
    if (*(int *)0x8c4dbb10 == 0) {
        v1 = (int)(*(int *)0x8c4dbb08 << 9);
        t1 = call_8c011e9c(v1);
        *(int *)0x8c4dbb10 = (int)(t1);
        call_8c12b880(t1, 0, v1);
        return 1;
    }
    return 0;
}
