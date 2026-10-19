typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x188];
    int f1c4;
    char unknown1c8[0x10];
    int f1d8;
    char unknown1dc[0x3c];
    int f218;
};
extern void operation_8c07f984(void *);
extern int operation_193348(unsigned int);
extern void call_8c07f0a4(Object *);
extern int current_mode_active(void);
extern void call_8c07e03c(Object *);
extern void operation_8c07d79c(void *);
extern void operation_8c07d7e0(void *);
extern void operation_8c07d820(void *);
extern void operation_8c07d868(void *);
extern void operation_8c07d89c(void *);
extern void operation_8c07d8c0(void *);
extern void operation_8c07d8e0(void *);
extern void call_8c07d900(Object *);
void operation_8c07d668(Object *o)
{
    char *v28;
    int v8;
    int t1;
    int t2;
    operation_8c07f984((void *)o);
    if (o->f38 == 0) {
        v28 = (char *)o->f1c4;
        if ((int)(v28) != -1) {
            t1 = operation_193348((unsigned int)v28);
            if (t1 == 1) {
                call_8c07f0a4(o);
            }
        }
    }
    if (((o->f1d8 & 0x20)) == 0) {
        if (((o->f1d8 & 0x10)) == 0) {
        } else {
            t2 = current_mode_active();
            if (t2 != 0) {
                call_8c07e03c(o);
            } else {
                return;
            }
        }
        v8 = (int)(o->f1d8 & 0xf);
        switch (v8) {
        case 1:
            operation_8c07d79c((void *)o);
            break;
        case 4:
            operation_8c07d7e0((void *)o);
            break;
        case 6:
            operation_8c07d820((void *)o);
            break;
        case 7:
            operation_8c07d868((void *)o);
            break;
        case 5:
            operation_8c07d89c((void *)o);
            break;
        case 2:
            operation_8c07d8c0((void *)o);
            break;
        case 3:
            operation_8c07d8e0((void *)o);
            break;
        case 8:
            call_8c07d900(o);
        case 0:
            break;
        }
        o->f218 += 1;
    }
}
