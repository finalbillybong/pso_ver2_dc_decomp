typedef struct Entry { signed char level; signed char first; signed char second; signed char third; int spawn; int related; int argument; } Entry;
typedef struct Owner { char unknown0[0x20]; char *actor; } Owner;
extern void spawn_effect_alt_8c08b538(char *, int, int);
extern void create_related_effect_8c0bc17c(char *, int, int);
void apply_level_effects_8c07b354(Owner *o)
{
    Entry *entry = (Entry *)0x8c2fe624;
    int id = 0x824;
    int primary = 0x838;
    int secondary = 0x834;
    int alternate_id = 0x822;
    int alternate = 0x83c;
    char *actor;
    signed char level;
    signed char limit;
    for (; (level = entry->level) >= 0 && level <= (limit = *(signed char *)((actor = o->actor) + 0x815)); entry++) {
        if (limit == level) {
            int value;
            if (*(short *)(actor + id) == entry->first) value = *(int *)(actor + primary);
            else if (*(short *)(actor + id) == entry->second) value = *(int *)(actor + secondary);
            else if (*(short *)(actor + alternate_id) == entry->third) value = *(int *)(actor + alternate);
            else continue;
            if (entry->spawn) spawn_effect_alt_8c08b538(actor, value, entry->spawn);
            else if (entry->related) create_related_effect_8c0bc17c(actor, entry->related, entry->argument);
        }
    }
}
