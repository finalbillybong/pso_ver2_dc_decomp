typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c469c24 S_L8c469c24;
typedef struct S_L8c469c24_4 S_L8c469c24_4;
typedef struct Frame Frame;
typedef struct S_g8c469c24 S_g8c469c24;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x24];
    Vector3 f6c;
    char unknown78[0x6c];
    int fe4;
    char unknowne8[0x4];
    float fec;
    float ff0;
    char ff4;
    char unknownf5[0x3];
    int ff8;
    char unknownfc[0x8];
    Arg0_104 *f104;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_L8c469c24 {
    S_g8c469c24 *f00;
    S_L8c469c24_4 *f04;
};
struct S_L8c469c24_4 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c469c24 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c469c44;
extern S_L8c469c24 g_8c469c24;
extern int operation_03d080(unsigned short);
extern void operation_8c05426c(void *, int, int);
extern int operation_8c0a2144(int);
extern void operation_8c0a237c(void *, void *);
extern void operation_8c0a21a4(void);
extern int operation_8c082fc0(int, int, float);
extern void operation_8c05428c(void *, int, int);
extern void call_8c05fd7c(int, Object *, void *, int, int);
void operation_8c082470(Object *o)
{
    Frame frame;
    float v15;
    int v16;
    float v19;
    int t1;
    int t2;
    int t3;
    int t4;
    switch (o->fe4) {
    case 0:
        t1 = operation_03d080((unsigned short)(o->f104));
        if ((unsigned char)t1 == 1) {
            if (g_8c469c44 == 0) {
                o->ff0 = 0.0f;
            }
            if (o->ff4 == 0) {
                o->fe4 = 2;
            } else {
                o->fe4 = 1;
            }
        }
        operation_8c05426c((void *)o, 0, 1);
        return;
    case 1:
        if (o->ff4 == 1) {
            t2 = operation_8c0a2144(6);
            if (t2 != 0) {
                *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f3c;
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f6c;
                operation_8c0a237c((void *)(&frame), (void *)(&(&frame)->f0c));
                o->ff4 = 2;
            }
        }
        if (o->ff4 == 2) {
            if (--o->ff8 == 0) {
                operation_8c0a21a4();
                o->fe4 = 2;
                return;
            }
        }
        if (!(o->ff8 > 0x3c)) {
            return;
        }
        o->ff0 += 2.0f;
        if (!(o->ff0 > (float)(unsigned int)((&g_8c469c24)->f04->f04 + -1))) {
            return;
        }
        o->ff0 = 0.0f;
        return;
    case 2:
        operation_8c05426c((void *)o, 0, 1);
        t3 = operation_8c082fc0((int)o, 0, 70.0f);
        if (t3 == 0) {
            return;
        }
        o->fec = 0.0f;
        o->fe4 = 4;
        operation_8c05428c((void *)o, 0, 1);
        return;
    case 4:
        call_8c05fd7c(0x40008, o, (void *)(&o->f3c), 0, 0);
        o->fec += 1.8f;
        if (!(o->fec > (float)(unsigned int)(v16 = (int)((&g_8c469c24)->f00->f04 + -1)))) {
            return;
        }
        o->fec = (float)(unsigned int)v16;
        o->fe4 = 5;
        return;
    case 3:
        call_8c05fd7c(0x40008, o, (void *)(&o->f3c), 0, 0);
        o->fec -= 1.8f;
        if (!(0.0f > o->fec)) {
            return;
        }
        o->fec = 0.0f;
        o->fe4 = 2;
        return;
    case 5:
        operation_8c05428c((void *)o, 0, 1);
        t4 = operation_8c082fc0((int)o, 1, 100.0f);
        if (t4 != 0) {
            o->fe4 = 3;
            operation_8c05426c((void *)o, 0, 1);
        }
        return;
    }
}
