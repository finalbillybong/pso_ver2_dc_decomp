typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c05bae8(void);
extern int operation_8c17796c(int);
void operation_8c1bde30(void)
{
    int v4;
    int v2;
    int v3;
    int t1;
    int t2;
    int t3;
    int t4;
    *(int *)0x8c4e2b60 |= 1;
    t1 = operation_8c05bae8();
    if (t1 != 0) {
        v4 = (int)0x17;
        v2 = (int)0x20;
        v3 = (int)0x2a;
    } else {
        v4 = (int)0x18;
        v2 = (int)0x21;
        v3 = (int)0x30;
    }
    t2 = operation_8c17796c(v4);
    if (t2 != 0) {
        *(int *)0x8c4e2b60 |= 4;
    }
    t3 = operation_8c17796c(v2);
    if (t3 != 0) {
        *(int *)0x8c4e2b60 |= 0x20;
    }
    t4 = operation_8c17796c(v3);
    if (t4 != 0) {
        *(int *)0x8c4e2b60 |= 0x80;
    }
}
