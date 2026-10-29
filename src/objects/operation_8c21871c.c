typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
extern int call_8c011ecc(int);
extern void operation_8c218780(void *, int, int);
int operation_8c21871c(Object *o)
{
    int v1;
    int v2;
    int t1;
    int w1;
    if (o != 0) {
        v1 = (int)0;
        v2 = (int)0;
        while (v1 == 0) {
            w1 = *(int *)((char *)((char *)o + 0x4) + (v2 << 3));
            if (*(int *)((char *)((char *)o + 0x0) + (v2 << 3)) == 0 && w1 == 0) {
                v1 = (int)v2;
            }
            v2 = (int)(v2 + 1);
        }
        if (v1 != 0) {
            t1 = call_8c011ecc(0x10);
            if (t1 != 0) {
                operation_8c218780((void *)t1, (int)(o), v1);
            }
            return (int)(t1);
        }
    }
    return 0;
}
