typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0xe];
    short f30;
};
extern int g_8c3174d4;
extern void operation_8c059bc0(void *);
extern int operation_8c143048(void);
extern void operation_8c05a0b4(void *, void *);
extern void call_8c1656bc(Object *, int);
Object *operation_8c16606c(Object *o, int a1, int a2, int a3)
{
    int t1;
    {
        Object *self = o;
        Object **home = &self;
        (void)home;
        operation_8c059bc0((void *)o);
        self->dispatch = (void *)0x8c26fcec;
        self->tag = (int)(g_8c3174d4);
        self->size = 0x40c;
        t1 = operation_8c143048();
        if (t1 != 0) {
            operation_8c05a0b4((void *)self, (void *)t1);
        }
        self->f20 = a2;
        self->f30 = a3;
        call_8c1656bc(self, 0);
    }
    o->dispatch = (void *)0x8c26fb14;
    return o;
}
