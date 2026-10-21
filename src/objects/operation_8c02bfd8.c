typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
    short f06;
};
extern int lookup_object_by_id(unsigned short);
extern void operation_23959c(void *, void *, int);
void operation_8c02bfd8(Object *o)
{
    int v1;
    int v2;
    int v5;
    int t1;
    {
        Object *base = o;
        v1 = (int)(base->f06 >= 0);
        if (v1 != 0) {
            if (base->f02 == 0xffff) {
                v5 = (int)0;
            } else {
                if ((int)base->f02 >= 0xc) {
                    v5 = (int)0;
                } else {
                    v2 = (int)*(int *)((char *)0x8c41ce2c + (base->f02 << 2));
                    v5 = (int)v2;
                }
            }
            if (v5 != 0) {
                t1 = lookup_object_by_id((unsigned short)(base->f04));
                if (t1 != 0) {
                    operation_23959c((void *)(v5 + 0x714), (void *)t1, (int)(base->f06));
                }
            }
        }
    }
}
