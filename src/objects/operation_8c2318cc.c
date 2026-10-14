typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_7fc S_c8c021ef8_7fc;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
struct Object {
    char unknown0[0x54];
    Arg0_54 *f54;
    int f58;
};
struct S_c8c021ef8 {
    char unknown0[0x7fc];
    S_c8c021ef8_7fc *f7fc;
};
extern char g_8c41bd34[];
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c20985c(void);
extern int call_8c2319e4(void *);
extern void call_8c1ab894(Object *, int);
extern int operation_8c247d90(void *);
extern void operation_8c1ab8e8(void *, int);
extern void operation_8c1ab5ec(void *);
void operation_8c2318cc(Object *o)
{
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    int t4;
    t1 = lookup_low_id((int)(o->f54));
    if (t1 != 0) {
        t2 = operation_8c20985c();
        if (o->f58 != t2) {
            o->f58 = (int)(t2);
            t3 = call_8c2319e4((void *)(o->f54));
            call_8c1ab894(o, t3);
            if (t3 != 0) {
                if (o->f58 == 3) {
                    t4 = operation_8c247d90((void *)((int)(o->f54) * 0xbc + g_8c41bd34 + 4));
                    operation_8c1ab8e8((void *)o, t4);
                } else {
                    operation_8c1ab8e8((void *)o, (int)(t1->f7fc));
                }
            }
        }
        operation_8c1ab5ec((void *)o);
    }
}
