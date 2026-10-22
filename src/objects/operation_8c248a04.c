typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
};
struct S_L8c339ca0 {
    char unknown0[0x3c];
    int f3c;
};
extern int g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
extern int lookup_low_id(int);
void operation_8c248a04(Object *o)
{
    int v1;
    int v2;
    int t1;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 == 0 || (v2 = o->f04) < 0 || v2 >= 4) {
        return;
    }
    t1 = lookup_low_id(v2);
    if (t1 != 0) {
        *(int *)((char *)&g_8c339ca0.f3c + (v2 << 2)) = 1;
    }
}
