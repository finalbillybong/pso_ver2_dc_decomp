typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block100 {
    int words[25];
} Block100;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg1 Arg1;
struct Object {
    Arg0_0 *tag;
    int f04;
    char unknown8[0x10];
    char dispatch;
    char unknown19[0x33];
    Vector3 f4c;
    Block100 f58;
};
struct Arg1 {
    char unknown0[0xc];
    int f0c;
    Vector3 f10;
    char unknown1c[0x44];
    Block100 f60;
};
extern int operation_8c1dc708(int);
extern void call_8c12b154(void *, void *, int);
extern int call_8c217c60(void *);
extern int call_8c217d0c(int, void *);
void operation_8c217b3c(Object *o, Arg1 *a1)
{
    char *v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    o->tag = (Arg0_0 *)a1->f0c;
    v1 = (char *)*(int *)0x8c505240;
    *(int *)0x8c505240 += 1;
    o->f04 = (int)(v1);
    o->f4c = a1->f10;
    o->f58 = a1->f60;
    t1 = operation_8c1dc708((int)(o->tag));
    if (t1 == 0) {
        call_8c12b154((void *)(((char *)o + 0x8)), (void *)(((char *)o + 0x9c)), 0x10);
    } else {
        call_8c12b154((void *)(((char *)o + 0x8)), (void *)(t1 + 8), 0x10);
    }
    o->dispatch = 0;
    t2 = call_8c217c60((void *)(((char *)a1 + 0x1c)));
    t3 = call_8c217d0c(t2, (void *)(((char *)o + 0x19)));
    t4 = call_8c217d0c(t3, (void *)(((char *)o + 0x2a)));
    t5 = call_8c217d0c(t4, (void *)(((char *)o + 0x2a)));
    call_8c217d0c(t5, (void *)(((char *)o + 0x3b)));
}
