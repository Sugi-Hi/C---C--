int get_sec_birth_day(int year,int month, int day)
{
  time_t time_1,time_2;
  struct tm birth;
  int lday;
  birth.tm_sec=0;
  birth.tm_min=0;
  birth.tm_hour=0;
  birth.tm_mday=day;
  birth.tm_mon=month-1;
  birth.tm_year=year-1900;
  birth.tm_isdst=-1;

  time_1=time(NULL);
  time_2=mktime(&birth);
  lday=difftime(time_1,time_2)/60/60/24;
  return(lday);

}