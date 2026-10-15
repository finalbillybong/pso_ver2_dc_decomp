typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x60];
    int f60;
    int f64;
    int f68;
    char unknown6c[0xae];
    short f11a;
};
extern void call_8c38ae68(void);
extern int operation_8c026554(void *);
extern void call_8c38ad10(int);
void operation_8c137ae8(Object *o, int a1, int a2)
{
    int v1;
    int t1;
    call_8c38ae68();
    o->f64 = a2;
    o->f60 = -0x4000;
    v1 = (int)o->f11a;
    t1 = operation_8c026554((void *)a1);
    o->f68 = (int)(*(int *)((char *)0x8c286238 + (v1 + t1 * 3 << 2)));
    call_8c38ad10(0x68);
}
