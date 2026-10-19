typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    int fe0;
};
int operation_8c05b19c(Object *o)
{
    int v3;
    int v1;
    int v2;
    v3 = (int)0;
    v1 = (int)0x700000;
    v2 = (int)o->fe0;
    while (v2 > v3) {
        if (((*(int *)((char *)((char *)o->fdc + 0x18) + (v3 * 0x2c)) & v1)) != 0) {
            return 1;
        }
        v3 = (int)(v3 + 1);
    }
    return 0;
}
