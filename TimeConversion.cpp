//Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
//Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
//- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
string timeConversion(string s) {
    string hour_string = "";
    int hour_value = 0;
       if(s.find("PM") != string::npos){
           //found time in PM
           string hour_string  = s.substr(0,2);
           int hour_value = stoi(hour_string);
         
          if(hour_value + 12 >= 24)
           return s.erase(s.size() - 2);

           hour_value += 12;
           string military_hour_value = to_string(hour_value);
           return s.replace(0,2,military_hour_value).erase(s.size() - 2); 
       }
       else{
           hour_string = s.substr(0,2);
           int hour_value = stoi(hour_string);

           if(hour_value == 12)
            return s.replace(0,2,"00").erase(s.size() - 2);
        
           return s.erase(s.size() - 2);
       }
           
}