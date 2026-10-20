typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510b80 S_L8c510b80;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_40 Arg0_40;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_20 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Block_p0_20 f20;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0x4];
    Arg0_40 *f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
};
struct S_L8c510b80 {
    char unknown0[0x10];
    short f10;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
extern Vector3 g_8c33965c;
extern S_L8c510b80 g_8c510b80;
extern char g_8c510b2c[];
extern void create_effect(void *, int, int);
extern void call_8c05fbf8(int, void *, int, int);
extern int create_effect_78d0(void *, void *, int, int);
extern void create_effect_777c(void *, int);
extern void call_8c0a7608(void *, void *);
void operation_8c236fc0(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v3;
    int v4;
    int v6;
    int v19;
    int v65;
    int t1;
    v1 = (int)o->f48;
    o->f48 = v1 + 1;
    if (v1 >= o->f4c) {
        create_effect((void *)(&o->f20), 0x45, 0x40);
        create_effect((void *)(&o->f20), 0x46, 0x40);
        o->f04 |= 1;
        return;
    }
    v2 = (int)o->f50;
    v6 = (int)o->f48;
    if (v2 == 0) {
        if (o->f54 != 0) {
            if (o->f58 != 0) {
                v3 = (int)0x10;
            } else {
                v3 = (int)1;
            }
            if ((((&g_8c510b80)->f10 & v3)) == 0) {
                goto L_8c237094;
            }
            call_8c05fbf8(0x20005, (void *)(&o->f20), 0, 0);
            call_8c05fbf8(0x50015, (void *)(&o->f20), 0, 0);
            o->f50 = 1;
            return;
        }
        if (o->f58 != 0) {
            v4 = (int)0x20;
        } else {
            v4 = (int)2;
        }
        if ((((&g_8c510b80)->f10 & v4)) != 0) {
            call_8c05fbf8(0x20005, (void *)(&o->f20), 0, 0);
            call_8c05fbf8(0x50015, (void *)(&o->f20), 0, 0);
            o->f50 = 1;
            return;
        }
        v6 = (int)v4;
    }
    v3 = (int)v6;
L_8c237094:;
    if (v2 != 0) {
        if (o->f40 == 0) {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c33965c;
            if (*(unsigned short *)(g_8c510b2c + 0x48) != 6) {
                t1 = create_effect_78d0((void *)(&o->f20), (void *)(&(&frame)->f0c), 0xc0, 2);
                o->f40 = (Arg0_40 *)t1;
            }
        }
        v19 = (int)o->f44;
        o->f44 = v19 + 1;
        if (v19 >= 0x3e8) {
            o->f04 |= 1;
            return;
        }
        o->f38 += 0x16c;
        if (0x14 >= o->f44) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f20;
            (&frame)->f00.f04 += 18.0f;
            create_effect_777c((void *)(&frame), 0x1db);
        }
        v65 = (int)o->f44;
        o->f20.f04 = (float)(v65 * v65) * 0.001f + o->f20.f04;
        if (o->f40 != 0) {
            call_8c0a7608((void *)(o->f40), (void *)(&o->f20));
        }
    }
}
