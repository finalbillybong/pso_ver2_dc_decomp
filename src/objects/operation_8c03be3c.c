typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned short tag;
    short f02;
    int f04;
};
extern int lookup_low_id(int);
extern void operation_8c02afd8(void *);
void operation_8c03be3c(Object *o)
{
    int v1;
    int t1;
    t1 = lookup_low_id(o->tag);
    if (t1 != 0) {
        v1 = (int)(o->f04 == 1);
        if (v1 == 0) {
            o->f04 = 0;
            operation_8c02afd8((void *)t1);
            o->f02 = 4;
        }
    }
}
