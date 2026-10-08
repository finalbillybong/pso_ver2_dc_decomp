int find_effect_resource(unsigned int value) {
 int result=0;int i;
 for(i=0;i<55;i++)if(*(unsigned int *)((char *)0x8c46eda4+(i<<2))==value){result=i;break;}
 return result;
}
