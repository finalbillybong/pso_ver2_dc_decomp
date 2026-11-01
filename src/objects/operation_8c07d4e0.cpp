typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_s510 Arg0_0_s510;
typedef struct S_x15888_0 S_x15888_0;
class S_vv6;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    char unknownf0[0x4c];
    int f13c;
};
struct Arg0_0_s510 {
    char unknown0[0x4];
    int f04;
    float f08;
};
class S_vv6 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
typedef struct S_vv6Data {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x60];
    float fcc;
} S_vv6Data;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TItemMag_v26_8c07d4e0(Object *o)
{
    S_vv6 *v6;
    int v4;
    int v3;
    char *v5;
    int v1;
    int v7;
    int v2;
    float v8;
    int v9;
    if (o->f13c != 0 && ((o->f34 & 0x8000000)) == 0 && ((o->fec & 0x40)) == 0) {
        njPushMatrixEx_8c38ae68();
        v1 = (int)0x13c;
        v9 = (int)0x510;
        v2 = (int)0x1f4;
        v3 = (int)(((((Arg0_0_s510 *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + v9))->f04 & 1)) != 0);
        v4 = (int)0;
        v5 = (char *)v3;
        while (v4 != 2) {
            v6 = (S_vv6 *)*(S_x15888_0 **)((char *)((char *)((int)o + v2) + 0x0) + (v4 << 2));
            if (v6 != 0) {
                v7 = !(((S_vv6Data *)v6)->f68 & 0x40);
                if (v7 != 0) {
                    if (v5 != 0) {
                        v8 = (float)((Arg0_0_s510 *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + v9))->f08;
                        ((S_vv6Data *)v6)->fcc *= v8;
                        v6->v2();
                        ((S_vv6Data *)v6)->fcc *= 1.0f / v8;
                    } else {
                        v6->v2();
                    }
                }
            }
            v4 = (int)(v4 + 1);
        }
        njPopMatrixEx_8c38ad10();
    }
}
