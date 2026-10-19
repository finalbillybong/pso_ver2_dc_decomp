typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_x21744_0 S_x21744_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x34];
    unsigned short f68;
};
extern int lookup_object_by_id(unsigned short);
extern int call_8c21e328(void *);
extern void operation_8c21e3c0(void *, int);
void operation_8c0fc9b8(Object *o)
{
    unsigned short v45;
    int v2;
    int t1;
    int v1;
    int t2;
    v45 = (unsigned short)o->f68;
    if (v45 != 0xffff) {
        t1 = lookup_object_by_id((unsigned short)v45);
        if (t1 != 0) {
            v1 = (int)0x2c0;
            v2 = (int)0;
            while (4 > v2) {
                t2 = call_8c21e328((void *)(*(S_x21744_0 **)((char *)((char *)(t1 + v1) + 0x0) + (v2 * 0xc))));
                operation_8c21e3c0((void *)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v2 + 3 << 2))), t2);
                v2 = (int)(v2 + 1);
            }
        }
    }
}
