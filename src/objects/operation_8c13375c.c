typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block68 {
    int words[17];
} Block68;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    Vector3 f20;
    char unknown2c[0x10];
    Block68 f3c;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern void call_8c03ce84(void);
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c13375c(Object *o)
{
    S_c8c021ef8 *t1;
    call_8c03ce84();
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        o->f20 = t1->f3c;
    }
    o->f3c = *(Block68 *)0x8c418280;
}
