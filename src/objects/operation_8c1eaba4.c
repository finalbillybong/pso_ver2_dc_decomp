typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    int fec;
    short ff0;
    short ff2;
};
extern int operation_02c350(void *);
extern void call_8c0258b0(Object *, void *, void *);
extern void call_8c025a44(Object *);
void operation_8c1eaba4(Object *o)
{
    int t1;
    t1 = operation_02c350((void *)o);
    if ((short)t1 != 6 && (short)t1 != 7 && (short)t1 != 8 && (short)t1 != 9 && ((o->fe8 & 4)) == 0 && o->ff0 == o->ff2 && ((o->fec & 0x20000000)) != 0 && ((o->fe8 & 0x40)) == 0) {
        call_8c0258b0(o, ((char *)o + 0x318), ((char *)o + 0x320));
        call_8c025a44(o);
    }
}
