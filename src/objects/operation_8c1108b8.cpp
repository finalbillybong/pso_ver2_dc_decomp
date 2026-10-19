typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
class S_c8c021ef8;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void destroy_hierarchy_node(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c1108b8(Object *o, int a1)
{
    int v4;
    int v1;
    int v5;
    int v6;
    int v2;
    int v3;
    S_c8c021ef8 *t1;
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c269b38;
        v1 = (int)0x308;
        v2 = (int)0x5f8;
        v3 = (int)0xffff;
        v4 = (int)0;
        while (4 > v4) {
            t1 = lookup_low_id(v4);
            if (t1 != 0) {
                v5 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v1)) == 6);
                if (v5 != 0) {
                    if (t1 == 0) {
                        goto L_8c110928;
                    }
                    t1->v0(1);
                } else {
                    v6 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v1)) == 3);
                    if (v6 != 0 && (*(unsigned short *)((char *)((char *)t1 + 0x0) + (v2)) & 0xffff) == (unsigned short)v3 && t1 != 0) {
                        t1->v0(1);
                    }
                }
            }
L_8c110928:;
            v4 = (int)(v4 + 1);
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
