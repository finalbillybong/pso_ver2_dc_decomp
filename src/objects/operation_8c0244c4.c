typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d8];
    int f310;
    char unknown314[0x3c];
    int f350;
};
int operation_8c0244c4(Object *o)
{
    int v1;
    int v3;
    int v2;
    v1 = (int)o->f350;
    if (((v1 & 2)) == 0) {
        v2 = (int)(((o->f310 & 0x43001e)) != 0);
        if (v2 != 0 && ((o->f34 & 0x20)) == 0) {
            v3 = (int)(((v1 & 1)) != 0);
            if (v3 == 0) {
                goto L_8c0244fc;
            }
        }
    }
    return 0;
L_8c0244fc:;
    return 1;
}
