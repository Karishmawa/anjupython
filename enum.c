//Enumerator in c programming
/*
Enum keyword is used
user defined data type
enum week {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
// The enumerator starts from 0 by default, so sunday=0, monday=1, tuesday=2, wednesday=3, thursday=4, friday=5, saturday=6
// You can also assign values to the enumerator, for example:   
enum week {sunday=1, monday, tuesday, wednesday, thursday, friday, saturday};
// In this case, sunday=1, monday=2, tuesday=3, wednesday=4, thursday=5, friday=6, saturday=7
// You can also assign values to the enumerator, for example:   
enum week {sunday=1, monday=2, tuesday=3, wednesday=4, thursday=5, friday=6, saturday=7};   
*/
#include <stdio.h>
enum week {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
int main() {
    enum week today;
    today = tuesday; 
    printf("Day %d ",today+1); 
    
  
    
    return 0;
}
