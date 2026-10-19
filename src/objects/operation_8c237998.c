typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block1300 {
    int words[325];
} Block1300;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern Block1300 g_8c33978c;
extern Block1300 g_8c339ca0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c510ba0;
extern void operation_8c246608(void);
extern void call_8c237c80(Object *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c237998(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c279200;
        operation_8c246608();
        call_8c237c80(o);
        *(Block1300 *)&g_8c339ca0 = *(Block1300 *)&g_8c33978c;
        g_8c510ba0 = 0;
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
