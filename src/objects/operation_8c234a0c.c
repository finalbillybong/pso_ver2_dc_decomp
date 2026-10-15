typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e];
    char f3e;
    char f3f;
    char f40;
    char f41;
    char f42;
    char f43;
    char f44;
    char f45;
    char f46;
    char f47;
    char f48;
    char f49;
    char f4a;
    char f4b;
    char f4c;
};
extern void store_bounded_8c2390e0(void *, unsigned char);
extern void store_bounded3_8c2390f0(void *, unsigned char);
extern void store_bounded_8c239100(void *, unsigned char);
extern void store_bounded_8c239110(void *, unsigned char);
extern void store_bounded_8c239120(void *, unsigned char);
extern void operation_8c239130(void *, char);
extern void operation_8c239140(void *, char);
extern void operation_8c239150(void *, char);
extern void operation_8c239160(void *, char);
extern void operation_8c239170(void *, char);
extern void operation_8c239180(void *, char);
extern void operation_8c239190(void *, char);
extern void operation_8c2391a0(void *, char);
extern void operation_8c2391d0(void *, int);
extern void operation_8c2391b0(void *, char);
extern int lookup_low_id(int);
extern void call_8c02b2d8(void);
void operation_8c234a0c(Object *o)
{
    int t1;
    store_bounded_8c2390e0((void *)((void *)0x8c41ce5c), (unsigned char)(o->f3e));
    store_bounded3_8c2390f0((void *)((void *)0x8c41ce5c), (unsigned char)(o->f3f));
    store_bounded_8c239100((void *)((void *)0x8c41ce5c), (unsigned char)(o->f40));
    store_bounded_8c239110((void *)((void *)0x8c41ce5c), (unsigned char)(o->f41));
    store_bounded_8c239120((void *)((void *)0x8c41ce5c), (unsigned char)(o->f42));
    operation_8c239130((void *)((void *)0x8c41ce5c), o->f43);
    operation_8c239140((void *)((void *)0x8c41ce5c), o->f44);
    operation_8c239150((void *)((void *)0x8c41ce5c), o->f45);
    operation_8c239160((void *)((void *)0x8c41ce5c), o->f46);
    operation_8c239170((void *)((void *)0x8c41ce5c), o->f47);
    operation_8c239180((void *)((void *)0x8c41ce5c), o->f48);
    operation_8c239190((void *)((void *)0x8c41ce5c), o->f49);
    operation_8c2391a0((void *)((void *)0x8c41ce5c), o->f4a);
    operation_8c2391d0((void *)((void *)0x8c41ce5c), (int)(o->f4b));
    operation_8c2391b0((void *)((void *)0x8c41ce5c), o->f4c);
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        call_8c02b2d8();
    }
}
