typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x4];
    int f08;
    char unknownc[0x28];
    int f34;
    int f38;
};
extern unsigned char g_8c41ccec[];
static inline void collect(int *dst, unsigned char *ids)
{
    int j;
    int c;
    int i;
    for (i = 0; i < 6; i++) {
        c = ids[i];
        if (c != 0) {
            for (j = 0; j < 6; j++) {
                if (c == *(int *)((char *)0x8c2e34c8 + (j << 2))) {
                    *dst |= *(int *)((char *)0x8c2e34b0 + (j << 2));
                }
            }
        }
    }
}
int operation_8c01d8d4(Object *o)
{
    o->tag = 0;
    o->f08 = 0;
    collect(&o->tag, g_8c41ccec + 2);
    collect(&o->f08, g_8c41ccec + 8);
    o->f34 = o->tag;
    o->f38 = o->f08;
    return 0;
}
