typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct S_c8c03b55c_e8 S_c8c03b55c_e8;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct S_c8c0744dc_e8 S_c8c0744dc_e8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct S_c8c03b55c {
    char unknown0[0xe8];
    S_c8c03b55c_e8 *fe8;
};
struct S_c8c0744dc {
    char unknown0[0xe8];
    S_c8c0744dc_e8 *fe8;
};
struct Object {
    char unknown0[0x20];
    char f20;
};
extern int lookup_low_id(int);
extern int call_8c0244c4(int);
extern S_c8c0744dc *find_record_8c0744dc(int);
extern S_c8c03b55c *call_8c03b55c(int, int);
extern void call_8c022538(int, void *);
extern void call_8c02231c(int, void *, int);
extern void call_8c02349c(int, int, int);
void operation_8c1912f0(Object *o, int a1, int a2)
{
    int t1;
    int t2;
    S_c8c03b55c *t3;
    S_c8c0744dc *t4;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = call_8c0244c4(t1);
        if (t2 != 0) {
            t4 = find_record_8c0744dc(a1);
            switch (a2) {
            case 2:
                t3 = call_8c03b55c((int)(t1 + 0xbcc), 1);
                if (t3 != 0) {
                    call_8c022538(t1, (void *)(t3->fe8));
                }
                call_8c02231c(t1, (void *)(t4->fe8), 0);
                o->f20 = 0x11;
                return;
            case 3:
                call_8c022538(t1, (void *)a1);
                o->f20 = 0x11;
                return;
            case 4:
                call_8c02349c(t1, a1, 1);
                o->f20 = 0x11;
                return;
            case 0:
            case 1:
                break;
            }
        }
    }
}
