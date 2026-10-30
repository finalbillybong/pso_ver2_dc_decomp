typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x25456 S_x25456;
typedef struct S_x43216 S_x43216;
typedef struct S_x4656 S_x4656;
typedef struct S_x6064 S_x6064;
struct S_x25456 {
    float f00;
};
struct S_x4656 {
    float f00;
};
struct S_x6064 {
    float f00;
};
struct S_x43216 {
    float f00;
};
extern int call_8c12b944(void);
void operation_8c1bf87c(Object *o, int a1)
{
    unsigned char v1;
    int v2;
    int t1;
    int pm2;
    int pm5;
    int pm4;
    int pm8;
    int pm10;
    int pm6;
    int pm3;
    int pm7;
    unsigned char pm11;
    char *pm9;
    pm11 = (unsigned char)*(unsigned char *)((a1) + (char *)(0x124 + (char *)o));
    v1 = pm11;
    if (!(v1 == 1)) {
        if ((int)v1 == 2) {
            goto L_8c1bf90a;
        }
        v2 = (int)(a1 << 2);
        ((S_x25456 *)((int)o + 0x104 + v2))->f00 += 0.05f;
        t1 = call_8c12b944();
        if (!(((S_x4656 *)((int)o + 0x104 + v2))->f00 > ((float)t1 / 32768.0f))) {
            return;
        }
        *(char *)((char *)((char *)o + 0x124) + (a1)) = 1;
        ((S_x4656 *)((int)o + 0x104 + v2))->f00 = 0.0f;
        return;
    }
    pm5 = 0x104;
    pm4 = (int)o;
    pm6 = a1 << 2;
    ((S_x6064 *)(pm4 + 0x104 + (a1 << 2)))->f00 = ((S_x6064 *)(0x104 + pm4 + (a1 << 2)))->f00 - 0.05f;
    pm2 = pm5 + (int)o;
    pm3 = pm2 + (pm6);
    if (!(((S_x6064 *)(pm3))->f00 > -1.0f)) {
        *(char *)((a1) + (char *)((char *)o + 0x124)) = (char)2;
        pm3 = (int)o;
        v2 = pm3 + 0x104;
        ((S_x6064 *)(v2 + (a1 << 2)))->f00 = -1.0f;
        return;
    L_8c1bf90a:
        ;
        pm10 = (int)o;
        pm8 = 0x104;
        t1 = a1 << 2;
        pm6 = (int)o;
        pm7 = 0x104 + (int)o;
        ((S_x43216 *)(pm8 + pm6 + (t1)))->f00 = 0.05f + ((S_x43216 *)(pm10 + pm8 + (a1 << 2)))->f00;
        if (((S_x43216 *)(pm7 + (a1 << 2)))->f00 > 0.0f) {
            pm9 = (char *)o + 0x124;
            *(char *)((pm9) + (a1)) = 0;
        }
    }
}
