typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a48 S_g8c469a48;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
};
extern int g_8c469a44;
extern S_g8c469a48 *g_8c469a48;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int call_8c18e768(int, int);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c077370(Object *o, int a1)
{
    char *v14;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c26308c;
        v14 = (char *)o->f20;
        if (v14 != 0) {
            t1 = call_8c18e768((int)(v14 - g_8c469a44), 0x10);
            *(int *)((char *)((char *)g_8c469a48 + 0x0) + ((unsigned int)(unsigned int)(unsigned int)t1 >> 2 >> 2 >> 1 << 2)) = 0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
