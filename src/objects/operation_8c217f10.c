typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_c Arg0_c;
struct Object {
    char unknown0[0xc];
    Arg0_c *f0c;
};
extern short g_8c46fe24;
extern int g_8c505244;
extern char g_8c505304[];
extern int operation_8c217aa4(int);
extern void operation_8c217b3c(void *, void *);
void operation_8c217f10(Object *o)
{
    int t1;
    t1 = operation_8c217aa4((int)(o->f0c));
    {
        char *p = g_8c505304;
        p += t1 * 0xbc;
        operation_8c217b3c((void *)p, (void *)o);
    }
    g_8c505244 += 1;
    g_8c46fe24 |= 4;
}
