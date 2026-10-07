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
void edit_manager_integer(EffectManager *p, int *value, IntegerEdit *meta, int mode, int mask) {
    char text[16];
    int change = 0;
    int column;
    char character;

    if (meta->format[0] != '%') {
        format_text(meta->format,format_base+0x1e6,meta->width+1);
        meta->format[0] = '%';
    }
    if (mode == 0) set_color(0xffffff00); else set_color(0xfff0f0f0);
    draw_at((meta->x<<16)|meta->y,meta->format,*value);
    if (mode != 0 || !(held&mask)) {set_color(0xfff0f0f0);return;}
    if (pressed&0x40) meta->digit++;
    else if (pressed&0x80) meta->digit--;
    meta->digit = meta->digit<0?0:(meta->digit<meta->width-1?meta->digit:meta->width-1);
    if (pressed&0x10) change = 1;
    else if (pressed&0x20) change = -1;
    *value+=change*(int)(power(10.0f,(float)meta->digit)+0.5f);
    *value=*value<meta->minimum?meta->minimum:(*value<meta->maximum?*value:meta->maximum);
    format_text(text,meta->format,*value);
    column = meta->width-meta->digit;
    character = text[column];
    set_color(0xffff0000);
    draw_at(((meta->x+column)<<16)|meta->y,format_base+0x1e3,character);
    set_color(0xfff0f0f0);
}
