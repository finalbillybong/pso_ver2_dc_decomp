typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x110];
    unsigned char f13c;
};
extern void call_8c38af22(int, int);
extern void call_8c38b09e(void *, float);
void operation_8c0ec120(Object *o, int a1)
{
    switch ((char)a1) {
    case 0:
        call_8c38af22(0, (int)(o->f13c << 0x18 | 0xffffff));
        call_8c38b09e((void *)(((char *)o + 0x7c)), 1.0f);
        call_8c38b09e((void *)(((char *)o + 0x9c)), 1.0f);
        call_8c38b09e((void *)(((char *)o + 0xbc)), 1.0f);
        return;
    case 1:
        switch (o->f28) {
        case 1:
            call_8c38af22(0, (int)(o->f13c << 0x18 | 0xffffff));
            call_8c38b09e((void *)(((char *)o + 0xdc)), 1.0f);
            call_8c38b09e((void *)(((char *)o + 0xfc)), 1.0f);
            call_8c38b09e((void *)(((char *)o + 0x11c)), 1.0f);
            return;
        case 2:
            call_8c38af22(0, (int)(o->f13c << 0x18 | 0xffffff));
            call_8c38b09e((void *)(((char *)o + 0x7c)), 1.0f);
            call_8c38b09e((void *)(((char *)o + 0x9c)), 1.0f);
            call_8c38b09e((void *)(((char *)o + 0xbc)), 1.0f);
        }
    }
}
