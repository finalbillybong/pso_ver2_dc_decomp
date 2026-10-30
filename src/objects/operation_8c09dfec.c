typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv5 S_vv5;
typedef struct Block_vv5_0 {
    short f00;
    char unknown2[0xe];
} Block_vv5_0;
struct S_vv5 {
    Block_vv5_0 f00;
};
struct Object {
    short tag;
};
struct Arg1 {
    Block16 f00;
};
extern int current_effect_mode(void);
int operation_8c09dfec(Object *o, Arg1 *a1)
{
    S_vv5 *v5;
    int v2;
    int v1;
    short v3;
    short k;
    int t1;
    char *v4;
    v1 = 0;
    t1 = current_effect_mode();
    v2 = (int)*(int *)((char *)0x8c2ee8b8 + (t1 << 2));
    v4 = (char *)v2;
    v5 = (S_vv5 *)v2;
    v3 = (short)-1;
    while (v4 != 0 && (k = v5->f00.f00, k != (int)v3)) {
        short pm2;
        pm2 = o->tag;
        if (k == (int)(int)pm2) {
            *(&a1->f00) = *(Block16 *)&v5->f00;
            return (int)(v1);
        }
        v5 = (S_vv5 *)((char *)v5 + 16);
        v1 = (int)(v1 + 1);
    }
    return -1;
}
