#ifndef PSO_COLOR_EFFECT_H
#define PSO_COLOR_EFFECT_H
/* Provisional accessed color-effect prefix; callback differs from FadeState. */
typedef struct ColorEffect {int tag;unsigned short flags;char unknown06[18];void *dispatch;char unknown1c[4];float amount;unsigned char red,green,blue,alpha;void (*callback)(void);} ColorEffect;
typedef char check_ColorEffect_tag[(unsigned long)&((ColorEffect *)0)->tag == 0 ? 1 : -1];
typedef char check_ColorEffect_flags[(unsigned long)&((ColorEffect *)0)->flags == 4 ? 1 : -1];
typedef char check_ColorEffect_dispatch[(unsigned long)&((ColorEffect *)0)->dispatch == 24 ? 1 : -1];
typedef char check_ColorEffect_amount[(unsigned long)&((ColorEffect *)0)->amount == 32 ? 1 : -1];
typedef char check_ColorEffect_red[(unsigned long)&((ColorEffect *)0)->red == 36 ? 1 : -1];
typedef char check_ColorEffect_green[(unsigned long)&((ColorEffect *)0)->green == 37 ? 1 : -1];
typedef char check_ColorEffect_blue[(unsigned long)&((ColorEffect *)0)->blue == 38 ? 1 : -1];
typedef char check_ColorEffect_alpha[(unsigned long)&((ColorEffect *)0)->alpha == 39 ? 1 : -1];
typedef char check_ColorEffect_callback[(unsigned long)&((ColorEffect *)0)->callback == 40 ? 1 : -1];
typedef char check_ColorEffect_size[sizeof(ColorEffect)==44?1:-1];
#endif
