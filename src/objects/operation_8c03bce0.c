typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    int f04;
};
extern int operation_8c01d728(void *);
extern int call_8c09e748(int, int);
extern int operation_8c03bd74(void *);
extern void operation_8c03bd98(void *);
extern void operation_8c03bd88(void *);
void operation_8c03bce0(Object *o, int a1)
{
    int v1;
    char *v2;
    int v3;
    int v4;
    int t1;
    int t2;
    int t3;
    v1 = (int)(((o->tag & 2)) != 0);
    if (v1 == 0) {
        v2 = (char *)*(int *)0x8c44be04;
        t1 = operation_8c01d728((void *)a1);
        t2 = call_8c09e748((int)(v2), t1);
        if (t2 != 0) {
            v3 = (int)(((o->tag & 1)) != 0);
            if (v3 != 0) {
                o->tag = (unsigned int)o->tag >> 1 << 1;
                o->f04 = 0x5a;
                return;
            }
            t3 = operation_8c03bd74((void *)o);
            if (t3 != 0) {
                return;
            }
            operation_8c03bd98((void *)o);
            return;
        }
        v4 = (int)(((o->tag & 1)) != 0);
        if (v4 == 0) {
            operation_8c03bd88((void *)o);
        }
    }
}
