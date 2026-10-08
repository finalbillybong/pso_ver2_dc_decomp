#define query_at ((int (*)(void *))0x8c03347c)
extern "C" int effect_query_is_true(void *effect){if(!effect)return 0;return query_at(effect) ? 1 : 0;}
