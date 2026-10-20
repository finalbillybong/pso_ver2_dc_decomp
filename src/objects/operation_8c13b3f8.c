typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x35c];
    int f3a4;
    float f3a8;
    Arg0_3ac *f3ac;
};
extern int call_8c18e8a0(int, int);
extern float call_8c38c154(int);
extern void call_8c38ae68(void);
extern void call_8c37b5c4(int);
extern void call_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void call_8c38ad10(void);
void operation_8c13b3f8(Object *o)
{
    int t1;
    float t2;
    float t3;
    t1 = call_8c18e8a0((int)((unsigned short)o->f3ac), 0x2aaa);
    t1 = t1 + -0x1555;
    if (((o->f3a4 & 0x20000)) != 0) {
        t2 = call_8c38c154(t1);
        o->f3a8 = 134.0f / t2;
        o->f40 = 50.0f;
    } else {
        t3 = call_8c38c154(t1);
        o->f3a8 = 128.0f / t3;
        o->f40 = 15.0f;
    }
    call_8c38ae68();
    o->f3c = o->f3a8;
    o->f44 = 0.0f;
    call_8c37b5c4(0);
    call_8c37df90(0, (void *)(o->f3ac));
    call_8c3be38c(0, (void *)(&o->f3c), (void *)(&o->f3c));
    call_8c38ad10();
}
