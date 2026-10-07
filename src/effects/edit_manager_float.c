#include "src/include/effect_manager.h"
#include "src/include/manager_scalar_edit.h"

extern const char format_base[];
extern unsigned char input_state[];
extern int format_text(char *, const char *, ...);
extern void draw_at(unsigned int, const char *, ...);
extern void set_color(unsigned int);
extern float power(float, float);
#define held (*(unsigned int *)(input_state+0x98))
#define pressed (*(unsigned int *)(input_state+0xa0))
void edit_manager_float(EffectManager *p, float *value, FloatEdit *meta, int mode, int mask) {
    char text[16];
    float change = 0.0f;
    int column;
    char character;

    if (meta->format[0] != '%') {
        int precision = meta->precision;
        format_text(meta->format,format_base+0x1d9,meta->width+precision+1,precision);
        meta->format[0] = '%';
    }
    if (mode == 0) set_color(0xffffff00); else set_color(0xfff0f0f0);
    draw_at((meta->x<<16)|meta->y,meta->format,*value);
    if (mode != 0 || !(held&mask)) {set_color(0xfff0f0f0);return;}
    if (pressed&0x40) meta->digit++;
    else if (pressed&0x80) meta->digit--;
    meta->digit = meta->digit<0?0:(meta->digit<meta->width+meta->precision-1?meta->digit:meta->width+meta->precision-1);
    if (pressed&0x10) change = 1.0f;
    else if (pressed&0x20) change = -1.0f;
    change*=power(10.0f,(float)(meta->digit-meta->precision));
    *value=*value+change;
    *value=*value<meta->minimum?meta->minimum:(*value<meta->maximum?*value:meta->maximum);
    format_text(text,meta->format,*value);
    { int precision = meta->precision;
    column = meta->width+precision-meta->digit+1-(meta->digit>=precision); }
    character = text[column];
    set_color(0xffff0000);
    draw_at(((meta->x+column)<<16)|meta->y,format_base+0x1e3,character);
    set_color(0xfff0f0f0);
}
