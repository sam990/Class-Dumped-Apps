//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface GDKApprovalStatusViewModel : NSObject
{
    NSString *_status_6;
    UIColor *_statusColor_11;
    NSString *_date_4;
    UIColor *_dateColor_9;
}

@property(readonly, nonatomic) UIColor *dateColor; // @synthesize dateColor=_dateColor_9;
@property(readonly, copy, nonatomic) NSString *date; // @synthesize date=_date_4;
@property(readonly, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor_11;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status_6;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStatus:(id)arg1 statusColor:(id)arg2 date:(id)arg3 dateColor:(id)arg4;

@end

