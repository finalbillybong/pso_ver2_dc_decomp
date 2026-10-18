typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x3856 S_x3856;
struct Object {
    char unknown0[0x454];
    unsigned short f454;
    char unknown456[0x8e];
    int f4e4;
};
struct S_x3856 {
    char unknown0[0x48];
    int f48;
};
int operation_8c025f7c(Object *o)
{
    int v1;
    int v2;
    int v4;
    v1 = (int)(((((S_x3856 *)((char *)(int *)((char *)o + 0x418) + ((o->f454 & 0xffff) << 2)))->f48 & 1)) != 0);
    if (v1 != 0) {
        v2 = (int)(o->f4e4 == 0);
        if (v2 != 0) {
            v4 = (int)((char *)o + 0x4c0);
        } else {
            v4 = (int)&o->f4e4;
        }
        return (int)(v4);
    }
    return (int)(((char *)o + 0x4c0));
}
