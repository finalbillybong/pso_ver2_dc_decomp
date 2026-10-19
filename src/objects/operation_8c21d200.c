typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct Arg0_4c Arg0_4c;
typedef struct Arg0_50 Arg0_50;
struct Object {
    char unknown0[0x1c];
    void *f1c;
    char unknown20[0x10];
    void *f30;
    char unknown34[0x10];
    Arg0_44 *f44;
    Arg0_48 *f48;
    Arg0_4c *f4c;
    Arg0_50 *f50;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c505960;
extern char g_8c278610[];
extern void request_resource_release(void *);
extern void destroy_object_8c10671c(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c21d200(Object *o, int a1)
{
    if (o != 0) {
        o->f30 = (void *)g_8c278610;
        o->f1c = (g_8c278610 + 0x8);
        if (o->f44 != 0) {
            request_resource_release((void *)(o->f44));
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f48 != 0) {
            request_resource_release((void *)(o->f48));
            o->f48 = (Arg0_48 *)0;
        }
        if (o->f4c != 0) {
            request_resource_release((void *)(o->f4c));
            o->f4c = (Arg0_4c *)0;
        }
        if (o->f50 != 0) {
            request_resource_release((void *)(o->f50));
            o->f50 = (Arg0_50 *)0;
        }
        g_8c505960 = 0;
        destroy_object_8c10671c((void *)(((char *)o + 0x4)), (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
