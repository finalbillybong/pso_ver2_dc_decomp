typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db25c S_g8c4db25c;
typedef struct S_g8c4db25c_4 S_g8c4db25c_4;
typedef struct Object Object;
struct S_g8c4db25c {
    char unknown0[0x4];
    S_g8c4db25c_4 *f04;
};
struct S_g8c4db25c_4 {
    char unknown0[0x8];
    int f08;
};
struct Object {
    int tag;
};
extern int query_field_8c2596c0(void);
void operation_8c163ee0(Object *o)
{
    char *v1;
    int t1;
    v1 = (char *)(*(S_g8c4db25c **)0x8c4db25c)->f04->f08;
    if (*(int *)0x8c4dc800 == 0) {
        ((void (*)(void))(v1))();
        return;
    }
    if (o != 0) {
        switch (o->tag) {
        case 16:
        case 17:
            t1 = query_field_8c2596c0();
            o->tag = (int)(t1);
        }
        ((void (*)(Object *))(v1))(o);
    }
}
