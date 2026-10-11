typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x90];
    int f90;
};
int operation_8c1407e4(Object *o)
{
    int v5;
    if (o->f90 == 0) {
        if (*(int *)0x8c4d9e64 >= 0) {
            if (!(*(int *)0x8c4d9e64 > 1)) {
                goto L_8c1407fe;
            }
        }
    }
    return 0;
L_8c1407fe:;
    v5 = (int)0x90;
    if (*(int *)0x8c4d9e64 >= 1) {
        return 0;
    }
    *(int *)((char *)((char *)o + 0x0) + (v5)) = 1;
    *(int *)0x8c4d9e64 += 1;
    return 1;
}
