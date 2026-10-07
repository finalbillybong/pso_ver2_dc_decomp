#include "src/include/effect_manager.h"
#include "src/include/text_buffer.h"
extern unsigned char input_state[];
extern const char format_base[];
extern EffectResource *presets[];
extern void color_at(unsigned int);
extern void draw_at(unsigned int,const char *,...);
#define key_at ((int (*)(int))0x8c01e148)
#define convert_at ((int (*)(int))0x8c0a02cc)
#define text_at ((int (*)(TextBuffer *))0x8c01e32c)
#define copy_at ((void (*)(void *,void *,int))0x8c12b154)
#define bind_at ((void (*)(Effect *,EffectResource *))0x8c0a75f0)
extern void save_at(EffectManager *,void *,void *,int);
#define fields_at ((void (*)(EffectManager *,EffectResource *,EffectResource *))0x8c0a939c)
#define edit_at ((void (*)(EffectManager *))0x8c0a841c)
#define position_at ((void (*)(Effect *,EffectVector *))0x8c0a7608)
#define pause_at ((void (*)(Effect *))0x8c0a727c)
#define advance_at ((void (*)(Effect *))0x8c0a7290)
#define display_at ((void (*)(EffectManager *))0x8c0a8624)
#define input98 (*(unsigned int *)(input_state+0x98))
#define inputa0 (*(unsigned int *)(input_state+0xa0))
#define count (*(int *)0x8c303c10)
#define resources (*(EffectResource **)0x8c46f100)

/* Checked composition of the existing manager and text-buffer views. */
typedef char check_manager_text_cursor[
    ((unsigned long)&((EffectManager *)0)->field3c +
     (unsigned long)&((TextBuffer *)0)->field10) == 76 ? 1 : -1];

/* Provisional mode/input names preserve the observed editor and effect flow. */
void update_effect_manager(EffectManager *p) {
    switch (p->field70) {
    case 0:
        if (key_at(6)) {
            if (count < 512) count++;
        }
        if (input98 & 0x20000) {
            if (inputa0 & 0x80) {
                p->field74++;
                if (p->field74 >= count) p->field74 = 0;
            } else if (inputa0 & 0x40) {
                p->field74--;
                if (p->field74 < 0) p->field74 = count - 1;
            }
        } else {
            if (input98 & 0x80) {
                p->field74++;
                if (p->field74 >= count) p->field74 = 0;
            } else if (input98 & 0x40) {
                p->field74--;
                if (p->field74 < 0) p->field74 = count - 1;
            }
        }
        p->resource = resources + p->field74;
        p->field78 = p->resource->words[4];
        p->field7c = convert_at(p->resource->words[5]);
        if (!p->field68) {
            if (text_at((TextBuffer *)p->field3c) >= 0)
                copy_at(p->resource, p->field54, 16);
        }
        if (inputa0 & 0x80) {
            copy_at(p->field54, p->resource, 16);
            *(int *)((unsigned char *)p + 76) = 0;
        }
        if (inputa0 & 0x40) {
            *(int *)((unsigned char *)p + 76) = 0;
            copy_at(p->field54, p->resource, 16);
        }
        color_at(0xffffff00);
        draw_at(0x000a0005, format_base + 54);
        color_at(0xffff0000);
        draw_at(0x000f0008, format_base + 64);
        draw_at(0x000f000a, format_base + 86);
        color_at(0xfff0f0f0);
        if (input98 & 4) {
            if (inputa0 & 0x400) {
                bind_at(p->effect, p->resource);
                p->field64 = 1;
                p->field70 = 1;
            }
        }
        if (input98 & 0x10000) {
            if (inputa0 & 4)
                save_at(p, *(void **)0x8c303c0c,
                        (void *)0x8c46f100, count * 152);
        }
        break;
    case 1:
        color_at(0xffffff00);
        draw_at(0x000a0005, format_base + 110);
        color_at(0xffff0000);
        draw_at(0x000f0008, format_base + 123);
        draw_at(0x000f0009, format_base + 151);
        color_at(0xfff0f0f0);
        if (key_at(42))
            fields_at(p, *(EffectResource **)((unsigned char *)presets +
                                             (p->field78 << 2)),
                      resources + p->field74);
        if (key_at(75)) p->field78++;
        if (key_at(78)) p->field78--;
        p->field78 = p->field78 < 0 ? 0 : (p->field78 < 2 ? p->field78 : 2);
        {
            EffectResource *resource = p->resource;
            int value = p->field78;
            if (resource->words[4] != value) resource->words[4] = value;
        }
        edit_at(p);
        if (input98 & 4) {
            if (inputa0 & 0x400) {
                p->field70 = 0;
                copy_at(p->field54, p->resource, 16);
            }
        }
        break;
    }
    if (key_at(44)) p->field64 ^= 1;
    position_at(p->effect, &p->position);
    if (!p->field64) {
        pause_at(p->effect);
        if (inputa0 & 8) advance_at(p->effect);
    }
    display_at(p);
}
