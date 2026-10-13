typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x674];
    int f760;
};
extern int operation_02c350(void *);
extern void call_8c1aa9c4(void *);
extern void call_8c1aa9dc(void *);
void operation_8c1eac38(Object *o)
{
    int t1;
    t1 = operation_02c350((void *)o);
    switch ((short)t1) {
    case 0:
        if (((o->fe8 & 0x10)) == 0) {
            return;
        }
        o->f760 |= 1;
        return;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
        if (((o->fe8 & 0x10)) == 0) {
            return;
        }
        call_8c1aa9c4((void *)(((char *)o + 0x754)));
        return;
    case 8:
        call_8c1aa9dc((void *)(((char *)o + 0x754)));
    }
}
