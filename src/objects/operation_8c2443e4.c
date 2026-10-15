typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct Object Object;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x32];
    S_g8c46fe20_54 *f54;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
struct Object {
    char unknown0[0x64];
    int f64;
};
extern void operation_8c244710(void *);
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c026700(int, int);
extern void call_8c0fe2f4(void);
extern void call_8c187648(void *);
extern void call_8c173ad0(void *);
extern void call_8c09ec40(void);
extern void operation_8c256b30(void);
extern void call_8c09ee44(void);
extern void process_entries_8c03c180(void *);
void operation_8c2443e4(Object *o)
{
    int v38;
    int v39;
    S_c8c021ef8 *t1;
    S_c8c021ef8 *t2;
    S_c8c021ef8 *t3;
    operation_8c244710((void *)o);
    t1 = lookup_low_id((int)((unsigned short)*(int *)0x8c418248));
    if (t1 != 0) {
        operation_8c026700((int)t1, -1);
    }
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 0x20;
    }
    if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f54 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f54->f22 |= 8;
    }
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 1;
        if (*(int *)0x8c4d59d8 != 0) {
            (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 |= 0x10;
        }
    }
    t2 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t2 != 0) {
        t2->f34 |= 0x20000;
    }
    call_8c0fe2f4();
    call_8c187648((void *)(*(S_g8c44be88 **)0x8c44be88));
    call_8c173ad0((void *)(*(S_g8c44be84 **)0x8c44be84));
    call_8c09ec40();
    operation_8c256b30();
    call_8c09ee44();
    o->f64 = 0;
    v38 = (int)0x74c;
    v39 = (int)0;
    while (4 > v39) {
        t3 = lookup_low_id(v39);
        if (t3 != 0) {
            process_entries_8c03c180((void *)((int)t3 + v38));
        }
        v39 = (int)(v39 + 1);
    }
}
