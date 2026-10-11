extern void *create_effect(float *, int, int);
extern void bind_id(void *, unsigned short);

void *create_bound_effect_8c02a728(char *o, int kind)
{
    void *effect = create_effect((float *)(o + 0x324), kind, 0x10);
    if (!effect) return 0;
    bind_id(effect, *(short *)(o + 0x20));
    return effect;
}
