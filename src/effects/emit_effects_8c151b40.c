extern void *create_effect_7ab8(float *, int *, int);
extern void *create_effect_777c(float *, int);

void emit_effects_8c151b40(char *o)
{
    int orientation[3];
    orientation[0] = 0;
    orientation[1] = *(int *)(o + 0x64);
    orientation[2] = 0;
    create_effect_7ab8((float *)(o + 0x324), orientation, (*(short *)(o + 0x3a8) & 3) == 0 ? 0x62 : 0x61);
    create_effect_777c((float *)(o + 0x324), 0x45);
}
