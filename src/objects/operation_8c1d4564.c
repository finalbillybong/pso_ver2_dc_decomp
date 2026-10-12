typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1dc6e4 S_c8c1dc6e4;
typedef struct S_c8c1dc6e4_4 S_c8c1dc6e4_4;
typedef struct Object Object;
typedef struct Arg0_48 Arg0_48;
struct Object {
    char unknown0[0x48];
    Arg0_48 *f48;
};
struct S_c8c1dc6e4 {
    char unknown0[0x4];
    S_c8c1dc6e4_4 *f04;
};
extern int operation_8c1571f4(void *);
extern S_c8c1dc6e4 *call_8c1dc6e4(int);
extern void call_8c217ed8(void *);
void operation_8c1d4564(Object *o)
{
    int t1;
    S_c8c1dc6e4 *t2;
    t1 = operation_8c1571f4(o->f48);
    t2 = call_8c1dc6e4(t1);
    call_8c217ed8(t2->f04);
}
