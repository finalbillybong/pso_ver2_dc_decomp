typedef struct View { char unknown0[12807]; signed char mode; } View;
typedef char check_mode[(unsigned long)&((View *)0)->mode==12807?1:-1];
typedef char check_prefix[sizeof(View)==12808?1:-1];
extern void reset_at(void),clear_at(void),apply_at(int),refresh_at(int);
void change_signed_mode(signed char mode) {
 if(*(int *)0x8c467188!=mode) {
  View *object;
  reset_at(); clear_at();
  object=*(View **)0x8c4db9e8;
  if(object) object->mode=mode;
  *(int *)0x8c467188=mode;
  apply_at(mode);
  refresh_at(*(int *)0x8c467188);
 }
}
