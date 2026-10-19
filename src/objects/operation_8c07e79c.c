typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c284f60 S_L8c284f60;
typedef struct Object Object;
struct Object {
    char unknown0[0x136];
    unsigned char f136;
};
struct S_L8c284f60 {
    int f00;
    int f04;
    int f08;
};
extern S_L8c284f60 g_8c284f60;
extern int call_8c07f034(Object *);
extern int operation_8c207304(void *);
extern void operation_8c07e920(void *);
extern void operation_8c07e998(void *);
extern int call_8c18e8a0(int, int);
extern void call_8c07ea94(Object *);
extern void operation_8c07e868(void *);
void operation_8c07e79c(Object *o)
{
    int t2;
    int t1;
    unsigned char v1;
    int t3;
    int s;
    t2 = call_8c07f034(o);
    t1 = operation_8c207304((void *)(((char *)o + 0x1e4)));
    v1 = (unsigned char)o->f136;
    s = (short)t1;
    if (s >= (&g_8c284f60)->f00 && (&g_8c284f60)->f04 > s) {
        if (1 > (char)t2) {
            operation_8c07e920((void *)o);
        }
    } else if (s >= (&g_8c284f60)->f04 && (&g_8c284f60)->f08 > s) {
        if (2 > (char)t2) {
            operation_8c07e998((void *)o);
        }
    } else if (s >= (&g_8c284f60)->f08) {
        t3 = call_8c18e8a0(s, 5);
        if (t3 == 0 && 3 >= (char)t2) {
            call_8c07ea94(o);
        }
    }
    if ((unsigned char)v1 != o->f136) {
        operation_8c07e868((void *)o);
    }
}
