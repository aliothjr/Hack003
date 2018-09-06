/**
* Author Isaiah James & Chad Alioth
*This program will write an application
*for the company to help
*customers track their mobile usage
*/

#include<stdlib.h>
#include<stdio.h>

double dailyavg = 0;


int main(int argc, char const ** argv) {
  //prompt user for the inputs
  printf("please input days used\n");
  double used;
  scanf("%lf", &used);

  double daysremaining = (30)-used;

   printf("number of gd used so far\n");
    double gig;
    scanf("%lf", &gig);


    printf("Number of gb in plan per 30 days");
    double totalgig;
    scanf("%lf", &totalgig);

    double averageuse = gig/used;

    double nomore = (totalgig-gig)/daysremaining;

    double exceed = (averageuse*daysremaining)-(totalgig-gig);

double dailyavg = totalgig/(30);

    printf("days used: %lf\n", used);
    printf("days remaining:  %lf\n", daysremaining);
printf("Average daily use: %lfGB/Day\n", averageuse );
if (averageuse <= dailyavg){
  printf(" Good you are not exeeding your daily average");
}
else if (averageuse > dailyavg) {
printf("You are Exceeding your average daily use %lfGB/Day\n", dailyavg );

printf("Continuing this high usage, you'll exceed your data plan by: %lfGB/Day\n", exceed );
    printf("To stay below your data plan, use no more than: %lfGB/Day\n", nomore );
  }
  return 0;
}
