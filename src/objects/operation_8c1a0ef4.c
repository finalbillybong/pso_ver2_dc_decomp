typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_39c Arg0_39c;
struct Object {
    char unknown0[0x398];
    float f398;
    Arg0_39c *f39c;
    char unknown3a0[0x8];
    int f3a8;
};
extern float call_8c37eb0c(void *);
extern void operation_8c04a43c(void *, void *, float);
void operation_8c1a0ef4(Object *o)
{
    float t1;
    {
        int *pf1 = (int *)((char *)o + 0x39c);
        *pf1 = (int)((float)*pf1 + 2184.0f);
    }
    t1 = call_8c37eb0c((void *)(o->f39c));
    o->f398 = t1 + 20.0f;
    operation_8c04a43c((void *)o, (void *)(((char *)o + 0x3ac)), o->f398);
    o->f3a8 += 0x147;
}
