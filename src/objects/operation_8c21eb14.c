typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x68];
    char f68;
    char f69;
};
struct S_vv1 {
    char unknown0[0x69];
    char f69;
};
extern int call_8c21ec0c(Object *, char);
extern void call_8c21ec3c(S_vv1 *);
void operation_8c21eb14(Object *o)
{
    S_vv1 *v1;
    int t1;
    int t2;
    if (((o->f68 & 4)) == 0) {
        t1 = call_8c21ec0c(o, o->f69);
        if (t1 == 0) {
            v1 = (S_vv1 *)o;
            do {
                v1->f69 += 1;
                if (v1->f69 > 6) {
                    v1->f69 += -6;
                }
                t2 = call_8c21ec0c((Object *)v1, v1->f69);
            } while (t2 == 0);
            call_8c21ec3c(v1);
        }
    }
}
