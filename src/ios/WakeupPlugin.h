//
//  WakeupPlugin.h
//
//  Created by Brad Kammin on 4/29/14.
//
//

#import <Cordova/CDVPlugin.h>
#import <Cordova/CDVPluginResult.h>

#ifdef __IPHONE_8_0
#define GregorianCalendar NSCalendarIdentifierGregorian
#else
#define GregorianCalendar NSGregorianCalendar
#endif

#ifdef __IPHONE_7_0
#define YearCalendarUnit NSCalendarUnitYear
#else
#define YearCalendarUnit NSYearCalendarUnit
#endif

#ifdef __IPHONE_7_0
#define MonthCalendarUnit NSCalendarUnitMonth
#else
#define MonthCalendarUnit NSMonthCalendarUnit
#endif

#ifdef __IPHONE_7_0
#define DayCalendarUnit NSCalendarUnitDay
#else
#define DayCalendarUnit NSDayCalendarUnit
#endif

#ifdef __IPHONE_7_0
#define WeekdayCalendarUnit NSCalendarUnitWeekday
#else
#define WeekdayCalendarUnit NSWeekdayCalendarUnit
#endif

#ifdef __IPHONE_7_0
#define WeekCalendarUnit NSCalendarUnitWeekOfMonth
#else
#define WeekCalendarUnit NSWeekCalendarUnit
#endif

#ifdef __IPHONE_7_0
#define HourCalendarUnit NSCalendarUnitHour
#else
#define HourCalendarUnit NSHourCalendarUnit
#endif

#ifdef __IPHONE_7_0
#define MinuteCalendarUnit NSCalendarUnitMinute
#else
#define MinuteCalendarUnit NSMinuteCalendarUnit
#endif

#ifdef __IPHONE_7_0
#define SecondCalendarUnit NSCalendarUnitSecond
#else
#define SecondCalendarUnit NSSecondCalendarUnit
#endif

@interface WakeupPlugin : CDVPlugin

- (void)wakeup:(CDVInvokedUrlCommand*)command;
- (void)snooze:(CDVInvokedUrlCommand*)command;

@end
