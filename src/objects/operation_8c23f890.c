typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1d0];
    int f1d0;
    int f1d4;
    char unknown1d8[0x5c];
    int f234;
};
extern void call_8c3aa716(int);
void operation_8c23f890(Object *o)
{
    int v1;
    int v2;
    int v4;
    switch (*(int *)0x8c4689f0) {
    case 1:
        v1 = (int)(((o->f234 & 2)) != 0);
        if (v1 == 0) {
            v2 = (int)(((o->f234 & 1)) != 0);
            if (v2 != 0) {
                v4 = (int)o->f1d4;
            } else {
                v4 = (int)o->f1d0;
            }
            if (v4 != 0) {
                call_8c3aa716(v4);
            }
        }
    }
}
