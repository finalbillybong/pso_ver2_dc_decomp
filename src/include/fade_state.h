#ifndef PSO_FADE_STATE_H
#define PSO_FADE_STATE_H
/* Provisional fade state; callback identity and wider owner type are unknown. */
typedef struct FadeState {
    char unknown00[24];
    void *dispatch;
    char unknown1c[4];
    float amount;
    unsigned char red, green, blue, unknown27;
    int active;
    void (*callback)(void);
} FadeState;
typedef char check_FadeState_dispatch[(unsigned long)&((FadeState *)0)->dispatch == 24 ? 1 : -1];
typedef char check_FadeState_amount[(unsigned long)&((FadeState *)0)->amount == 32 ? 1 : -1];
typedef char check_FadeState_red[(unsigned long)&((FadeState *)0)->red == 36 ? 1 : -1];
typedef char check_FadeState_green[(unsigned long)&((FadeState *)0)->green == 37 ? 1 : -1];
typedef char check_FadeState_blue[(unsigned long)&((FadeState *)0)->blue == 38 ? 1 : -1];
typedef char check_FadeState_active[(unsigned long)&((FadeState *)0)->active == 40 ? 1 : -1];
typedef char check_FadeState_callback[(unsigned long)&((FadeState *)0)->callback == 44 ? 1 : -1];
typedef char check_FadeState_size[sizeof(FadeState) == 48 ? 1 : -1];
#endif
