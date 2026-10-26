typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x82];
    char f82;
    char f83;
};
extern int g_8c5059a0;
extern int call_8c21f468(void);
extern void operation_8c21f574(void *, int);
extern int operation_8c21f544(void *, int);
extern void reset_slot_8c21f564(void *, int);
void operation_8c225464(Object *o)
{
    int v6;
    char *v1;
    int v2;
    int v3;
    int v5;
    int v4;
    int t1;
    int t2;
    v2 = (int)(o->f82 + (o->f83 << 2));
    v1 = (char *)g_8c5059a0;
    t1 = call_8c21f468();
    v6 = (int)(0xc - t1);
    if (v6 > v2) {
        operation_8c21f574((void *)v1, v2);
        return;
    }
    v3 = (int)(v2 - v6);
    v5 = (int)v3;
    v4 = (int)0;
    while (4 > v4) {
        t2 = operation_8c21f544((void *)v1, v4);
        if (t2 != 0) {
            if (!(v5-- > 0)) {
                reset_slot_8c21f564((void *)v1, v4);
                return;
            }
        }
        v4 = (int)(v4 + 1);
    }
}
