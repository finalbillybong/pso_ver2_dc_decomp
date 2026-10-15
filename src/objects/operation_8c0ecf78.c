typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    int f2c;
    char unknown30[0x144];
    unsigned char f174;
};
extern void call_8c38af22(int, int);
extern void call_8c38b09e(void *, float);
void operation_8c0ecf78(Object *o, int a1)
{
    switch ((char)a1) {
    case 0:
        call_8c38af22(0, (int)(o->f174 << 0x18 | 0xffffff));
        call_8c38b09e((void *)(((char *)o + 0x94)), 1.0f);
        call_8c38b09e((void *)(((char *)o + 0xb4)), 1.0f);
        call_8c38b09e((void *)(((char *)o + 0xd4)), 1.0f);
        return;
    case 1:
        switch (o->f2c) {
        case 1:
            call_8c38af22(0, (int)(o->f174 << 0x18 | 0xffffff));
            call_8c38b09e((void *)(((char *)o + 0xf4)), 1.0f);
            call_8c38b09e((void *)(((char *)o + 0x114)), 1.0f);
            call_8c38b09e((void *)(((char *)o + 0x134)), 1.0f);
            return;
        case 2:
            call_8c38af22(0, (int)(o->f174 << 0x18 | 0xffffff));
            call_8c38b09e((void *)(((char *)o + 0x94)), 1.0f);
            call_8c38b09e((void *)(((char *)o + 0xb4)), 1.0f);
            call_8c38b09e((void *)(((char *)o + 0xd4)), 1.0f);
        }
    }
}
