//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HNDEvent : NSObject
{
    int _type;
    struct CGPoint _location;
    double _deltaX;
    double _deltaY;
}

@property(nonatomic) double deltaY; // @synthesize deltaY=_deltaY;
@property(nonatomic) double deltaX; // @synthesize deltaX=_deltaX;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;

@end
