typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0d9e2c_sa0 S_c8c0d9e2c_sa0;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x134];
    unsigned char f134;
    char unknown135[0x1];
    unsigned char f136;
};
struct Object {
    char unknown0[0x198];
    short f198;
    short f19a;
    char unknown19c[0x194];
    short f330;
    short f332;
    char unknown334[0x84];
    Arg0_3b8 *f3b8;
};
struct S_c8c0d9e2c_sa0 {
    char unknown0[0x4];
    unsigned short f04;
};
extern int operation_8c02b2a4(void);
extern int operation_239238(void *);
extern int find_entry_8c0d9e2c(int, int, int);
extern int operation_8c029430(void);
int operation_8c028ef8(Object *o, Arg1 *a1)
{
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = operation_8c02b2a4();
    if (t1 != 0) {
        t2 = operation_239238((void *)((void *)0x8c41ce5c));
        if ((unsigned char)t2 == 2) {
            return 0;
        }
    }
    switch (a1->f134) {
    case 3:
        switch (a1->f136) {
        case 0:
            if (!(o->f330 >= o->f198)) {
                goto L_8c028fa6;
            }
            return 0;
        case 1:
            if (!(o->f332 >= o->f19a)) {
                goto L_8c028fa6;
            }
            return 0;
        case 4:
            if (o->f3b8 == 0) {
                goto L_8c028fa6;
            }
            t3 = find_entry_8c0d9e2c((int)(o->f3b8), 4, 9);
            if (t3 != 0) {
                if (((S_c8c0d9e2c_sa0 *)((char *)t3 + 0xa0))->f04 != 0xffff) {
                    goto L_8c028fa6;
                }
            }
            return 0;
        case 7:
            t4 = operation_8c029430();
            if (t4 == 0) {
                return 0;
            }
        }
    }
L_8c028fa6:;
    return 1;
}
