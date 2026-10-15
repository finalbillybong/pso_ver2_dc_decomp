typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    int f38;
};
extern int call_8c18e8a0(int, int);
int operation_8c01d7bc(Object *o, int a1, int a2, int a3)
{
    int v1;
    short v44;
    int v2;
    int t1;
    if (a1 == 0) {
        return 0;
    }
    if (((o->f38 & a1)) != 0) {
        return 1;
    }
    v1 = (int)0;
    v2 = (int)0;
    while (0xa > v2) {
        if (((a1 & *(int *)((char *)0x8c2846e0 + (v2 << 2)))) != 0) {
            v44 = (short)*(short *)((char *)((char *)o + 0x20) + (v2 << 1));
            if ((v44 - (a2 + 1)) >= 0) {
                t1 = call_8c18e8a0((int)(v44 - (a2 + 1)), a3);
                if (t1 == 0) {
                    v1 = (int)(v1 | 1);
                }
            }
        }
        v2 = (int)(v2 + 1);
    }
    return (int)(v1);
}
