#define apply_at ((void (*)(void *))0x8c118780)
int apply_resource_118780(void *p) {
 if(!p) return 0;
 apply_at(p);
 return 1;
}
