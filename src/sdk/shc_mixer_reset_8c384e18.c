typedef struct { float a, r, g, b; } Color;
typedef struct { Color c[3]; float f30; } Mix;
typedef struct { int slot[32]; int count; } State;
extern int flag_8c5c6720;
extern Mix mix_8c5c6660;
extern State state_8c5c6740;

void mixer_reset_8c384e18(void)
{
    unsigned int i;
    flag_8c5c6720 = 0;
    mix_8c5c6660.c[1].a = 1.0f;
    mix_8c5c6660.c[1].r = 0.5f;
    mix_8c5c6660.c[1].g = 0.5f;
    mix_8c5c6660.c[1].b = 0.5f;
    mix_8c5c6660.c[2].a = 1.0f;
    mix_8c5c6660.c[2].r = 0.5f;
    mix_8c5c6660.c[2].g = 0.5f;
    mix_8c5c6660.c[2].b = 0.5f;
    mix_8c5c6660.c[0].a = 1.0f;
    mix_8c5c6660.c[0].r = 0.0f;
    mix_8c5c6660.c[0].g = 0.0f;
    mix_8c5c6660.c[0].b = 0.0f;
    mix_8c5c6660.f30 = 6.0f;
    state_8c5c6740.count = 0;
    for (i = 0; i < 32; i++) {
        state_8c5c6740.slot[i] = 0;
    }
}
