typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct S_x42352 S_x42352;
struct Object {
    char unknown0[0x20];
    int f20;
    Arg0_24 *f24;
    int f28;
};
struct S_x42352 {
    int f00;
};
void operation_8c2233b8(Object *o, int a1)
{
    int v1;
    char *v63;
    if (o->f20 > a1) {
        v1 = (int)(a1 << 2);
        if (*(int *)((char *)((char *)o->f24 + 0x0) + (v1)) == 0) {
            v63 = (char *)o->f28;
            if (v63 != 0) {
                ((void (*)(int))(v63))(a1);
            }
        }
        ((S_x42352 *)((int)o->f24 + v1))->f00 += 1;
    }
}
