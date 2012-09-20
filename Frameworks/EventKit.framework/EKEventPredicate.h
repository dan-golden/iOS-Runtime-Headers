/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString, NSTimeZone;

@interface EKEventPredicate : EKPredicate  {
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uuid;
    NSTimeZone *_timeZone;
    BOOL _shouldLoadDefaultProperties;
}

@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;
@property(readonly) NSString * eventUUID;
@property(readonly) NSTimeZone * timeZone;
@property(readonly) BOOL shouldLoadDefaultProperties;

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;

- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)timeZone;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldLoadDefaultProperties;
- (id)eventUUID;
- (id)endDate;
- (id)startDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;

@end