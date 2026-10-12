typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1a7128 S_c8c1a7128;
typedef struct Object Object;
struct Object {
    char unknown0[0x184];
    int f184;
};
struct S_c8c1a7128 {
    char unknown0[0x6];
    short f06;
};
extern S_c8c1a7128 *call_8c1a7128(void);
extern void call_8c025764(int, int, short);
void operation_8c025660(Object *o, int a1)
{
    S_c8c1a7128 *t1;
    t1 = call_8c1a7128();
    call_8c025764(a1, o->f184 + 6, t1->f06);
}
