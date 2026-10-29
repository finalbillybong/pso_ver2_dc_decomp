typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_4 Arg0_4;
struct Object {
    Arg0_0 *tag;
    Arg0_4 *f04;
    char unknown8[0x4];
    int f0c;
};
extern int next_random_state(void *);
void operation_8c245768(Object *o)
{
    int v1;
    char *v3;
    float v6;
    float v9;
    int v2;
    char *v36;
    int v13;
    int v14;
    int v37;
    int t1;
    int pm2;
    float pm4;
    int pm3;
    pm3 = 0;
    v1 = pm3;
    goto L_8c2457d4;
    v3 = (char *)v1;
L_8c245776:
    ;
    t1 = next_random_state((void *)(o->tag));
    v6 = (float)(float)(unsigned int)v2;
    pm4 = (float)(unsigned int)t1;
    v9 = (float)pm4;
    pm2 = (int)((unsigned int)(v6 * v9 / 4294967296.0f) << 2);
    v36 = (char *)o->f04;
    v14 = pm2;
    v13 = ((int)(v3) << 2);
    v37 = (*(int *)((char *)(0x0 + (char *)v36) + (v13)));
    if ((v9 * v6 / 4294967296.0f) > 2147483648.0f) {
    }
    *(int *)((char *)(v36 + 0x0) + (v13)) = (int)(*(int *)((0x0 + (char *)v36) + (v14)));
    *(int *)((char *)((char *)o->f04 + 0x0) + (v14)) = (v37);
    v1 = (int)(v3 + 1);
L_8c2457d4:
    ;
    v2 = (int)o->f0c;
    v3 = (char *)v1;
    if (o->f0c > v1) {
        goto L_8c245776;
    }
}
