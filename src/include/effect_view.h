#ifndef PSO_EFFECT_VIEW_H
#define PSO_EFFECT_VIEW_H
/* Provisional accessed prefixes; no complete allocation size is inferred. */
typedef struct EffectTableEntry {char unknown00[152];int pending;} EffectTableEntry;
typedef struct EffectLookup {char unknown00[100];int angle;} EffectLookup;
typedef char check_EffectTableEntry_pending[(unsigned long)&((EffectTableEntry *)0)->pending == 152 ? 1 : -1];
typedef char check_EffectTableEntry_size[sizeof(EffectTableEntry) == 156 ? 1 : -1];
typedef char check_EffectLookup_angle[(unsigned long)&((EffectLookup *)0)->angle == 100 ? 1 : -1];
typedef char check_EffectLookup_size[sizeof(EffectLookup) == 104 ? 1 : -1];
#ifdef __cplusplus
struct EffectViewBase {
    unsigned char unknown00[24];
    virtual void unused0();
    virtual void unused1();
    virtual void unused2();
    virtual void unused3();
    virtual void unused4();
    virtual void unused5();
    virtual void unused6();
    virtual void unused7();
    virtual void unused8();
    virtual void unused9();
    virtual void unused10();
    virtual void unused11();
    virtual void unused12();
    virtual void orient(int);
};
struct EffectView : EffectViewBase {
    char unknown1c[84];
    float target[3];
    float position[3];
    char unknown88[8];
    unsigned int flags;
};
typedef char check_EffectViewBase_size[sizeof(EffectViewBase) == 28 ? 1 : -1];
typedef char check_EffectView_target[(unsigned long)&((EffectView *)0)->target == 112 ? 1 : -1];
typedef char check_EffectView_position[(unsigned long)&((EffectView *)0)->position == 124 ? 1 : -1];
typedef char check_EffectView_flags[(unsigned long)&((EffectView *)0)->flags == 144 ? 1 : -1];
typedef char check_EffectView_size[sizeof(EffectView) == 148 ? 1 : -1];
#endif
#endif
