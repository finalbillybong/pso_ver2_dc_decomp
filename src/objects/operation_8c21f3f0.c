typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2e18c0 S_g8c2e18c0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x18];
    int f1c;
};
extern int call_8c05fbf8(void *, int, int, int);
void operation_8c21f3f0(Object *o)
{
    int v1;
    int t1;
    if (((o->tag & 1)) != 0) {
        v1 = (int)((unsigned int)(unsigned int)(unsigned int)o->f1c >> 2 >> 2 >> 1 & 0xf);
        if (v1 >= 0 && !(v1 >= 9)) {
            t1 = call_8c05fbf8((void *)(*(S_g8c2e18c0 **)((char *)0x8c2e18c0 + (v1 << 2))), 0, 0, 0);
            v1 = (int)t1;
        }
    }
}
