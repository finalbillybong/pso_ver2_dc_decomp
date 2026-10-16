typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c011e9c(int);
extern void call_8c12b880(int, int, int);
int operation_8c17e3e8(void)
{
    int v1;
    int t1;
    if (*(int *)0x8c4dbb14 == 0) {
        v1 = (int)(*(int *)0x8c4dbb0c << 9);
        t1 = call_8c011e9c(v1);
        *(int *)0x8c4dbb14 = (int)(t1);
        call_8c12b880(t1, 0, v1);
        return 1;
    }
    return 0;
}
