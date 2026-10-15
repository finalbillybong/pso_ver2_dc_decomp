typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469da4 S_g8c469da4;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct S_vv21 S_vv21;
struct Object {
    char unknown0[0x44];
    Arg0_44 *f44;
    Arg0_48 *f48;
    char unknown4c[0x80];
    Vector3 fcc;
    Vector3 fd8;
    Vector3 fe4;
    char unknownf0[0x10];
    int f100;
    Arg0_104 *f104;
    int f108;
    int f10c;
};
struct S_vv21 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c469da4 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x18];
    Vector3 f60;
    Vector3 f6c;
};
extern char g_8c3002d8[];
extern int call_8c08d7fc(Object *, void *);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c08c36c(Object *o)
{
    S_vv21 *v21;
    int v29;
    int t1;
    if (*(int *)0x8c469da4 == 0) {
        t1 = call_8c08d7fc(o, (void *)(((char *)o + 0xc0)));
        *(int *)0x8c469da4 = (int)(t1);
    }
    if (o->f108 != o->f10c && *(int *)0x8c469da4 != 0) {
        v21 = (S_vv21 *)*(S_g8c469da4 **)0x8c469da4;
        v21->f04 |= 1;
        *(int *)0x8c469da4 = 0;
    }
    if (*(int *)0x8c469da4 != 0) {
        *(Vector3 *)&(*(S_g8c469da4 **)0x8c469da4)->f3c = *(Vector3 *)&o->fcc;
        *(Vector3 *)&(*(S_g8c469da4 **)0x8c469da4)->f60 = *(Vector3 *)&o->fd8;
        *(Vector3 *)&(*(S_g8c469da4 **)0x8c469da4)->f6c = *(Vector3 *)&o->fe4;
        v29 = (int)0;
        while (3 > v29) {
            *(int *)((char *)((char *)*(S_g8c469da4 **)0x8c469da4 + 0x88) + (v29 << 2)) = (int)(*(int *)((char *)((char *)o + 0xf0) + (v29 << 2)));
            v29 = (int)(v29 + 1);
        }
    }
    call_8c38c5b6(-0xf0f10);
    if (o->f100 != 0) {
        call_8c38cf80(0x1000f, (void *)((g_8c3002d8 + 0x15a)));
    } else {
        call_8c38cf80(0x1000f, (void *)((g_8c3002d8 + 0x15a)));
    }
    call_8c38cf80(0x10010, (void *)((g_8c3002d8 + 0x16a)), (int)o->f108 + 1, o->f104);
    call_8c38cf80(0x10011, (void *)((g_8c3002d8 + 0x17f)), o->f48, o->f44);
}
