/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c0e78
 * function: TObjCityAirCar_Ctrl_update_8c1c0e78
 * language: c
 * reference size: 528 bytes
 * compiled size: 528 bytes (+0.0%)
 * differing lines: 22 of 225 reference instruction lines
 * differing bytes: 29
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Group {
    int timer;
    int n;
    void *items[2];
} Group;
typedef struct Object {
    char unknown0[0x28];
    int f28;
} Object;
extern void *g_8c4d97e0;
extern int hierarchy_is_active(void *);
extern int rand(void);
extern float floor_e(float);
extern float operation_8c1c1190(void *);
extern float operation_8c1c119c(void *);
extern void *heap_alloc_8c122700(void *, unsigned int);
extern void TObjCityAirCar_Car_ctor_8c1c108c(void *, Object *, int, int, float);
void TObjCityAirCar_Ctrl_update_8c1c0e78(Object *o)
{
    void *e;
    int i;
    Group *g;
    int t;
    int n;
    int j;
    int k;
    int kind;
    float s;
    void *p;
    for (i = 0; i < 5; i++) {
        g = (Group *)((char *)o + (i << 4) + 0x2c);
        t = g->timer;
        n = g->n;
        for (j = 0; j < n; j++) {
            if (*(void **)((char *)g->items + (j << 2)) == 0 || hierarchy_is_active(*(void **)((char *)g->items + (j << 2))) == 0) {
                n--;
                for (k = j; k < n; k++) {
                    *(void **)((char *)g->items + (k << 2)) = *(void **)((char *)&g->items[1] + (k << 2));
                }
                *(void **)((char *)g->items + (n << 2)) = 0;
                j--;
            }
        }
        if (n < 2) {
            t--;
            if (!(t > 0)) {
                t = (int)((float)rand() / 32768.0f * 720.0f + 180.0f);
                if ((unsigned int)i <= 1) {
                    kind = (int)floor_e((float)rand() / 32768.0f * 5.0f);
                } else {
                    kind = (int)floor_e((float)rand() / 32768.0f * 4.0f) + 1;
                }
                k = -1;
                if ((unsigned int)(i + k) <= 1) {
                    o->f28++;
                    if (kind == 4) {
                        if (o->f28 >= 0x28) {
                            o->f28 = 0;
                        } else {
                            kind = 2;
                        }
                    }
                }
                j = rand();
                k = i << 2;
                s = *(float *)(k + 0x8c4e2c94) * ((float)j / 32768.0f * 3.0f + 2.0f);
                if (n > 0) {
                    e = *(void **)((char *)&g->n + (n << 2));
                    if (*(float *)(k + 0x8c4e2c80) * 0.5f > operation_8c1c1190(e)) {
                        s = operation_8c1c119c(e);
                    }
                }
                p = heap_alloc_8c122700(g_8c4d97e0, 0xb0);
                if (p != 0) {
                    TObjCityAirCar_Car_ctor_8c1c108c(p, o, i, kind, s);
                }
                *(void **)((char *)g->items + (n << 2)) = p;
                n++;
            }
        }
        g->n = n;
        g->timer = t;
    }
}
