typedef struct S_c8c021ef8 S_c8c021ef8;
struct S_c8c021ef8 {
    char unknown0[0xbc8];
    void *fbc8;
};
typedef struct Object Object;
struct Object {
    char unknown0[0x82];
    short f82;
};
extern int g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern unsigned int operation_8c16ad38(void *, void *);
extern int find_record_8c0744dc(void *);
extern void operation_8c1cd6f4(void *, int, void *);
extern void operation_8c1cdb14(void *, int);
extern void operation_8c1cdc30(void *);
void operation_8c1d5120(Object *o, int a1)
{
    char frame[0x78];
    unsigned int n;
    unsigned int i;
    int v3;
    int off;
    int id;
    S_c8c021ef8 *t1;
    int t3;
    t1 = lookup_low_id(g_8c418248);
    if (t1 != 0) {
        n = operation_8c16ad38(t1->fbc8, frame);
        off = 0x134;
        id = (unsigned short)a1;
        for (i = 0; i < n; i++) {
            v3 = i << 2;
            t3 = find_record_8c0744dc(*(void **)(frame + v3));
            if (t3 != 0 && *(unsigned char *)(t3 + off) == id) {
                operation_8c1cd6f4(o, t3, *(void **)(frame + v3));
            }
        }
        if (!(o->f82 > 0)) {
            operation_8c1cdb14(o, -1);
        }
        operation_8c1cdc30(o);
    }
}
