//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface WAItemViewEvent : NSObject
{
    _Bool _replied;
    int _unread;
    int _messageType;
    int _viewCount;
    double _loadTime;
    double _viewTime;
    double _presentationTime;
    NSNumber *_experimentGroupID;
}

@property(retain, nonatomic) NSNumber *experimentGroupID; // @synthesize experimentGroupID=_experimentGroupID;
@property(nonatomic) int viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(nonatomic) _Bool replied; // @synthesize replied=_replied;
@property(nonatomic) double presentationTime; // @synthesize presentationTime=_presentationTime;
@property(nonatomic) double viewTime; // @synthesize viewTime=_viewTime;
@property(nonatomic) double loadTime; // @synthesize loadTime=_loadTime;
@property(nonatomic) int unread; // @synthesize unread=_unread;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
