typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c506144 S_g8c506144;
typedef struct S_g8c506144_0 S_g8c506144_0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct S_x20912 S_x20912;
typedef struct S_x63472 S_x63472;
typedef struct S_x63664 S_x63664;
typedef struct S_x73280 S_x73280;
typedef struct S_x77584 S_x77584;
typedef struct S_x85680 S_x85680;
struct S_g8c506144_0 {
    char f00;
};
struct S_x77584 {
    float f00;
};
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
struct S_x20912 {
    float f00;
};
struct S_x73280 {
    float f00;
};
struct S_x85680 {
    float f00;
};
struct S_x63664 {
    float f00;
};
struct S_x63472 {
    float f00;
};
extern S_g8c506144 *g_8c506144;
void operation_8c2262b8(Object *o)
{
    unsigned int v2;
    int v1;
    int v3;
    int v5;
    int pm12;
    int pm8;
    int pm11;
    unsigned int pm2;
    char *pm9;
    S_x73280 *pm5;
    unsigned int pm10;
    unsigned int pm3;
    pm11 = 0;
    v2 = (unsigned int)pm11;
    v1 = (unsigned short)0x192c;
    while (v2 < (unsigned int)*(int *)((char *)o + (int)v1)) {
        int pm4;
        pm4 = (int)(v2 << 2);
        pm12 = pm4;
        pm11 = pm12;
        v3 = pm11;
        switch ((int)(int)(*(S_g8c506144_0 **)((char *)g_8c506144 + v3))->f00) {
            case 0x23:
            v5 = (int)((v2 << 3));
            pm2 = 0x8c226528;
            if (((int ( *) ( Object *, float ))pm2)(o, ((S_x77584 *)(v5 + (char *)(int *)((char *)o + 0x30)))->f00) != 0) {
                pm5 = (S_x73280 *)(v5 + (char *)(int *)(0x30 + (char *)o));
                ((void ( *) ( float , float , float , Object *, void *, S_g8c506144_0 *))0x8c2263b8)(((S_x20912 *)((char *)(int *)(0x2c + (char *)o) + v5))->f00, (pm5)->f00, 0.801f, o, o->f24, *(S_g8c506144_0 **)((char *)g_8c506144 + v3));
            }
            break;
            case 0x21:
            ((void ( *) ( Object *))0x8c226478)(o);
            break;
            case 0x40:
            pm10 = 0x8c2264d0;
            pm3 = pm10;
            ((void ( *) ( Object *))pm3)(o);
            break;
            default:
            pm8 = (int)((v2 << 3));
            v5 = pm8;
            if (((int ( *) ( Object *, float ))0x8c226528)(o, ((S_x85680 *)(v5 + (char *)(int *)(0x30 + (char *)o)))->f00) != 0) {
                S_x63664 *pm13;
                char *pm7;
                S_x63472 *pm1;
                unsigned int pm6;
                pm1 = (S_x63472 *)(v5 + (char *)(int *)(0x30 + (char *)o));
                pm9 = (char *)o + 0x2c;
                pm7 = (char *)(int *)(pm9);
                pm13 = (S_x63664 *)(pm7 + v5);
                pm6 = 0x8c087354;
                ((void ( *) ( float , float , float , void *, S_g8c506144_0 *))pm6)((pm13)->f00, (pm1)->f00, 0.804f, o->f24, *(S_g8c506144_0 **)(((char *)g_8c506144 + v3)));
            }
            break;
        }
        v2 += 1;
    }
}
