/* Provisional effect layout: identifier at offset 0x32. */
typedef struct EffectId { unsigned char unknown[0x32]; unsigned short id; } EffectId;
typedef char check_effect_id[((unsigned long)&((EffectId *)0)->id == 0x32) ? 1 : -1];
void bind_id(EffectId *effect, unsigned short id)
{
    if (id != 0xffff) effect->id = id;
}
