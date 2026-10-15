typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbb60 S_g8c4dbb60;
typedef struct S_vv42 S_vv42;
class S_c8c122700;
class S_c8c122700 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
};
typedef struct S_c8c122700Data {
    char unknown0[0x14];
    int f14;
} S_c8c122700Data;
struct S_vv42 {
    char unknown0[0x48];
    float f48;
};
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void initialize_effect(void *, void *, void *, int, int, int, int, unsigned short);
extern "C" void reparent_hierarchy_node(void *, void *);
extern "C" void operation_8c18582c(int a0, int a1)
{
    S_vv42 *v42;
    S_c8c122700 *t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
    if (t1 != 0) {
        initialize_effect((void *)t1, (void *)a0, (void *)(*(int *)0x8c46f100 + a1 * 0x98), 1, 0, 0, 1, (unsigned short)0x40);
    }
    if (t1 != 0) {
        t1->v1();
        while ((v42 = (S_vv42 *)((S_c8c122700Data *)t1)->f14) != 0) {
            v42->f48 += -5.0f;
            reparent_hierarchy_node((void *)v42, (void *)(*(S_g8c4dbb60 **)0x8c4dbb60));
        }
    }
}
