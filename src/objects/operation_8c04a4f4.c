typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418244 S_g8c418244;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
extern S_g8c418244 *g_8c418244;
extern int call_8c18e8a0(void *, int);
int operation_8c04a4f4(Object *o, int a1)
{
    int v1;
    int t1;
    int t2;
    t1 = call_8c18e8a0(g_8c418244, a1);
    t2 = call_8c18e8a0((void *)(o->f20), a1);
    v1 = (int)(t1 == t2);
    return (int)(v1);
}
