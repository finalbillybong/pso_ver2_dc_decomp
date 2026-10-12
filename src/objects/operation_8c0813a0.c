typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    short fe8;
    char unknownea[0x2];
    int fec;
};
extern int operation_03d080(unsigned short);
extern void operation_8c05426c(void *, int, int);
void operation_8c0813a0(Object *o)
{
    int t1;
    t1 = operation_03d080((unsigned short)o->fe8);
    if ((unsigned char)t1 == 0) {
        operation_8c05426c((void *)o, 0, 1);
        o->fec = 0;
    }
}
