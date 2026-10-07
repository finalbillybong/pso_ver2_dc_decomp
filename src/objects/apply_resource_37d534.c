#define apply_at ((void (*)(void *))0x8c37d534)
int apply_resource_37d534(void *p) {
 if(!p) return 0;
 apply_at(p);
 return 1;
}
