typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8628 S_g8c4d8628;
extern int operation_8c05bbf8(void);
extern void operation_8c105494(int, int, int);
int operation_8c1221b4(void)
{
    int v1;
    int v2;
    int t1;
    v1 = (int)(void *)0x8c285db8;
    t1 = operation_8c05bbf8();
    v2 = (int)v1;
    if (t1 != 0) {
        v2 = (int)(void *)0x8c285dc5;
    }
    operation_8c105494(v2, (int)(*(S_g8c4d8628 **)0x8c4d8628), 0x1000);
    return 1;
}
