//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDLPersonField.h"

@class NSString;

@protocol PDLContactMethodField <PDLPersonField>
@property(readonly, nonatomic) NSString *value;
- (id <PDLPersonPhone>)fieldAsPhone;
- (id <PDLPersonInAppNotificationTarget>)fieldAsInAppNotificationTarget;
- (id <PDLPersonEmail>)fieldAsEmail;
@end
