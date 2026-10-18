typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void call_8c144d8c(Object *);
extern void send_code_8c14472c(void *, int);
void operation_8c144c84(Object *o)
{
    short v1;
    v1 = (short)o->f30a;
    if ((short)v1 != 0x1f && (short)v1 != 0x20) {
        if ((unsigned int)1 >= (unsigned int)(unsigned short)(v1 + -0x14)) {
            call_8c144d8c(o);
            return;
        }
        if ((unsigned int)1 >= (unsigned int)(unsigned short)(v1 + -0x16)) {
            send_code_8c14472c((void *)o, 0x1f);
            return;
        }
        send_code_8c14472c((void *)o, 0x1e);
    }
}
