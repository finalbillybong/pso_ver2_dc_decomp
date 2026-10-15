typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467880 S_g8c467880;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_x62656 S_x62656;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_g8c467880 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_x62656 {
    float f00;
};
extern void clear_words_8c053d64(void);
extern void call_8c0525b4(Object *);
extern void call_8c13f1d8(int, int, float);
void operation_8c164710(Object *o)
{
    int v2;
    int v1;
    clear_words_8c053d64();
    call_8c0525b4(o);
    if (((o->fdc->f18 & 0x200000)) != 0) {
        v2 = (int)0;
        v1 = (int)0x188;
        while (0x10 > v2) {
            if (*(int *)((char *)0x8c467880 + (v2 << 2)) != 0) {
                call_8c13f1d8((int)((*(S_g8c467880 **)((char *)0x8c467880 + (v2 << 2)))->f20), 0, ((S_x62656 *)((int)o + v1))->f00);
            }
            v2 = (int)(v2 + 1);
        }
    }
}
