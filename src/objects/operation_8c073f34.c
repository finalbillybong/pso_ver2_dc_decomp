typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x13c];
    int f13c;
};
struct S_vv2 {
    char unknown0[0x33];
    char f33;
};
extern void call_8c1c9f04(int, int);
extern void call_8c1c9730(int);
void operation_8c073f34(Object *o)
{
    S_vv2 *v2;
    int v4;
    char *v1;
    int v3;
    if (o != 0) {
        v1 = (char *)o->f13c;
        v2 = (S_vv2 *)o;
        v2 = (S_vv2 *)((char *)v2 + 0xc8);
        v3 = (int)0;
        v4 = (int)o;
        v4 += 0x140;
        while ((unsigned char)v3 != (unsigned char)v1) {
            call_8c1c9f04((int)(v4 + 8), (int)(v2->f33));
            call_8c1c9730((int)(v4 + 8));
            v4 = (int)(v4 + 0x1c);
            v3 = (int)(v3 + 1);
        }
    }
}
