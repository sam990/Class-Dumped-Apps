//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWEPOILiveRoomModel : NSObject
{
    NSString *_roomID;
    NSString *_anchorID;
    NSString *_liveRoomEnterFrom;
    unsigned long long _bindState;
    NSString *_poiID;
}

@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(nonatomic) unsigned long long bindState; // @synthesize bindState=_bindState;
@property(copy, nonatomic) NSString *liveRoomEnterFrom; // @synthesize liveRoomEnterFrom=_liveRoomEnterFrom;
@property(copy, nonatomic) NSString *anchorID; // @synthesize anchorID=_anchorID;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (void)setPOI:(id)arg1;

@end

