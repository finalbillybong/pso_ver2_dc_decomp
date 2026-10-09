typedef struct Pair { float first,second; } Pair;
typedef struct Control { int unknown0,mode; } Control;
typedef char check_pair_second[(unsigned long)&((Pair *)0)->second==4?1:-1];
typedef char check_pair[sizeof(Pair)==8?1:-1];
typedef char check_mode[(unsigned long)&((Control *)0)->mode==4?1:-1];
typedef char check_control[sizeof(Control)==8?1:-1];
extern Pair configuration_pair;
extern Control configuration_control;
void set_configuration_pair(const Pair *pair,int mode) {
 configuration_pair.first=pair->first;
 configuration_pair.second=pair->second;
 configuration_control.mode=mode;
}
