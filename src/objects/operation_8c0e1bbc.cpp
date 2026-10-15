typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct S_vv1 S_vv1;
class S_vv1_0;
struct Object {
    int tag;
    Arg0_4 *f04;
};
struct S_vv1 {
    S_vv1_0 *f00;
};
class S_vv1_0 {
public:
    char unknown0[0x4];
    virtual void v0(int);
};
typedef struct S_vv1_0Data {

} S_vv1_0Data;
extern "C" void call_8c18de08(void *);
extern "C" void operation_8c0e1bbc(Object *o)
{
    char *v2;
    S_vv1 *v1;
    if (o->tag != 0) {
        v1 = (S_vv1 *)&*(int *)((char *)((char *)o->f04 + 0x0) + ((int)o->tag + -1 << 2));
        v2 = (char *)o->tag;
        while (v2-- != 0) {
            if (v1->f00 != 0) {
                v1->f00->v0(1);
            }
            v1--;
        }
        call_8c18de08((void *)(o->f04));
        o->tag = 0;
        o->f04 = (Arg0_4 *)0;
    }
}
