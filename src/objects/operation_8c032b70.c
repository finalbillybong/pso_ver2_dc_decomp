typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
extern int call_8c12b0cc(void);
extern void call_8c18e720(int, void *);
void operation_8c032b70(Object *o)
{
    int t1;
    int v4;
    unsigned char pm5;
    int v5;
    char *pm3;
    int v3;
    char *pm2;
    int pm6;
    unsigned char pm4;
    t1 = call_8c12b0cc();
    pm6 = (int)0;
    v3 = 0x20;
    v4 = (int)t1;
    v5 = pm6;
    goto L_8c032b86;
L_8c032b84:
    ;
    v5 = (int)(v5 + 1);
L_8c032b86:
    ;
    pm3 = (char *)((char *)o + 0x0);
    if (v4 >= v5) {
        if (v3 >= *(unsigned char *)(pm3 + (v5))) {
            goto L_8c032b84;
        }
    }
    if (v5 > v4) {
        call_8c18e720((int)(o), (void *)((void *)0x8c2e89c0));
        return;
    L_8c032ba6:
        ;
        pm2 = (char *)(0x0 + (char *)o);
        *(pm2 + (v4)) = 0;
        v4 = v4 - 1;
    }
    pm4 = *(unsigned char *)((char *)(0x0 + (char *)o) + (v4));
    pm5 = pm4;
    if ((int)pm5 <= 0x20) {
        goto L_8c032ba6;
    }
    call_8c18e720((int)(o), (void *)((int)o + v5));
}
