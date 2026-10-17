typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
    char unknown4[0x4];
    int f08;
};
int operation_8c0f3970(Object *o, int a1)
{
    int v2;
    int v3;
    int v6;
    int v1;
    v1 = (int)o->f08;
    v6 = (int)0;
    goto L_8c0f3988;
    v2 = (int)0;
L_8c0f3976:;
    v3 = (int)*(int *)((char *)((char *)o->tag + 0x0) + (v2 << 2));
    if (v3 == a1) {
        return 1;
    }
    v6 = (int)(v2 + 1);
L_8c0f3988:;
    v2 = (int)v6;
    if (v1 > v6) {
        goto L_8c0f3976;
    }
    return 0;
}
