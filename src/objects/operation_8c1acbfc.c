typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
struct Object {
    int tag;
};
struct S_vv4 {
    unsigned char f00;
    char f01;
    short f02;
};
extern int operation_8c028cb8(void *, int);
extern int call_8c1ac704(int, unsigned char, char);
void operation_8c1acbfc(Object *o, int a1)
{
    int v2;
    int v1;
    int v3;
    S_vv4 *v4;
    int t1;
    int t2;
    v2 = (int)0;
    v1 = (int)-2;
    while (4 > v2) {
        if (o->tag == 0) {
            v3 = (int)((char *)o + 0x4);
        } else {
            v3 = (int)((char *)o + 0x14);
        }
        v4 = (S_vv4 *)&*(int *)((char *)((char *)v3 + 0x0) + (v2 << 2));
        t1 = operation_8c028cb8((void *)a1, v2);
        if (t1 == 0) {
            v4->f02 &= v1;
        } else {
            t2 = call_8c1ac704(a1, v4->f00, v4->f01);
            if (t2 != 0) {
                v4->f02 |= 1;
            } else {
                v4->f02 &= v1;
            }
        }
        v2 = (int)(v2 + 1);
    }
}
