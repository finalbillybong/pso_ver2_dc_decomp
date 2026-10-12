typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c011ecc(int);
extern void call_8c0de454(int);
int operation_8c0de4f8(void)
{
    int t1;
    if (*(int *)0x8c46fe40 != 0) {
        return *(int *)0x8c46fe40;
    }
    t1 = call_8c011ecc(0x48);
    if (t1 != 0) {
        call_8c0de454(t1);
    }
    *(int *)0x8c46fe40 = t1;
    return t1;
}
