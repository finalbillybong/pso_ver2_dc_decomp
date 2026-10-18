typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    float f08;
    float f0c;
    Block20 f10;
    char f24;
    char f25;
    char f26;
    char f27;
};
struct Arg2 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Object {
    Block20 tag;
};
extern int g_8c44be04;
extern int g_8c5134c0;
extern int lookup_low_id(int);
extern int operation_8c01d728(void *);
extern void call_8c1c9418(void *);
extern void operation_8c0368a8(void *);
void operation_8c073b5c(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    int t1;
    int t2;
    (&frame)->f04 = 0;
    (&frame)->f06 = 0;
    (&frame)->f0c = 0.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f00 = 0x5d;
    (&frame)->f01 = 9;
    (&frame)->f24 = 2;
    (&frame)->f25 = 0;
    (&frame)->f26 = 0;
    (&frame)->f27 = 0;
    (&frame)->f01 = 0xa;
    t1 = lookup_low_id((int)((unsigned short)a1));
    if (t1 == 0) {
        g_8c5134c0 = 1;
        return;
    }
    (&frame)->f02 = a1;
    (&frame)->f04 = g_8c44be04;
    t2 = operation_8c01d728((void *)t1);
    (&frame)->f06 = t2;
    (&frame)->f08 = a2->f00;
    (&frame)->f0c = a2->f08;
    *(Block20 *)&(&frame)->f10 = *(Block20 *)&o->tag;
    call_8c1c9418((void *)(&(&frame)->f10));
    operation_8c0368a8((void *)(&frame));
}
