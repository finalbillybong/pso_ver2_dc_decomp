typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
class S_g8c4e2ba4 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4e2ba4Data {

} S_g8c4e2ba4Data;
class S_g8c4e2ba0 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4e2ba0Data {

} S_g8c4e2ba0Data;
extern "C" void destroy_hierarchy_node(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c1bef00(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c275620;
        if (*(int *)0x8c4e2ba4 != 0) {
            if (*(int *)0x8c4e2ba4 != 0) {
                (*(S_g8c4e2ba4 **)0x8c4e2ba4)->v0(1);
            }
            *(int *)0x8c4e2ba4 = 0;
        }
        if (*(int *)0x8c4e2ba0 != 0) {
            if (*(int *)0x8c4e2ba0 != 0) {
                (*(S_g8c4e2ba0 **)0x8c4e2ba0)->v0(1);
            }
            *(int *)0x8c4e2ba0 = 0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
