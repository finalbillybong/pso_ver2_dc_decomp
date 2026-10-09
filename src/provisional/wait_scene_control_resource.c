extern void prepare_at(void),pump_at(void),diagnostic_at(const char *,...);extern int poll_at(void *);extern char text[];
int wait_scene_control_resource(void **o) {int result;prepare_at();result=-1;for(;;) {int status=poll_at(o);if(status==1) {result=1;break;}if(status==-1) {result=-1;diagnostic_at(text+45,*(void **)o[0]);break;}pump_at();}return result;}
