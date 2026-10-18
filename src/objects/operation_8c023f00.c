typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x20];
    short f20;
};
struct S_vv2 {
    char unknown0[0x14];
    int f14;
};
extern int operation_194d60(unsigned short);
void operation_8c023f00(Object *o, int a1, int a2)
{
    int v1;
    short v3;
    int t1;
    if (a1 != 0) {
        v1 = (int)0;
        v3 = o->f20;
        while (a2 > v1) {
            t1 = operation_194d60(v3);
            ((S_vv2 *)a1)->f14 = (int)(t1);
            v1 = (int)(v1 + 1);
            a1 = (int)((char *)a1 + 28);
        }
    }
}
